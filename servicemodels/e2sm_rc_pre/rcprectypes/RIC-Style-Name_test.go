// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package rcprectypes

import (
	e2sm_rc_pre_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v1/e2sm-rc-pre-ies"
	"gotest.tools/assert"
	"testing"
)

func Test_xerEncodeRicStyleName(t *testing.T) {

	name := "RicStyleName"
	ricStyleName := &e2sm_rc_pre_ies.RicStyleName{
		Value: name,
	}

	xer, err := xerEncodeRicStyleName(ricStyleName)
	assert.NilError(t, err)
	assert.Equal(t, 46, len(xer))
	t.Logf("RIC-Style-Name XER\n%s", string(xer))
}

func Test_xerDecodeRicStyleName(t *testing.T) {

	name := "RicStyleName"
	ricStyleName := &e2sm_rc_pre_ies.RicStyleName{
		Value: name,
	}

	xer, err := xerEncodeRicStyleName(ricStyleName)
	assert.NilError(t, err)
	assert.Equal(t, 46, len(xer))
	t.Logf("RIC-Style-Name XER\n%s", string(xer))

	result, err := xerDecodeRicStyleName(xer)
	assert.NilError(t, err)
	assert.Equal(t, ricStyleName.Value, result.Value, "Encoded and decoded values are not the same")
}

func Test_perEncodeRicStyleName(t *testing.T) {

	name := "RicStyleName"
	ricStyleName := &e2sm_rc_pre_ies.RicStyleName{
		Value: name,
	}

	per, err := perEncodeRicStyleName(ricStyleName)
	assert.NilError(t, err)
	assert.Equal(t, 14, len(per))
	t.Logf("RIC-Style-Name PER\n%s", string(per))
}

func Test_perDecodeRicStyleName(t *testing.T) {

	name := "RicStyleName"
	ricStyleName := &e2sm_rc_pre_ies.RicStyleName{
		Value: name,
	}

	per, err := perEncodeRicStyleName(ricStyleName)
	assert.NilError(t, err)
	assert.Equal(t, 14, len(per))
	t.Logf("RIC-Style-Name PER\n%s", string(per))

	result, err := perDecodeRicStyleName(per)
	assert.NilError(t, err)
	assert.Equal(t, ricStyleName.Value, result.Value, "Encoded and decoded values are not the same")
}
