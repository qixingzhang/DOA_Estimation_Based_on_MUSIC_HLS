set moduleName fft_stage_120
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
set C_modelName {fft_stage.120}
set C_modelType { void 0 }
set C_modelArgList {
	{ X_R float 32 regular {array 1024 { 1 1 } 1 1 }  }
	{ X_I float 32 regular {array 1024 { 1 1 } 1 1 }  }
	{ Out_R float 32 regular {array 1024 { 0 0 } 0 1 }  }
	{ Out_I float 32 regular {array 1024 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "X_R", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "X_I", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Out_R", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Out_I", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 35
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
	{ X_R_address1 sc_out sc_lv 10 signal 0 } 
	{ X_R_ce1 sc_out sc_logic 1 signal 0 } 
	{ X_R_q1 sc_in sc_lv 32 signal 0 } 
	{ X_I_address0 sc_out sc_lv 10 signal 1 } 
	{ X_I_ce0 sc_out sc_logic 1 signal 1 } 
	{ X_I_q0 sc_in sc_lv 32 signal 1 } 
	{ X_I_address1 sc_out sc_lv 10 signal 1 } 
	{ X_I_ce1 sc_out sc_logic 1 signal 1 } 
	{ X_I_q1 sc_in sc_lv 32 signal 1 } 
	{ Out_R_address0 sc_out sc_lv 10 signal 2 } 
	{ Out_R_ce0 sc_out sc_logic 1 signal 2 } 
	{ Out_R_we0 sc_out sc_logic 1 signal 2 } 
	{ Out_R_d0 sc_out sc_lv 32 signal 2 } 
	{ Out_R_address1 sc_out sc_lv 10 signal 2 } 
	{ Out_R_ce1 sc_out sc_logic 1 signal 2 } 
	{ Out_R_we1 sc_out sc_logic 1 signal 2 } 
	{ Out_R_d1 sc_out sc_lv 32 signal 2 } 
	{ Out_I_address0 sc_out sc_lv 10 signal 3 } 
	{ Out_I_ce0 sc_out sc_logic 1 signal 3 } 
	{ Out_I_we0 sc_out sc_logic 1 signal 3 } 
	{ Out_I_d0 sc_out sc_lv 32 signal 3 } 
	{ Out_I_address1 sc_out sc_lv 10 signal 3 } 
	{ Out_I_ce1 sc_out sc_logic 1 signal 3 } 
	{ Out_I_we1 sc_out sc_logic 1 signal 3 } 
	{ Out_I_d1 sc_out sc_lv 32 signal 3 } 
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
 	{ "name": "X_R_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_R", "role": "address1" }} , 
 	{ "name": "X_R_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "ce1" }} , 
 	{ "name": "X_R_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "q1" }} , 
 	{ "name": "X_I_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address0" }} , 
 	{ "name": "X_I_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce0" }} , 
 	{ "name": "X_I_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q0" }} , 
 	{ "name": "X_I_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address1" }} , 
 	{ "name": "X_I_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce1" }} , 
 	{ "name": "X_I_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q1" }} , 
 	{ "name": "Out_R_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Out_R", "role": "address0" }} , 
 	{ "name": "Out_R_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_R", "role": "ce0" }} , 
 	{ "name": "Out_R_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_R", "role": "we0" }} , 
 	{ "name": "Out_R_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Out_R", "role": "d0" }} , 
 	{ "name": "Out_R_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Out_R", "role": "address1" }} , 
 	{ "name": "Out_R_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_R", "role": "ce1" }} , 
 	{ "name": "Out_R_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_R", "role": "we1" }} , 
 	{ "name": "Out_R_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Out_R", "role": "d1" }} , 
 	{ "name": "Out_I_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Out_I", "role": "address0" }} , 
 	{ "name": "Out_I_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_I", "role": "ce0" }} , 
 	{ "name": "Out_I_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_I", "role": "we0" }} , 
 	{ "name": "Out_I_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Out_I", "role": "d0" }} , 
 	{ "name": "Out_I_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Out_I", "role": "address1" }} , 
 	{ "name": "Out_I_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_I", "role": "ce1" }} , 
 	{ "name": "Out_I_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Out_I", "role": "we1" }} , 
 	{ "name": "Out_I_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Out_I", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "fft_stage_120",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1041", "EstimateLatencyMax" : "1041",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "W_real41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag32", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.W_real41_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.W_imag32_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32bkb_U28", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3cud_U29", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3dEe_U30", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3eOg_U31", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3eOg_U32", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fft_stage_120 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real41 {Type I LastRead -1 FirstWrite -1}
		W_imag32 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1041", "Max" : "1041"}
	, {"Name" : "Interval", "Min" : "1041", "Max" : "1041"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	X_R { ap_memory {  { X_R_address0 mem_address 1 10 }  { X_R_ce0 mem_ce 1 1 }  { X_R_q0 mem_dout 0 32 }  { X_R_address1 MemPortADDR2 1 10 }  { X_R_ce1 MemPortCE2 1 1 }  { X_R_q1 MemPortDOUT2 0 32 } } }
	X_I { ap_memory {  { X_I_address0 mem_address 1 10 }  { X_I_ce0 mem_ce 1 1 }  { X_I_q0 mem_dout 0 32 }  { X_I_address1 MemPortADDR2 1 10 }  { X_I_ce1 MemPortCE2 1 1 }  { X_I_q1 MemPortDOUT2 0 32 } } }
	Out_R { ap_memory {  { Out_R_address0 mem_address 1 10 }  { Out_R_ce0 mem_ce 1 1 }  { Out_R_we0 mem_we 1 1 }  { Out_R_d0 mem_din 1 32 }  { Out_R_address1 MemPortADDR2 1 10 }  { Out_R_ce1 MemPortCE2 1 1 }  { Out_R_we1 MemPortWE2 1 1 }  { Out_R_d1 MemPortDIN2 1 32 } } }
	Out_I { ap_memory {  { Out_I_address0 mem_address 1 10 }  { Out_I_ce0 mem_ce 1 1 }  { Out_I_we0 mem_we 1 1 }  { Out_I_d0 mem_din 1 32 }  { Out_I_address1 MemPortADDR2 1 10 }  { Out_I_ce1 MemPortCE2 1 1 }  { Out_I_we1 MemPortWE2 1 1 }  { Out_I_d1 MemPortDIN2 1 32 } } }
}
