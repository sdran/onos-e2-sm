// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package kpmv2ctypes

import (
	"github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/pdubuilder"
	e2sm_kpm_v2 "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/v2/e2sm-kpm-v2"
	"gotest.tools/assert"
	"testing"
)

func createE2SMKPMIndicationHeaderFormat1() (*e2sm_kpm_v2.E2SmKpmIndicationHeaderFormat1, error) {

	//bs := e2sm_kpm_v2.BitString{
	//	Value: 0x9bcd4,
	//	Len:   22,
	//}
	//plmnID := []byte{0x21, 0x22, 0x23}
	timeStamp := []byte{0x21, 0x22, 0x23, 0x24}
	//var gnbCuUpID int64 = 12345
	//var gnbDuID int64 = 6789
	var fileFormatVersion string = "txt"
	var senderName string = "ONF"
	//var senderType string = "someType"
	var vendorName string = "onf"

	//globalKpmNodeID, err := pdubuilder.CreateGlobalKpmnodeIDgNBID(&bs, plmnID, gnbCuUpID, gnbDuID)
	//if err != nil {
	//	return nil, err
	//}
	newE2SmKpmPdu, err := pdubuilder.CreateE2SmKpmIndicationHeader(timeStamp, fileFormatVersion, senderName, "", vendorName, nil)
	if err != nil {
		return nil, err
	}
	return newE2SmKpmPdu.GetIndicationHeaderFormat1(), nil
}

func Test_xerEncodeE2SmKpmIndicationHeaderFormat1(t *testing.T) {

	ihf1, err := createE2SMKPMIndicationHeaderFormat1()
	assert.NilError(t, err)

	xer, err := xerEncodeE2SmKpmIndicationHeaderFormat1(ihf1)
	assert.NilError(t, err)
	//assert.Equal(t, 686, len(xer))
	assert.Equal(t, 241, len(xer)) // without SenderType and GlobalKPMnodeID
	t.Logf("E2SmKpmIndicationHeaderFormat1 XER\n%s", string(xer))
}

func Test_xerDecodeE2SmKpmIndicationHeaderFormat1(t *testing.T) {

	ihf1, err := createE2SMKPMIndicationHeaderFormat1()
	assert.NilError(t, err)

	xer, err := xerEncodeE2SmKpmIndicationHeaderFormat1(ihf1)
	assert.NilError(t, err)
	//assert.Equal(t, 686, len(xer))
	assert.Equal(t, 241, len(xer)) // without SenderType and GlobalKPMnodeID
	t.Logf("E2SmKpmIndicationHeaderFormat1 XER\n%s", string(xer))

	result, err := xerDecodeE2SmKpmIndicationHeaderFormat1(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmIndicationHeaderFormat1 XER - decoded\n%s", result)
}

func Test_perEncodeE2SmKpmIndicationHeaderFormat1(t *testing.T) {

	ihf1, err := createE2SMKPMIndicationHeaderFormat1()
	assert.NilError(t, err)

	per, err := perEncodeE2SmKpmIndicationHeaderFormat1(ihf1)
	assert.NilError(t, err)
	//assert.Equal(t, 42, len(per))
	assert.Equal(t, 19, len(per)) // without SenderType and GlobalKPMnodeID
	t.Logf("E2SmKpmIndicationHeaderFormat1 PER\n%s", string(per))
}

func Test_perDecodeE2SmKpmIndicationHeaderFormat1(t *testing.T) {

	ihf1, err := createE2SMKPMIndicationHeaderFormat1()
	assert.NilError(t, err)

	per, err := perEncodeE2SmKpmIndicationHeaderFormat1(ihf1)
	assert.NilError(t, err)
	//assert.Equal(t, 42, len(per))
	assert.Equal(t, 19, len(per)) // without SenderType and GlobalKPMnodeID
	t.Logf("E2SmKpmIndicationHeaderFormat1 PER\n%s", string(per))

	result, err := perDecodeE2SmKpmIndicationHeaderFormat1(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmIndicationHeaderFormat1 PER - decoded\n%s", result)
}
