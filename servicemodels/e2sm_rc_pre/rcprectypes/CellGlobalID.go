// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package rcprectypes

//#cgo CFLAGS: -I. -D_DEFAULT_SOURCE -DASN_DISABLE_OER_SUPPORT
//#cgo LDFLAGS: -lm
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include "CellGlobalID.h"
import "C"
import (
	"encoding/binary"
	"fmt"
	e2sm_rc_pre_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v1/e2sm-rc-pre-ies"
	"unsafe"
)

func xerEncodeCellGlobalID(cellGlobalID *e2sm_rc_pre_ies.CellGlobalId) ([]byte, error) {

	cellGlobalIDCP, err := newCellGlobalID(cellGlobalID)
	if err != nil {
		return nil, fmt.Errorf("xerEncodeCellGlobalID() %s", err.Error())
	}

	bytes, err := encodeXer(&C.asn_DEF_CellGlobalID, unsafe.Pointer(cellGlobalIDCP))
	if err != nil {
		return nil, fmt.Errorf("xerEncodeCellGlobalID() %s", err.Error())
	}
	return bytes, nil
}

func newCellGlobalID(cellGlobalID *e2sm_rc_pre_ies.CellGlobalId) (*C.CellGlobalID_t, error) {
	var pr C.CellGlobalID_PR
	choiceC := [8]byte{}

	switch choice := cellGlobalID.CellGlobalId.(type) {
	case *e2sm_rc_pre_ies.CellGlobalId_EUtraCgi:
		pr = C.CellGlobalID_PR_eUTRA_CGI

		im, err := newEUTRACGI(choice.EUtraCgi)
		if err != nil {
			return nil, fmt.Errorf("newCellGlobalID() %s", err.Error())
		}
		binary.LittleEndian.PutUint64(choiceC[0:], uint64(uintptr(unsafe.Pointer(im))))
	default:
		return nil, fmt.Errorf("newCellGlobalID() %T not yet implemented", choice)
	}

	cellGlobalIDC := C.CellGlobalID_t{
		present: pr,
		choice:  choiceC,
	}

	return &cellGlobalIDC, nil
}

func decodeCellGlobalID(cellGlobalIDC *C.CellGlobalID_t) (*e2sm_rc_pre_ies.CellGlobalId, error) {
	cellGlobalID := new(e2sm_rc_pre_ies.CellGlobalId)

	switch cellGlobalIDC.present {
	case C.CellGlobalID_PR_eUTRA_CGI:
		eutraCgiCellGlobalID := decodeEUTRACGIBytes(cellGlobalIDC.choice)
		cellGlobalID.CellGlobalId = &e2sm_rc_pre_ies.CellGlobalId_EUtraCgi{
			EUtraCgi: eutraCgiCellGlobalID,
		}
	case C.CellGlobalID_PR_nr_CGI:
		nrCgiCellGlobalID := decodeNRCGIBytes(cellGlobalIDC.choice)
		cellGlobalID.CellGlobalId = &e2sm_rc_pre_ies.CellGlobalId_NrCgi{
			NrCgi: nrCgiCellGlobalID,
		}
	default:
		return nil, fmt.Errorf("decodeCellGlobalID() %v not yet implemented", cellGlobalIDC.present)
	}

	return cellGlobalID, nil
}
