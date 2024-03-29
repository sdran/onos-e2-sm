// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: LicenseRef-ONF-Member-1.0

package {{.PackageName}}ctypes

//#cgo CFLAGS: -I. -D_DEFAULT_SOURCE -DASN_DISABLE_OER_SUPPORT
//#cgo LDFLAGS: -lm
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include "BIT_STRING.h"
import "C"
import (
"encoding/binary"
"fmt"
{{.ProtoFileName}} "github.com/onosproject/onos-e2-sm/servicemodels/{{.FullPackageName}}" //ToDo - Make imports more dynamic
"math"
"unsafe"
)

func xerEncodeBitString(bs *{{.ProtoFileName}}.BitString) ([]byte, error) {
bsC, err := newBitString(bs)
if err != nil {
return nil, fmt.Errorf("newBitString() %s", err.Error())
}
defer freeBitString(bsC)
bytes, err := encodeXer(&C.asn_DEF_BIT_STRING, unsafe.Pointer(bsC))
if err != nil {
return nil, err
}
return bytes, nil
}

// PerEncodeGnbID - used only in tests
func perEncodeBitString(bs *{{.ProtoFileName}}.BitString) ([]byte, error) {
bsC, err := newBitString(bs)
if err != nil {
return nil, fmt.Errorf("newBitString() %s", err.Error())
}
defer freeBitString(bsC)
bytes, err := encodePerBuffer(&C.asn_DEF_BIT_STRING, unsafe.Pointer(bsC))
if err != nil {
return nil, err
}

return bytes, nil
}

func newBitString(bs *{{.ProtoFileName}}.BitString) (*C.BIT_STRING_t, error) {
numBytes := int(math.Ceil(float64(bs.Len) / 8.0))
valAsBytes := make([]byte, 8)
binary.LittleEndian.PutUint64(valAsBytes, bs.Value)
bitsUnused := numBytes*8 - int(bs.Len)

bsC := C.BIT_STRING_t{
buf:         (*C.uchar)(C.CBytes(valAsBytes[:numBytes])),
size:        C.ulong(numBytes),
bits_unused: C.int(bitsUnused),
}
//fmt.Printf("Bit string %+v\n", bsC)
return &bsC, nil
}

func newBitStringFromBytes(valAsBytes []byte, size uint64, bitsUnused int) (*C.BIT_STRING_t, error) {
bsC := C.BIT_STRING_t{
buf:         (*C.uchar)(C.CBytes(valAsBytes)),
size:        C.ulong(size),
bits_unused: C.int(bitsUnused),
}

return &bsC, nil
}

// decodeBitString - byteString in C has 20 bytes
// 8 for a 64bit address of a buffer, 8 for the size in bytes of the buffer uint64, 4 for the unused bits
// The unused bits are at the end of the buffer
func decodeBitString(bsC *C.BIT_STRING_t) (*{{.ProtoFileName}}.BitString, error) {
size := uint64(bsC.size)
bitsUnused := uint32(bsC.bits_unused)
if size > 8 {
return nil, fmt.Errorf("max size is 8 bytes (64 bits) got %d", size)
} else if bitsUnused > 7 {
return nil, fmt.Errorf("bits unused (%d) is greater than 7", bitsUnused)
}

bytes := C.GoBytes(unsafe.Pointer(bsC.buf), C.int(bsC.size))
// Need to bit shift whole array to the right by bitsUnused
//var carry byte
//mask := byte(math.Pow(2, float64(size)) - 1)
//for i := 0; i < int(size); i++ {
//prevCarry := carry << (8 - bitsUnused%8)
//carry = bytes[i] & mask
//bytes[i] = bytes[i] >> bitsUnused%8
//goBytes[i] = bytes[i] | prevCarry
//}
//fmt.Printf("bit string %x %d %d %+x %+x\n", bufAddr, size, bitsUnused, bytes, goBytes)
goBytes := make([]byte, 8)
for i := 0; i < int(size); i++ {
goBytes[i] = bytes[i]
}
bs := &{{.ProtoFileName}}.BitString{
Value: binary.LittleEndian.Uint64(goBytes),
Len:   uint32(size*8 - uint64(bitsUnused)),
}

return bs, nil
}

func freeBitString(bsC *C.BIT_STRING_t) {
C.free(unsafe.Pointer(bsC.buf))
}
