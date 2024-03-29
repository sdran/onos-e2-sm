// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

// ToDo: delete it (logs generation) once plugin is complete - necessity only in debugging
// Later on log files are stored to the /tmp/report.txt file (basically, it's ALMOST output of the Execute() function in module.go)

package main

import (
	pgs "github.com/lyft/protoc-gen-star"
	pgsgo "github.com/lyft/protoc-gen-star/lang/go"
	"github.com/onosproject/onos-e2-sm/protoc-gen-cgo/generic"
)

func main() {
	g := pgs.Init(pgs.DebugMode())
	g.RegisterModule(generic.NewModule())
	//g.RegisterPostProcessor(generic.NewPostProcessor()) // Probably wouldn't need in the end
	//ToDo: Could be an issue when using latest Protobuf compiler (3.9.0) - simply comment it
	g.RegisterPostProcessor(pgsgo.GoFmt()) // This option could cause errors while post-processing KPM model
	// Helper tool to track what are the errors:
	// gofmt -w generated/*.go
	// GoFmt() errors could be caused by missing some values in [json_name] tag of the Protobuf
	g.Render()
}
