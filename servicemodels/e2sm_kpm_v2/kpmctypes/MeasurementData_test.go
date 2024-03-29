// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package kpmv2ctypes

import (
	e2sm_kpm_v2 "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/v2/e2sm-kpm-v2"
	"gotest.tools/assert"
	"testing"
)

func createMeasurementData() (*e2sm_kpm_v2.MeasurementData, error) {

	measRecord := &e2sm_kpm_v2.MeasurementRecord{
		Value: make([]*e2sm_kpm_v2.MeasurementRecordItem, 0),
	}

	item1 := &e2sm_kpm_v2.MeasurementRecordItem{
		MeasurementRecordItem: &e2sm_kpm_v2.MeasurementRecordItem_Integer{
			Integer: 21,
		},
	}
	measRecord.Value = append(measRecord.Value, item1)

	item2 := &e2sm_kpm_v2.MeasurementRecordItem{
		MeasurementRecordItem: &e2sm_kpm_v2.MeasurementRecordItem_Real{
			Real: 22.2,
		},
	}
	measRecord.Value = append(measRecord.Value, item2)

	item3 := &e2sm_kpm_v2.MeasurementRecordItem{
		MeasurementRecordItem: &e2sm_kpm_v2.MeasurementRecordItem_NoValue{
			NoValue: 0,
		},
	}
	measRecord.Value = append(measRecord.Value, item3)

	measDataItem := &e2sm_kpm_v2.MeasurementDataItem{
		MeasRecord:     measRecord,
		IncompleteFlag: e2sm_kpm_v2.IncompleteFlag_INCOMPLETE_FLAG_TRUE,
	}

	measData := &e2sm_kpm_v2.MeasurementData{
		Value: make([]*e2sm_kpm_v2.MeasurementDataItem, 0),
	}
	measData.Value = append(measData.Value, measDataItem)

	if err := measData.Validate(); err != nil {
		return nil, err
	}
	return measData, nil
}

func Test_xerEncodeMeasurementData(t *testing.T) {

	md, err := createMeasurementData()
	assert.NilError(t, err)

	xer, err := xerEncodeMeasurementData(md)
	assert.NilError(t, err)
	assert.Equal(t, 343, len(xer))
	t.Logf("MeasurementData XER\n%s", string(xer))
}

func Test_xerDecodeMeasurementData(t *testing.T) {

	md, err := createMeasurementData()
	assert.NilError(t, err)

	xer, err := xerEncodeMeasurementData(md)
	assert.NilError(t, err)
	assert.Equal(t, 343, len(xer))
	t.Logf("MeasurementData XER\n%s", string(xer))

	result, err := xerDecodeMeasurementData(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	assert.Equal(t, 1, len(result.GetValue()))
	//measRecord := result.GetValue()[0]
	//assert.Equal(t, 3, len(measRecord.GetValue()))

	t.Logf("MeasurementData XER - decoded\n%s", result)
}

func Test_perEncodeMeasurementData(t *testing.T) {

	md, err := createMeasurementData()
	assert.NilError(t, err)

	per, err := perEncodeMeasurementData(md)
	assert.NilError(t, err)
	assert.Equal(t, 19, len(per))
	t.Logf("MeasurementData PER\n%s", string(per))
}

func Test_perDecodeMeasurementData(t *testing.T) {

	md, err := createMeasurementData()
	assert.NilError(t, err)

	per, err := perEncodeMeasurementData(md)
	assert.NilError(t, err)
	assert.Equal(t, 19, len(per))
	t.Logf("MeasurementData PER\n%s", string(per))

	result, err := perDecodeMeasurementData(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	assert.Equal(t, 1, len(result.GetValue()))
	t.Logf("MeasurementData PER - decoded\n%v", result)
}
