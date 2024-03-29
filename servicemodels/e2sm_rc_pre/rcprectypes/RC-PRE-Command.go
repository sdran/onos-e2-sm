// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package rcprectypes

//#cgo CFLAGS: -I. -D_DEFAULT_SOURCE -DASN_DISABLE_OER_SUPPORT
//#cgo LDFLAGS: -lm
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include "RC-PRE-Command.h"
import "C"
import (
	"fmt"
	e2sm_rc_pre_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v1/e2sm-rc-pre-ies"
	//"unsafe"
)

//func xerEncodeRcPreCommand(rcPreCommand *e2sm_rc_pre_ies.RcPreCommand) ([]byte, error) {
//	rcPreCommandCP, err := newRcPreCommand(rcPreCommand)
//	if err != nil {
//		return nil, err
//	}
//
//	bytes, err := encodeXer(&C.asn_DEF_RC_PRE_Command, unsafe.Pointer(rcPreCommandCP)) //ToDo - change name of C-encoder tag
//	if err != nil {
//		return nil, fmt.Errorf("xerEncodeRcPreCommand() %s", err.Error())
//	}
//	return bytes, nil
//}
//
//func perEncodeRcPreCommand(rcPreCommand *e2sm_rc_pre_ies.RcPreCommand) ([]byte, error) {
//	rcPreCommandCP, err := newRcPreCommand(rcPreCommand)
//	if err != nil {
//		return nil, err
//	}
//
//	bytes, err := encodePerBuffer(&C.asn_DEF_RC_PRE_Command, unsafe.Pointer(rcPreCommandCP)) //ToDo - change name of C-encoder tag
//	if err != nil {
//		return nil, fmt.Errorf("perEncodeRcPreCommand() %s", err.Error())
//	}
//	return bytes, nil
//}
//
//func xerDecodeRcPreCommand(bytes []byte) (*e2sm_rc_pre_ies.RcPreCommand, error) {
//	unsafePtr, err := decodeXer(bytes, &C.asn_DEF_RC_PRE_Command)
//	if err != nil {
//		return nil, err
//	}
//	if unsafePtr == nil {
//		return nil, fmt.Errorf("pointer decoded from XER is nil")
//	}
//	return decodeRcPreCommand((*C.RC_PRE_Command_t)(unsafePtr)) //ToDo - change name of C-struct
//}
//
//func perDecodeRcPreCommand(bytes []byte) (*e2sm_rc_pre_ies.RcPreCommand, error) {
//	unsafePtr, err := decodePer(bytes, len(bytes), &C.asn_DEF_RC_PRE_Command)
//	if err != nil {
//		return nil, err
//	}
//	if unsafePtr == nil {
//		return nil, fmt.Errorf("pointer decoded from PER is nil")
//	}
//	return decodeRcPreCommand((*C.RC_PRE_Command_t)(unsafePtr))
//}

func newRcPreCommand(rcPreCommand *e2sm_rc_pre_ies.RcPreCommand) (*C.RC_PRE_Command_t, error) { //ToDo - change name of C-struct
	var ret C.RC_PRE_Command_t
	switch *rcPreCommand {
	case e2sm_rc_pre_ies.RcPreCommand_RC_PRE_COMMAND_SET_PARAMETERS:
		ret = C.RC_PRE_Command_setParameters
	default:
		return nil, fmt.Errorf("unexpected RC-PRE-Command %v", rcPreCommand)
	}

	return &ret, nil
}

func decodeRcPreCommand(rcPreCommandC *C.RC_PRE_Command_t) (*e2sm_rc_pre_ies.RcPreCommand, error) { //ToDo - change name of C-struct

	//ToDo: int32 shouldn't be valid all the time -- investigate in data type conversion (casting) more
	rcPreCommand := e2sm_rc_pre_ies.RcPreCommand(int32(*rcPreCommandC))

	return &rcPreCommand, nil
}
