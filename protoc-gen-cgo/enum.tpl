// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: LicenseRef-ONF-Member-1.0

package {{.PackageName}}ctypes

//#cgo CFLAGS: -I. -D_DEFAULT_SOURCE -DASN_DISABLE_OER_SUPPORT
//#cgo LDFLAGS: -lm
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include "{{underscoreToDash .CstructName}}.h"
import "C"
import (
    "fmt"
    {{.ProtoFileName}} "github.com/onosproject/onos-e2-sm/servicemodels/{{.FullPackageName}}" //ToDo - Make imports more dynamic
    "unsafe"
)

func xerEncode{{.MessageName}}({{lowCaseFirstLetter .MessageName}} *{{.ProtoFileName}}.{{.MessageName}}) ([]byte, error) {
    {{lowCaseFirstLetter .MessageName}}CP, err := new{{.MessageName}}({{lowCaseFirstLetter .MessageName}})
    if err != nil {
        return nil, err
    }

    bytes, err := encodeXer(&C.asn_DEF_{{dashToUnderscore .CstructName}}, unsafe.Pointer({{lowCaseFirstLetter .MessageName}}CP)) //ToDo - change name of C-encoder tag
    if err != nil {
        return nil, fmt.Errorf("xerEncode{{.MessageName}}() %s", err.Error())
    }
    return bytes, nil
}

func perEncode{{.MessageName}}({{lowCaseFirstLetter .MessageName}} *{{.ProtoFileName}}.{{.MessageName}}) ([]byte, error) {
    {{lowCaseFirstLetter .MessageName}}CP, err := new{{.MessageName}}({{lowCaseFirstLetter .MessageName}})
    if err != nil {
        return nil, err
    }

    bytes, err := encodePerBuffer(&C.asn_DEF_{{dashToUnderscore .CstructName}}, unsafe.Pointer({{lowCaseFirstLetter .MessageName}}CP))
    if err != nil {
        return nil, fmt.Errorf("perEncode{{.MessageName}}() %s", err.Error())
    }
    return bytes, nil
}

func xerDecode{{.MessageName}}(bytes []byte) (*{{.ProtoFileName}}.{{.MessageName}}, error) {
    unsafePtr, err := decodeXer(bytes, &C.asn_DEF_{{dashToUnderscore .CstructName}})
    if err != nil {
        return nil, err
    }
    if unsafePtr == nil {
        return nil, fmt.Errorf("pointer decoded from XER is nil")
    }
    return decode{{.MessageName}}((*C.{{dashToUnderscore .CstructName}}_t)(unsafePtr)) //ToDo - change name of C-struct
}

func perDecode{{.MessageName}}(bytes []byte) (*{{.ProtoFileName}}.{{.MessageName}}, error) {
    unsafePtr, err := decodePer(bytes, len(bytes), &C.asn_DEF_{{dashToUnderscore .CstructName}})
    if err != nil {
        return nil, err
    }
    if unsafePtr == nil {
       return nil, fmt.Errorf("pointer decoded from PER is nil")
    }
    return decode{{.MessageName}}((*C.{{dashToUnderscore .CstructName}}_t)(unsafePtr))
}

func new{{.MessageName}}({{lowCaseFirstLetter .MessageName}} *{{.ProtoFileName}}.{{.MessageName}}) (*C.{{dashToUnderscore .CstructName}}_t, error) {
    var ret C.{{dashToUnderscore .CstructName}}_t
    switch {{lowCaseFirstLetter .MessageName}} { {{with .FieldList}}{{ range . }}
            case {{.ProtoFileName}}.{{.MessageName}}_{{.FieldName}}:
                ret = C.{{.CstructLeafName}} //ToDo - double-check correctness of the name {{ end }}{{end}}
    default:
        return nil, fmt.Errorf("unexpected {{underscoreToDash .MessageName}} %v", {{lowCaseFirstLetter .MessageName}})
    }


    return &ret, nil
}

func decode{{.MessageName}}({{lowCaseFirstLetter .MessageName}}C *C.{{dashToUnderscore .CstructName}}_t) (*{{.ProtoFileName}}.{{.MessageName}}, error) {

    //ToDo: int32 shouldn't be valid all the time -- investigate in data type conversion (casting) more
    {{lowCaseFirstLetter .MessageName}} := {{.ProtoFileName}}.{{.MessageName}}(int32(*{{lowCaseFirstLetter .MessageName}}C))

    return {{lowCaseFirstLetter .MessageName}}, nil
}

func decode{{.MessageName}}Bytes(array [8]byte) (*{{.ProtoFileName}}.{{.MessageName}}, error) { //ToDo - Check addressing correct structure in Protobuf
    {{lowCaseFirstLetter .MessageName}}C := (*C.{{dashToUnderscore .MessageName}}_t)(unsafe.Pointer(uintptr(binary.LittleEndian.Uint64(array[0:]))))

    return decode{{.MessageName}}({{lowCaseFirstLetter .MessageName}}C)
}
