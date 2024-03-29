// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package pdubuilder

import (
	"gotest.tools/assert"
	"testing"
)

func TestE2SmRcPreEventTriggerDefinition(t *testing.T) {
	var rtPeriod int32 = 12

	E2SmRcPrePdu, err := CreateE2SmRcPreEventTriggerDefinitionPeriodic(rtPeriod)
	assert.NilError(t, err)
	assert.Assert(t, E2SmRcPrePdu != nil)

	E2SmRcPrePduUponChange, err := CreateE2SmRcPreEventTriggerDefinitionUponChange()
	assert.NilError(t, err)
	assert.Assert(t, E2SmRcPrePduUponChange != nil)

}
