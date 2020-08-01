set moduleName qrf_top_Loop_qrf_out
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
set C_modelName {qrf_top_Loop_qrf_out}
set C_modelType { void 0 }
set C_modelArgList {
	{ R_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ Ri_M_real float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ R_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ Ri_M_imag float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ Qi_M_real float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ Qi_M_imag float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ Q_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ Q_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "R_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Ri_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "R_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Ri_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Qi_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Qi_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Q_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Q_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
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
	{ R_M_real_address0 sc_out sc_lv 4 signal 0 } 
	{ R_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ R_M_real_we0 sc_out sc_logic 1 signal 0 } 
	{ R_M_real_d0 sc_out sc_lv 32 signal 0 } 
	{ Ri_M_real_address0 sc_out sc_lv 4 signal 1 } 
	{ Ri_M_real_ce0 sc_out sc_logic 1 signal 1 } 
	{ Ri_M_real_q0 sc_in sc_lv 32 signal 1 } 
	{ R_M_imag_address0 sc_out sc_lv 4 signal 2 } 
	{ R_M_imag_ce0 sc_out sc_logic 1 signal 2 } 
	{ R_M_imag_we0 sc_out sc_logic 1 signal 2 } 
	{ R_M_imag_d0 sc_out sc_lv 32 signal 2 } 
	{ Ri_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ Ri_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ Ri_M_imag_q0 sc_in sc_lv 32 signal 3 } 
	{ Qi_M_real_address0 sc_out sc_lv 4 signal 4 } 
	{ Qi_M_real_ce0 sc_out sc_logic 1 signal 4 } 
	{ Qi_M_real_q0 sc_in sc_lv 32 signal 4 } 
	{ Qi_M_imag_address0 sc_out sc_lv 4 signal 5 } 
	{ Qi_M_imag_ce0 sc_out sc_logic 1 signal 5 } 
	{ Qi_M_imag_q0 sc_in sc_lv 32 signal 5 } 
	{ Q_M_real_address0 sc_out sc_lv 4 signal 6 } 
	{ Q_M_real_ce0 sc_out sc_logic 1 signal 6 } 
	{ Q_M_real_we0 sc_out sc_logic 1 signal 6 } 
	{ Q_M_real_d0 sc_out sc_lv 32 signal 6 } 
	{ Q_M_imag_address0 sc_out sc_lv 4 signal 7 } 
	{ Q_M_imag_ce0 sc_out sc_logic 1 signal 7 } 
	{ Q_M_imag_we0 sc_out sc_logic 1 signal 7 } 
	{ Q_M_imag_d0 sc_out sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "R_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_real", "role": "address0" }} , 
 	{ "name": "R_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "ce0" }} , 
 	{ "name": "R_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "we0" }} , 
 	{ "name": "R_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "d0" }} , 
 	{ "name": "Ri_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "address0" }} , 
 	{ "name": "Ri_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "ce0" }} , 
 	{ "name": "Ri_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "q0" }} , 
 	{ "name": "R_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_imag", "role": "address0" }} , 
 	{ "name": "R_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "ce0" }} , 
 	{ "name": "R_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "we0" }} , 
 	{ "name": "R_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "d0" }} , 
 	{ "name": "Ri_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "address0" }} , 
 	{ "name": "Ri_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "ce0" }} , 
 	{ "name": "Ri_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "q0" }} , 
 	{ "name": "Qi_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "address0" }} , 
 	{ "name": "Qi_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "ce0" }} , 
 	{ "name": "Qi_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "q0" }} , 
 	{ "name": "Qi_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "address0" }} , 
 	{ "name": "Qi_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "ce0" }} , 
 	{ "name": "Qi_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "q0" }} , 
 	{ "name": "Q_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_real", "role": "address0" }} , 
 	{ "name": "Q_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "ce0" }} , 
 	{ "name": "Q_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "we0" }} , 
 	{ "name": "Q_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "d0" }} , 
 	{ "name": "Q_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "address0" }} , 
 	{ "name": "Q_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "ce0" }} , 
 	{ "name": "Q_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "we0" }} , 
 	{ "name": "Q_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "qrf_top_Loop_qrf_out",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "53", "EstimateLatencyMax" : "53",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	qrf_top_Loop_qrf_out {
		R_M_real {Type O LastRead -1 FirstWrite 5}
		Ri_M_real {Type I LastRead 4 FirstWrite -1}
		R_M_imag {Type O LastRead -1 FirstWrite 5}
		Ri_M_imag {Type I LastRead 4 FirstWrite -1}
		Qi_M_real {Type I LastRead 2 FirstWrite -1}
		Qi_M_imag {Type I LastRead 2 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 3}
		Q_M_imag {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "53", "Max" : "53"}
	, {"Name" : "Interval", "Min" : "53", "Max" : "53"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	R_M_real { ap_memory {  { R_M_real_address0 mem_address 1 4 }  { R_M_real_ce0 mem_ce 1 1 }  { R_M_real_we0 mem_we 1 1 }  { R_M_real_d0 mem_din 1 32 } } }
	Ri_M_real { ap_memory {  { Ri_M_real_address0 mem_address 1 4 }  { Ri_M_real_ce0 mem_ce 1 1 }  { Ri_M_real_q0 mem_dout 0 32 } } }
	R_M_imag { ap_memory {  { R_M_imag_address0 mem_address 1 4 }  { R_M_imag_ce0 mem_ce 1 1 }  { R_M_imag_we0 mem_we 1 1 }  { R_M_imag_d0 mem_din 1 32 } } }
	Ri_M_imag { ap_memory {  { Ri_M_imag_address0 mem_address 1 4 }  { Ri_M_imag_ce0 mem_ce 1 1 }  { Ri_M_imag_q0 mem_dout 0 32 } } }
	Qi_M_real { ap_memory {  { Qi_M_real_address0 mem_address 1 4 }  { Qi_M_real_ce0 mem_ce 1 1 }  { Qi_M_real_q0 mem_dout 0 32 } } }
	Qi_M_imag { ap_memory {  { Qi_M_imag_address0 mem_address 1 4 }  { Qi_M_imag_ce0 mem_ce 1 1 }  { Qi_M_imag_q0 mem_dout 0 32 } } }
	Q_M_real { ap_memory {  { Q_M_real_address0 mem_address 1 4 }  { Q_M_real_ce0 mem_ce 1 1 }  { Q_M_real_we0 mem_we 1 1 }  { Q_M_real_d0 mem_din 1 32 } } }
	Q_M_imag { ap_memory {  { Q_M_imag_address0 mem_address 1 4 }  { Q_M_imag_ce0 mem_ce 1 1 }  { Q_M_imag_we0 mem_we 1 1 }  { Q_M_imag_d0 mem_din 1 32 } } }
}
