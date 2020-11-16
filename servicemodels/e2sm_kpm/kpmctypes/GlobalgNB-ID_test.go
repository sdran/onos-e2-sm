// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: LicenseRef-ONF-Member-1.0

package kpmctypes

import (
	e2sm_kpm_ies "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm/v1beta1/e2sm-kpm-ies"
	"gotest.tools/assert"
	"testing"
)

func Test_xerEncodeGlobalgNbId(t *testing.T) {

	var plmnID = "ONF"

	globalGNbId := &e2sm_kpm_ies.GlobalgNbId{
		PlmnId: &e2sm_kpm_ies.PlmnIdentity{
			Value: []byte(plmnID),
		},
		GnbId: &e2sm_kpm_ies.GnbIdChoice{
			GnbIdChoice: &e2sm_kpm_ies.GnbIdChoice_GnbId{
				GnbId: &e2sm_kpm_ies.BitString{
					Value: 0x9bcd4, //uint64
					Len:   22,      //uint32
				},
			},
		},
	}

	xer, err := xerEncodeGlobalgNbId(globalGNbId)
	assert.NilError(t, err)
	t.Logf("GnbIdChoice XER\n%s", string(xer))
}
