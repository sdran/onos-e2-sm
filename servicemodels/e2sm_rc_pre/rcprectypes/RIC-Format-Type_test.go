// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package rcprectypes

import (
	e2sm_rc_pre_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v1/e2sm-rc-pre-ies"
	"gotest.tools/assert"
	"testing"
)

func Test_xerEncodeRicFormatType(t *testing.T) {

	var ricType int32 = 21
	ricFormatType := &e2sm_rc_pre_ies.RicFormatType{
		Value: ricType,
	}

	xer, err := xerEncodeRicFormatType(ricFormatType)
	assert.NilError(t, err)
	assert.Equal(t, 38, len(xer))
	t.Logf("RIC-Format-Type XER\n%s", string(xer))
}

func Test_xerDecodeRicFormatType(t *testing.T) {

	var ricType int32 = 21
	ricFormatType := &e2sm_rc_pre_ies.RicFormatType{
		Value: ricType,
	}

	xer, err := xerEncodeRicFormatType(ricFormatType)
	assert.NilError(t, err)
	assert.Equal(t, 38, len(xer))
	t.Logf("RIC-Format-Type XER\n%s", string(xer))

	result, err := xerDecodeRicFormatType(xer)
	assert.NilError(t, err)
	assert.Equal(t, ricFormatType.Value, result.Value, "Encoded and decoded values are not the same")
}

func Test_perEncodeRicFormatType(t *testing.T) {

	var ricType int32 = 21
	ricFormatType := &e2sm_rc_pre_ies.RicFormatType{
		Value: ricType,
	}

	per, err := perEncodeRicFormatType(ricFormatType)
	assert.NilError(t, err)
	assert.Equal(t, 2, len(per))
	t.Logf("RIC-Format-Type PER\n%s", string(per))
}

func Test_perDecodeRicFormatType(t *testing.T) {

	var ricType int32 = 21
	ricFormatType := &e2sm_rc_pre_ies.RicFormatType{
		Value: ricType,
	}

	per, err := perEncodeRicFormatType(ricFormatType)
	assert.NilError(t, err)
	assert.Equal(t, 2, len(per))
	t.Logf("RIC-Format-Type PER\n%s", string(per))

	result, err := perDecodeRicFormatType(per)
	assert.NilError(t, err)
	assert.Equal(t, ricFormatType.Value, result.Value, "Encoded and decoded values are not the same")
}
