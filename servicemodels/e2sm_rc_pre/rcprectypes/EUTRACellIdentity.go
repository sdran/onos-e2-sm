// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package rcprectypes

//#cgo CFLAGS: -I. -D_DEFAULT_SOURCE -DASN_DISABLE_OER_SUPPORT
//#cgo LDFLAGS: -lm
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include "EUTRACellIdentity.h"
import "C"
import (
	"fmt"
	e2sm_rc_pre_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v1/e2sm-rc-pre-ies"
	"unsafe"
)

func xerEncodeEUTRACellIdentity(eUTRACellIdentity *e2sm_rc_pre_ies.EutracellIdentity) ([]byte, error) {
	eUTRACellIdentityCP := newEUTRACellIdentity(eUTRACellIdentity)

	bytes, err := encodeXer(&C.asn_DEF_EUTRACellIdentity, unsafe.Pointer(eUTRACellIdentityCP))
	if err != nil {
		return nil, fmt.Errorf("xerEncodeEUTRACellIdentity() %s", err.Error())
	}
	return bytes, nil
}

func perEncodeEUTRACellIdentity(eUTRACellIdentity *e2sm_rc_pre_ies.EutracellIdentity) ([]byte, error) {
	eUTRACellIdentityCP := newEUTRACellIdentity(eUTRACellIdentity)

	bytes, err := encodePerBuffer(&C.asn_DEF_EUTRACellIdentity, unsafe.Pointer(eUTRACellIdentityCP))
	if err != nil {
		return nil, fmt.Errorf("perEncodeEUTRACellIdentity() %s", err.Error())
	}
	return bytes, nil
}

func newEUTRACellIdentity(eUTRACellIdentity *e2sm_rc_pre_ies.EutracellIdentity) *C.EUTRACellIdentity_t {
	eUTRACellIdentityC := newBitString(eUTRACellIdentity.Value)

	return eUTRACellIdentityC
}

func decodeEUTRACellIdentity(eUTRACellIdentityC *C.EUTRACellIdentity_t) (*e2sm_rc_pre_ies.EutracellIdentity, error) {
	eUTRACellIdentity := new(e2sm_rc_pre_ies.EutracellIdentity)

	eUTRACellIdentityBs, err := decodeBitString(eUTRACellIdentityC)
	if err != nil {
		return nil, fmt.Errorf("decodeEUTRACellIdentity() %s", err.Error())
	}
	eUTRACellIdentity.Value = eUTRACellIdentityBs

	return eUTRACellIdentity, nil
}
