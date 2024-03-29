// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package kpmv2ctypes

import (
	"fmt"
	"github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/pdubuilder"
	e2sm_kpm_v2 "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/v2/e2sm-kpm-v2"
	"gotest.tools/assert"
	"testing"
)

func createE2SMKPMActionDefinitionFormat1() (*e2sm_kpm_v2.E2SmKpmActionDefinition, error) {

	var ricStyleType int32 = 12
	var cellObjID string = "onf"
	var granularity int32 = 21
	var subscriptionID int64 = 12345
	plmnID := []byte{0x21, 0x22, 0x23}
	sst := []byte{0x01}
	sd := []byte{0x01, 0x02, 0x03}
	var fiveQI int32 = 10
	var qfi int32 = 62
	var qci int32 = 15
	var qciMin int32 = 1
	var qciMax int32 = 15
	var arpMax int32 = 15
	var arpMin int32 = 1
	var bitrateRange int32 = 251
	var layerMuMimo int32 = 5
	var distX int32 = 123
	var distY int32 = 456
	var distZ int32 = 789
	startEndIndication := e2sm_kpm_v2.StartEndInd_START_END_IND_START
	var measurementName string = "trial"

	labelInfoItem, _ := pdubuilder.CreateLabelInfoItem(plmnID, sst, sd)
	labelInfoItem.MeasLabel.FiveQi = &e2sm_kpm_v2.FiveQi{
		Value: fiveQI,
	}
	labelInfoItem.MeasLabel.QFi = &e2sm_kpm_v2.Qfi{
		Value: qfi,
	}
	labelInfoItem.MeasLabel.QCi = &e2sm_kpm_v2.Qci{
		Value: qci,
	}
	labelInfoItem.MeasLabel.QCimin = &e2sm_kpm_v2.Qci{
		Value: qciMin,
	}
	labelInfoItem.MeasLabel.QCimax = &e2sm_kpm_v2.Qci{
		Value: qciMax,
	}
	labelInfoItem.MeasLabel.ARpmin = &e2sm_kpm_v2.Arp{
		Value: arpMin,
	}
	labelInfoItem.MeasLabel.ARpmax = &e2sm_kpm_v2.Arp{
		Value: arpMax,
	}
	labelInfoItem.MeasLabel.BitrateRange = bitrateRange
	labelInfoItem.MeasLabel.LayerMuMimo = layerMuMimo
	labelInfoItem.MeasLabel.DistBinX = distX
	labelInfoItem.MeasLabel.DistBinY = distY
	labelInfoItem.MeasLabel.DistBinZ = distZ
	labelInfoItem.MeasLabel.StartEndInd = startEndIndication
	labelInfoItem.MeasLabel.PreLabelOverride = e2sm_kpm_v2.PreLabelOverride_PRE_LABEL_OVERRIDE_TRUE
	labelInfoItem.MeasLabel.SUm = e2sm_kpm_v2.SUM_SUM_TRUE

	labelInfoList := e2sm_kpm_v2.LabelInfoList{
		Value: make([]*e2sm_kpm_v2.LabelInfoItem, 0),
	}
	labelInfoList.Value = append(labelInfoList.Value, labelInfoItem)

	measName, _ := pdubuilder.CreateMeasurementTypeMeasName(measurementName)
	measInfoItem, _ := pdubuilder.CreateMeasurementInfoItem(measName, &labelInfoList)

	measInfoList := e2sm_kpm_v2.MeasurementInfoList{
		Value: make([]*e2sm_kpm_v2.MeasurementInfoItem, 0),
	}
	measInfoList.Value = append(measInfoList.Value, measInfoItem)

	actionDefinition, _ := pdubuilder.CreateActionDefinitionFormat1(cellObjID, &measInfoList, granularity, subscriptionID)

	newE2SmKpmPdu, _ := pdubuilder.CreateE2SmKpmActionDefinitionFormat1(ricStyleType, actionDefinition)
	if err := newE2SmKpmPdu.Validate(); err != nil {
		return nil, fmt.Errorf("error validating E2SmKpmActionDefinition (Format1) %s", err.Error())
	}
	return newE2SmKpmPdu, nil
}

func createE2SMKPMActionDefinitionFormat2() (*e2sm_kpm_v2.E2SmKpmActionDefinition, error) {

	var ricStyleType int32 = 12
	var cellObjID string = "onf"
	var granularity int32 = 21
	var subscriptionID int64 = 12345
	plmnID := []byte{0x21, 0x22, 0x23}
	sst := []byte{0x01}
	sd := []byte{0x01, 0x02, 0x03}
	var fiveQI int32 = 10
	var qfi int32 = 62
	var qci int32 = 15
	var qciMin int32 = 1
	var qciMax int32 = 15
	var arpMax int32 = 15
	var arpMin int32 = 1
	var bitrateRange int32 = 251
	var layerMuMimo int32 = 5
	var distX int32 = 123
	var distY int32 = 456
	var distZ int32 = 789
	startEndIndication := e2sm_kpm_v2.StartEndInd_START_END_IND_START
	var measurementName string = "trial"

	labelInfoItem, _ := pdubuilder.CreateLabelInfoItem(plmnID, sst, sd)
	labelInfoItem.MeasLabel.FiveQi = &e2sm_kpm_v2.FiveQi{
		Value: fiveQI,
	}
	labelInfoItem.MeasLabel.QFi = &e2sm_kpm_v2.Qfi{
		Value: qfi,
	}
	labelInfoItem.MeasLabel.QCi = &e2sm_kpm_v2.Qci{
		Value: qci,
	}
	labelInfoItem.MeasLabel.QCimin = &e2sm_kpm_v2.Qci{
		Value: qciMin,
	}
	labelInfoItem.MeasLabel.QCimax = &e2sm_kpm_v2.Qci{
		Value: qciMax,
	}
	labelInfoItem.MeasLabel.ARpmin = &e2sm_kpm_v2.Arp{
		Value: arpMin,
	}
	labelInfoItem.MeasLabel.ARpmax = &e2sm_kpm_v2.Arp{
		Value: arpMax,
	}
	labelInfoItem.MeasLabel.BitrateRange = bitrateRange
	labelInfoItem.MeasLabel.LayerMuMimo = layerMuMimo
	labelInfoItem.MeasLabel.DistBinX = distX
	labelInfoItem.MeasLabel.DistBinY = distY
	labelInfoItem.MeasLabel.DistBinZ = distZ
	labelInfoItem.MeasLabel.StartEndInd = startEndIndication
	labelInfoItem.MeasLabel.PreLabelOverride = e2sm_kpm_v2.PreLabelOverride_PRE_LABEL_OVERRIDE_TRUE
	labelInfoItem.MeasLabel.SUm = e2sm_kpm_v2.SUM_SUM_TRUE

	labelInfoList := e2sm_kpm_v2.LabelInfoList{
		Value: make([]*e2sm_kpm_v2.LabelInfoItem, 0),
	}
	labelInfoList.Value = append(labelInfoList.Value, labelInfoItem)

	measName, _ := pdubuilder.CreateMeasurementTypeMeasName(measurementName)
	measInfoItem, _ := pdubuilder.CreateMeasurementInfoItem(measName, &labelInfoList)

	measInfoList := &e2sm_kpm_v2.MeasurementInfoList{
		Value: make([]*e2sm_kpm_v2.MeasurementInfoItem, 0),
	}
	measInfoList.Value = append(measInfoList.Value, measInfoItem)

	actionDefinitionFormat1, _ := pdubuilder.CreateActionDefinitionFormat1(cellObjID, measInfoList, granularity, subscriptionID)

	ueID := "SomeUE"
	actionDefinitionFormat2, _ := pdubuilder.CreateActionDefinitionFormat2(ueID, actionDefinitionFormat1)

	newE2SmKpmPdu, _ := pdubuilder.CreateE2SmKpmActionDefinitionFormat2(ricStyleType, actionDefinitionFormat2)
	if err := newE2SmKpmPdu.Validate(); err != nil {
		return nil, fmt.Errorf("error validating E2SmKpmActionDefinition (Format2) %s", err.Error())
	}
	return newE2SmKpmPdu, nil
}

func createE2SMKPMActionDefinitionFormat3() (*e2sm_kpm_v2.E2SmKpmActionDefinition, error) {

	var ricStyleType int32 = 12
	var cellObjID string = "onf"
	var granularity int32 = 21
	var subscriptionID int64 = 12345
	var measurementName string = "trial"

	var valEnum int64 = 201
	tce := e2sm_kpm_v2.TestCondExpression_TEST_COND_EXPRESSION_LESSTHAN
	tci, _ := pdubuilder.CreateTestCondInfo(pdubuilder.CreateTestCondTypeRSRP(), tce, pdubuilder.CreateTestCondValueEnum(valEnum))

	mci, _ := pdubuilder.CreateMatchingCondItemTestCondInfo(tci)

	mcl := &e2sm_kpm_v2.MatchingCondList{
		Value: make([]*e2sm_kpm_v2.MatchingCondItem, 0),
	}
	mcl.Value = append(mcl.Value, mci)

	measName, _ := pdubuilder.CreateMeasurementTypeMeasName(measurementName)
	measCondItem, _ := pdubuilder.CreateMeasurementCondItem(measName, mcl)

	measCondList := e2sm_kpm_v2.MeasurementCondList{
		Value: make([]*e2sm_kpm_v2.MeasurementCondItem, 0),
	}
	measCondList.Value = append(measCondList.Value, measCondItem)

	actionDefinitionFormat3, _ := pdubuilder.CreateActionDefinitionFormat3(cellObjID, &measCondList, granularity, subscriptionID)

	newE2SmKpmPdu, _ := pdubuilder.CreateE2SmKpmActionDefinitionFormat3(ricStyleType, actionDefinitionFormat3)
	if err := newE2SmKpmPdu.Validate(); err != nil {
		return nil, fmt.Errorf("error validating E2SmKpmActionDefinition (Format2) %s", err.Error())
	}
	return newE2SmKpmPdu, nil
}

func Test_xerEncodeE2SmKpmActionDefinition(t *testing.T) {

	actionDef, err := createE2SMKPMActionDefinitionFormat1()
	assert.NilError(t, err)

	xer, err := XerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 1936, len(xer))
	t.Logf("E2SmKpmActionDefinition (Format1) XER\n%s", string(xer))

	actionDef, err = createE2SMKPMActionDefinitionFormat2()
	assert.NilError(t, err)

	xer, err = XerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 2180, len(xer))
	t.Logf("E2SmKpmActionDefinition (Format2) XER\n%s", string(xer))

	actionDef, err = createE2SMKPMActionDefinitionFormat3()
	assert.NilError(t, err)

	xer, err = XerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 1153, len(xer))
	t.Logf("E2SmKpmActionDefinition (Format3) XER\n%s", string(xer))
}

func Test_xerDecodeE2SmKpmActionDefinition(t *testing.T) {

	actionDef, err := createE2SMKPMActionDefinitionFormat1()
	assert.NilError(t, err)

	xer, err := XerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 1936, len(xer))
	t.Logf("E2SmKpmActionDefinition (Format1) XER\n%s", string(xer))

	result, err := XerDecodeE2SmKpmActionDefinition(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmActionDefinition (Format1) XER - decoded\n%s", result)

	actionDef, err = createE2SMKPMActionDefinitionFormat2()
	assert.NilError(t, err)

	xer, err = XerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 2180, len(xer))
	t.Logf("E2SmKpmActionDefinition (Format2) XER\n%s", string(xer))

	result, err = XerDecodeE2SmKpmActionDefinition(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmActionDefinition (Format2) XER - decoded\n%s", result)

	actionDef, err = createE2SMKPMActionDefinitionFormat3()
	assert.NilError(t, err)

	xer, err = XerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 1153, len(xer))
	t.Logf("E2SmKpmActionDefinition (Format3) XER\n%s", string(xer))

	result, err = XerDecodeE2SmKpmActionDefinition(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmActionDefinition (Format3) XER - decoded\n%s", result)
}

func Test_perEncodeE2SmKpmActionDefinition(t *testing.T) {

	actionDef, err := createE2SMKPMActionDefinitionFormat1()
	assert.NilError(t, err)

	per, err := PerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 60, len(per))
	t.Logf("E2SmKpmActionDefinition (Format1) PER\n%s", string(per))

	actionDef, err = createE2SMKPMActionDefinitionFormat2()
	assert.NilError(t, err)

	per, err = PerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 68, len(per))
	t.Logf("E2SmKpmActionDefinition (Format2) PER\n%s", string(per))

	actionDef, err = createE2SMKPMActionDefinitionFormat3()
	assert.NilError(t, err)

	per, err = PerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 30, len(per))
	t.Logf("E2SmKpmActionDefinition (Format3) PER\n%s", string(per))
}

func Test_perDecodeE2SmKpmActionDefinition(t *testing.T) {

	actionDef, err := createE2SMKPMActionDefinitionFormat1()
	assert.NilError(t, err)

	per, err := PerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 60, len(per))
	t.Logf("E2SmKpmActionDefinition (Format1) PER\n%s", string(per))

	result, err := PerDecodeE2SmKpmActionDefinition(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmActionDefinition (Format1) PER - decoded\n%s", result)

	actionDef, err = createE2SMKPMActionDefinitionFormat2()
	assert.NilError(t, err)

	per, err = PerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 68, len(per))
	t.Logf("E2SmKpmActionDefinition (Format2) PER\n%s", string(per))

	result, err = PerDecodeE2SmKpmActionDefinition(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmActionDefinition (Format2) PER - decoded\n%s", result)

	actionDef, err = createE2SMKPMActionDefinitionFormat3()
	assert.NilError(t, err)

	per, err = PerEncodeE2SmKpmActionDefinition(actionDef)
	assert.NilError(t, err)
	assert.Equal(t, 30, len(per))
	t.Logf("E2SmKpmActionDefinition (Format3) PER\n%s", string(per))

	result, err = PerDecodeE2SmKpmActionDefinition(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("E2SmKpmActionDefinition (Format3) PER - decoded\n%s", result)
}
