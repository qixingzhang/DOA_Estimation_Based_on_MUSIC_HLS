set moduleName fft_streaming_Loop_1
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {fft_streaming_Loop_1}
set C_modelType { void 0 }
set C_modelArgList {
	{ X_R float 32 regular {array 1024 { 1 3 } 1 1 }  }
	{ Stage_R_0 float 32 regular {array 1024 { 0 3 } 0 1 }  }
	{ X_I float 32 regular {array 1024 { 1 3 } 1 1 }  }
	{ Stage_I_0 float 32 regular {array 1024 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "X_R", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Stage_R_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "X_I", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Stage_I_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ X_R_address0 sc_out sc_lv 10 signal 0 } 
	{ X_R_ce0 sc_out sc_logic 1 signal 0 } 
	{ X_R_q0 sc_in sc_lv 32 signal 0 } 
	{ Stage_R_0_address0 sc_out sc_lv 10 signal 1 } 
	{ Stage_R_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ Stage_R_0_we0 sc_out sc_logic 1 signal 1 } 
	{ Stage_R_0_d0 sc_out sc_lv 32 signal 1 } 
	{ X_I_address0 sc_out sc_lv 10 signal 2 } 
	{ X_I_ce0 sc_out sc_logic 1 signal 2 } 
	{ X_I_q0 sc_in sc_lv 32 signal 2 } 
	{ Stage_I_0_address0 sc_out sc_lv 10 signal 3 } 
	{ Stage_I_0_ce0 sc_out sc_logic 1 signal 3 } 
	{ Stage_I_0_we0 sc_out sc_logic 1 signal 3 } 
	{ Stage_I_0_d0 sc_out sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "X_R_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_R", "role": "address0" }} , 
 	{ "name": "X_R_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "ce0" }} , 
 	{ "name": "X_R_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "q0" }} , 
 	{ "name": "Stage_R_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Stage_R_0", "role": "address0" }} , 
 	{ "name": "Stage_R_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Stage_R_0", "role": "ce0" }} , 
 	{ "name": "Stage_R_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Stage_R_0", "role": "we0" }} , 
 	{ "name": "Stage_R_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Stage_R_0", "role": "d0" }} , 
 	{ "name": "X_I_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address0" }} , 
 	{ "name": "X_I_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce0" }} , 
 	{ "name": "X_I_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q0" }} , 
 	{ "name": "Stage_I_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Stage_I_0", "role": "address0" }} , 
 	{ "name": "Stage_I_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Stage_I_0", "role": "ce0" }} , 
 	{ "name": "Stage_I_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Stage_I_0", "role": "we0" }} , 
 	{ "name": "Stage_I_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Stage_I_0", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "fft_streaming_Loop_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13313", "EstimateLatencyMax" : "14337",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Stage_R_0", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Stage_I_0", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	fft_streaming_Loop_1 {
		X_R {Type I LastRead 3 FirstWrite -1}
		Stage_R_0 {Type O LastRead -1 FirstWrite 3}
		X_I {Type I LastRead 3 FirstWrite -1}
		Stage_I_0 {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "13313", "Max" : "14337"}
	, {"Name" : "Interval", "Min" : "13313", "Max" : "14337"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	X_R { ap_memory {  { X_R_address0 mem_address 1 10 }  { X_R_ce0 mem_ce 1 1 }  { X_R_q0 mem_dout 0 32 } } }
	Stage_R_0 { ap_memory {  { Stage_R_0_address0 mem_address 1 10 }  { Stage_R_0_ce0 mem_ce 1 1 }  { Stage_R_0_we0 mem_we 1 1 }  { Stage_R_0_d0 mem_din 1 32 } } }
	X_I { ap_memory {  { X_I_address0 mem_address 1 10 }  { X_I_ce0 mem_ce 1 1 }  { X_I_q0 mem_dout 0 32 } } }
	Stage_I_0 { ap_memory {  { Stage_I_0_address0 mem_address 1 10 }  { Stage_I_0_ce0 mem_ce 1 1 }  { Stage_I_0_we0 mem_we 1 1 }  { Stage_I_0_d0 mem_din 1 32 } } }
}
