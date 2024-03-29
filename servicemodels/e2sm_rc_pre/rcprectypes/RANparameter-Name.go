// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package rcprectypes

//#cgo CFLAGS: -I. -D_DEFAULT_SOURCE -DASN_DISABLE_OER_SUPPORT
//#cgo LDFLAGS: -lm
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include "RANparameter-Name.h"
import "C"

import (
	//"fmt"
	e2sm_rc_pre_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v1/e2sm-rc-pre-ies"
	//"unsafe"
)

//func xerEncodeRanparameterName(ranparameterName *e2sm_rc_pre_ies.RanparameterName) ([]byte, error) {
//	ranparameterNameCP, err := newRanparameterName(ranparameterName)
//	if err != nil {
//		return nil, fmt.Errorf("xerEncodeRanparameterName() %s", err.Error())
//	}
//
//	bytes, err := encodeXer(&C.asn_DEF_RANparameter_Name, unsafe.Pointer(ranparameterNameCP))
//	if err != nil {
//		return nil, fmt.Errorf("xerEncodeRanparameterName() %s", err.Error())
//	}
//	return bytes, nil
//}
//
//func perEncodeRanparameterName(ranparameterName *e2sm_rc_pre_ies.RanparameterName) ([]byte, error) {
//	ranparameterNameCP, err := newRanparameterName(ranparameterName)
//	if err != nil {
//		return nil, fmt.Errorf("xerEncodeRanparameterName() %s", err.Error())
//	}
//
//	bytes, err := encodePerBuffer(&C.asn_DEF_RANparameter_Name, unsafe.Pointer(ranparameterNameCP))
//	if err != nil {
//		return nil, fmt.Errorf("perEncodeRanparameterName() %s", err.Error())
//	}
//	return bytes, nil
//}
//
//func xerDecodeRanparameterName(bytes []byte) (*e2sm_rc_pre_ies.RanparameterName, error) {
//	unsafePtr, err := decodeXer(bytes, &C.asn_DEF_RANparameter_Name)
//	if err != nil {
//		return nil, err
//	}
//	if unsafePtr == nil {
//		return nil, fmt.Errorf("pointer decoded from XER is nil")
//	}
//	return decodeRanparameterName((*C.RANparameter_Name_t)(unsafePtr))
//}
//
//func perDecodeRanparameterName(bytes []byte) (*e2sm_rc_pre_ies.RanparameterName, error) {
//	unsafePtr, err := decodePer(bytes, len(bytes), &C.asn_DEF_RANparameter_Name)
//	if err != nil {
//		return nil, err
//	}
//	if unsafePtr == nil {
//		return nil, fmt.Errorf("pointer decoded from PER is nil")
//	}
//	return decodeRanparameterName((*C.RANparameter_Name_t)(unsafePtr))
//}

func newRanparameterName(ranparameterName *e2sm_rc_pre_ies.RanparameterName) (*C.RANparameter_Name_t, error) {

	ranparameterNameC := newPrintableString(ranparameterName.Value)
	return ranparameterNameC, nil
}

func decodeRanparameterName(ranparameterNameC *C.RANparameter_Name_t) (*e2sm_rc_pre_ies.RanparameterName, error) {

	ranparameterName := new(e2sm_rc_pre_ies.RanparameterName)
	ranparameterName.Value = decodePrintableString(ranparameterNameC)
	return ranparameterName, nil
}
