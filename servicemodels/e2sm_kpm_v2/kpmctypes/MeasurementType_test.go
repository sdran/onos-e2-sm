// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: LicenseRef-ONF-Member-1.0

package kpmv2ctypes

import (
	e2sm_kpm_v2 "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/v2/e2sm-kpm-ies"
	"gotest.tools/assert"
	"testing"
)

func createMeasurementType1() *e2sm_kpm_v2.MeasurementType {
	return &e2sm_kpm_v2.MeasurementType{
		MeasurementType: &e2sm_kpm_v2.MeasurementType_MeasName{
			MeasName: &e2sm_kpm_v2.MeasurementTypeName{
				Value: "onf",
			},
		},
	}
}

func createMeasurementType2() *e2sm_kpm_v2.MeasurementType {
	return &e2sm_kpm_v2.MeasurementType{
		MeasurementType: &e2sm_kpm_v2.MeasurementType_MeasId{
			MeasId: &e2sm_kpm_v2.MeasurementTypeId{
				Value: 123,
			},
		},
	}
}

func Test_xerEncodeMeasurementType(t *testing.T) {

	mt1 := createMeasurementType1()

	xer, err := xerEncodeMeasurementType(mt1)
	assert.NilError(t, err)
	assert.Equal(t, 66, len(xer))
	t.Logf("MeasurementType (Name) XER\n%s", string(xer))

	mt2 := createMeasurementType2()

	xer, err = xerEncodeMeasurementType(mt2)
	assert.NilError(t, err)
	assert.Equal(t, 62, len(xer))
	t.Logf("MeasurementType (ID) XER\n%s", string(xer))
}

func Test_xerDecodeMeasurementType(t *testing.T) {

	mt1 := createMeasurementType1()

	xer, err := xerEncodeMeasurementType(mt1)
	assert.NilError(t, err)
	assert.Equal(t, 66, len(xer))
	t.Logf("MeasurementType (Name) XER\n%s", string(xer))

	result, err := xerDecodeMeasurementType(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("MeasurementType (Name) XER - decoded\n%s", result)

	mt2 := createMeasurementType2()

	xer, err = xerEncodeMeasurementType(mt2)
	assert.NilError(t, err)
	assert.Equal(t, 62, len(xer))
	t.Logf("MeasurementType (ID) XER\n%s", string(xer))

	result, err = xerDecodeMeasurementType(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("MeasurementType (ID) XER - decoded\n%s", result)
}

func Test_perEncodeMeasurementType(t *testing.T) {

	mt1 := createMeasurementType1()

	per, err := perEncodeMeasurementType(mt1)
	assert.NilError(t, err)
	assert.Equal(t, 5, len(per))
	t.Logf("MeasurementType (Name)  PER\n%s", string(per))

	mt2 := createMeasurementType2()

	per, err = perEncodeMeasurementType(mt2)
	assert.NilError(t, err)
	assert.Equal(t, 3, len(per))
	t.Logf("MeasurementType (ID)  PER\n%s", string(per))
}

func Test_perDecodeMeasurementType(t *testing.T) {

	mt1 := createMeasurementType1()

	per, err := perEncodeMeasurementType(mt1)
	assert.NilError(t, err)
	assert.Equal(t, 5, len(per))
	t.Logf("MeasurementType (Name) PER\n%s", string(per))

	result, err := perDecodeMeasurementType(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("MeasurementType (Name) PER - decoded\n%v", result)

	mt2 := createMeasurementType2()

	per, err = perEncodeMeasurementType(mt2)
	assert.NilError(t, err)
	assert.Equal(t, 3, len(per))
	t.Logf("MeasurementType (ID) PER\n%s", string(per))

	result, err = perDecodeMeasurementType(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("MeasurementType (ID) PER - decoded\n%v", result)
}
