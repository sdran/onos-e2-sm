// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package kpmv2ctypes

import (
	e2sm_kpm_v2 "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_kpm_v2/v2/e2sm-kpm-v2"
	"gotest.tools/assert"
	"testing"
)

func Test_xerEncodeSubscriptionID(t *testing.T) {

	subID := &e2sm_kpm_v2.SubscriptionId{
		Value: 12345,
	}
	xer, err := xerEncodeSubscriptionID(subID)
	assert.NilError(t, err)
	assert.Equal(t, 39, len(xer))
	t.Logf("SubscriptionID XER\n%s", string(xer))
}

func Test_xerDecodeSubscriptionID(t *testing.T) {

	subID := &e2sm_kpm_v2.SubscriptionId{
		Value: 12345,
	}
	xer, err := xerEncodeSubscriptionID(subID)
	assert.NilError(t, err)
	assert.Equal(t, 39, len(xer))
	t.Logf("SubscriptionID XER\n%s", string(xer))

	result, err := xerDecodeSubscriptionID(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("SubscriptionID XER - decoded\n%s", result)
}

func Test_perEncodeSubscriptionID(t *testing.T) {

	subID := &e2sm_kpm_v2.SubscriptionId{
		Value: 12345,
	}
	per, err := perEncodeSubscriptionID(subID)
	assert.NilError(t, err)
	assert.Equal(t, 3, len(per))
	t.Logf("SubscriptionID PER\n%s", string(per))
}

func Test_perDecodeSubscriptionID(t *testing.T) {

	subID := &e2sm_kpm_v2.SubscriptionId{
		Value: 12345,
	}
	per, err := perEncodeSubscriptionID(subID)
	assert.NilError(t, err)
	assert.Equal(t, 3, len(per))
	t.Logf("SubscriptionID PER\n%s", string(per))

	result, err := perDecodeSubscriptionID(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("SubscriptionID PER - decoded\n%s", result)
}
