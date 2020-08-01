set moduleName qrf_top
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {qrf_top}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_M_real float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ Q_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ Q_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ R_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ R_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Q_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Q_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "R_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "R_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 67
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ A_M_real_address0 sc_out sc_lv 4 signal 0 } 
	{ A_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_d0 sc_out sc_lv 32 signal 0 } 
	{ A_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ A_M_real_we0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_address1 sc_out sc_lv 4 signal 0 } 
	{ A_M_real_ce1 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_d1 sc_out sc_lv 32 signal 0 } 
	{ A_M_real_q1 sc_in sc_lv 32 signal 0 } 
	{ A_M_real_we1 sc_out sc_logic 1 signal 0 } 
	{ A_M_imag_address0 sc_out sc_lv 4 signal 1 } 
	{ A_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_M_imag_d0 sc_out sc_lv 32 signal 1 } 
	{ A_M_imag_q0 sc_in sc_lv 32 signal 1 } 
	{ A_M_imag_we0 sc_out sc_logic 1 signal 1 } 
	{ A_M_imag_address1 sc_out sc_lv 4 signal 1 } 
	{ A_M_imag_ce1 sc_out sc_logic 1 signal 1 } 
	{ A_M_imag_d1 sc_out sc_lv 32 signal 1 } 
	{ A_M_imag_q1 sc_in sc_lv 32 signal 1 } 
	{ A_M_imag_we1 sc_out sc_logic 1 signal 1 } 
	{ Q_M_real_address0 sc_out sc_lv 4 signal 2 } 
	{ Q_M_real_ce0 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_d0 sc_out sc_lv 32 signal 2 } 
	{ Q_M_real_q0 sc_in sc_lv 32 signal 2 } 
	{ Q_M_real_we0 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_address1 sc_out sc_lv 4 signal 2 } 
	{ Q_M_real_ce1 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_d1 sc_out sc_lv 32 signal 2 } 
	{ Q_M_real_q1 sc_in sc_lv 32 signal 2 } 
	{ Q_M_real_we1 sc_out sc_logic 1 signal 2 } 
	{ Q_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ Q_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_d0 sc_out sc_lv 32 signal 3 } 
	{ Q_M_imag_q0 sc_in sc_lv 32 signal 3 } 
	{ Q_M_imag_we0 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_address1 sc_out sc_lv 4 signal 3 } 
	{ Q_M_imag_ce1 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_d1 sc_out sc_lv 32 signal 3 } 
	{ Q_M_imag_q1 sc_in sc_lv 32 signal 3 } 
	{ Q_M_imag_we1 sc_out sc_logic 1 signal 3 } 
	{ R_M_real_address0 sc_out sc_lv 4 signal 4 } 
	{ R_M_real_ce0 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_d0 sc_out sc_lv 32 signal 4 } 
	{ R_M_real_q0 sc_in sc_lv 32 signal 4 } 
	{ R_M_real_we0 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_address1 sc_out sc_lv 4 signal 4 } 
	{ R_M_real_ce1 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_d1 sc_out sc_lv 32 signal 4 } 
	{ R_M_real_q1 sc_in sc_lv 32 signal 4 } 
	{ R_M_real_we1 sc_out sc_logic 1 signal 4 } 
	{ R_M_imag_address0 sc_out sc_lv 4 signal 5 } 
	{ R_M_imag_ce0 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_d0 sc_out sc_lv 32 signal 5 } 
	{ R_M_imag_q0 sc_in sc_lv 32 signal 5 } 
	{ R_M_imag_we0 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_address1 sc_out sc_lv 4 signal 5 } 
	{ R_M_imag_ce1 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_d1 sc_out sc_lv 32 signal 5 } 
	{ R_M_imag_q1 sc_in sc_lv 32 signal 5 } 
	{ R_M_imag_we1 sc_out sc_logic 1 signal 5 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "A_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real", "role": "address0" }} , 
 	{ "name": "A_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce0" }} , 
 	{ "name": "A_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "d0" }} , 
 	{ "name": "A_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q0" }} , 
 	{ "name": "A_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "we0" }} , 
 	{ "name": "A_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real", "role": "address1" }} , 
 	{ "name": "A_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce1" }} , 
 	{ "name": "A_M_real_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "d1" }} , 
 	{ "name": "A_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q1" }} , 
 	{ "name": "A_M_real_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "we1" }} , 
 	{ "name": "A_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address0" }} , 
 	{ "name": "A_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce0" }} , 
 	{ "name": "A_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "d0" }} , 
 	{ "name": "A_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q0" }} , 
 	{ "name": "A_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "we0" }} , 
 	{ "name": "A_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address1" }} , 
 	{ "name": "A_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce1" }} , 
 	{ "name": "A_M_imag_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "d1" }} , 
 	{ "name": "A_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q1" }} , 
 	{ "name": "A_M_imag_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "we1" }} , 
 	{ "name": "Q_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_real", "role": "address0" }} , 
 	{ "name": "Q_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "ce0" }} , 
 	{ "name": "Q_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "d0" }} , 
 	{ "name": "Q_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "q0" }} , 
 	{ "name": "Q_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "we0" }} , 
 	{ "name": "Q_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_real", "role": "address1" }} , 
 	{ "name": "Q_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "ce1" }} , 
 	{ "name": "Q_M_real_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "d1" }} , 
 	{ "name": "Q_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "q1" }} , 
 	{ "name": "Q_M_real_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "we1" }} , 
 	{ "name": "Q_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "address0" }} , 
 	{ "name": "Q_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "ce0" }} , 
 	{ "name": "Q_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "d0" }} , 
 	{ "name": "Q_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "q0" }} , 
 	{ "name": "Q_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "we0" }} , 
 	{ "name": "Q_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "address1" }} , 
 	{ "name": "Q_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "ce1" }} , 
 	{ "name": "Q_M_imag_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "d1" }} , 
 	{ "name": "Q_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "q1" }} , 
 	{ "name": "Q_M_imag_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "we1" }} , 
 	{ "name": "R_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_real", "role": "address0" }} , 
 	{ "name": "R_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "ce0" }} , 
 	{ "name": "R_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "d0" }} , 
 	{ "name": "R_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "q0" }} , 
 	{ "name": "R_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "we0" }} , 
 	{ "name": "R_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_real", "role": "address1" }} , 
 	{ "name": "R_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "ce1" }} , 
 	{ "name": "R_M_real_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "d1" }} , 
 	{ "name": "R_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "q1" }} , 
 	{ "name": "R_M_real_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "we1" }} , 
 	{ "name": "R_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_imag", "role": "address0" }} , 
 	{ "name": "R_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "ce0" }} , 
 	{ "name": "R_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "d0" }} , 
 	{ "name": "R_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "q0" }} , 
 	{ "name": "R_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "we0" }} , 
 	{ "name": "R_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_imag", "role": "address1" }} , 
 	{ "name": "R_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "ce1" }} , 
 	{ "name": "R_M_imag_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "d1" }} , 
 	{ "name": "R_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "q1" }} , 
 	{ "name": "R_M_imag_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "we1" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "34"],
		"CDFG" : "qrf_top",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "118", "EstimateLatencyMax" : "1798",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "5", "Name" : "qrf_top_Loop_1_proc3_U0"}],
		"OutputProcess" : [
			{"ID" : "34", "Name" : "qrf_top_Loop_qrf_out_U0"}],
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "qrf_top_Loop_1_proc3_U0", "Port" : "A_M_real"}]},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "qrf_top_Loop_1_proc3_U0", "Port" : "A_M_imag"}]},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "Q_M_real"}]},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "Q_M_imag"}]},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "R_M_real"}]},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "R_M_imag"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Qi_M_real_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Qi_M_imag_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Ri_M_real_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Ri_M_imag_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0", "Parent" : "0", "Child" : ["6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33"],
		"CDFG" : "qrf_top_Loop_1_proc3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "118", "EstimateLatencyMax" : "1798",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "34", "DependentChan" : "1"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "34", "DependentChan" : "2"},
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "34", "DependentChan" : "3"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "34", "DependentChan" : "4"},
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_faddfsub_32OgC_U154", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fadd_32ns_3cud_U155", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_faddfsub_32OgC_U156", "Parent" : "5"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fadd_32ns_3cud_U157", "Parent" : "5"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fsub_32ns_3bkb_U158", "Parent" : "5"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U159", "Parent" : "5"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U160", "Parent" : "5"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U161", "Parent" : "5"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U162", "Parent" : "5"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U163", "Parent" : "5"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U164", "Parent" : "5"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U165", "Parent" : "5"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U166", "Parent" : "5"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U167", "Parent" : "5"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U168", "Parent" : "5"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U169", "Parent" : "5"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U170", "Parent" : "5"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U171", "Parent" : "5"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U172", "Parent" : "5"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U173", "Parent" : "5"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U174", "Parent" : "5"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U175", "Parent" : "5"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U176", "Parent" : "5"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U177", "Parent" : "5"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U178", "Parent" : "5"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U179", "Parent" : "5"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U180", "Parent" : "5"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_1_proc3_U0.music_fsqrt_32ns_Rg6_U181", "Parent" : "5"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.qrf_top_Loop_qrf_out_U0", "Parent" : "0",
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
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "3"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "4"},
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "1"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "2"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	qrf_top {
		A_M_real {Type I LastRead 8 FirstWrite -1}
		A_M_imag {Type I LastRead 8 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 3}
		Q_M_imag {Type O LastRead -1 FirstWrite 3}
		R_M_real {Type O LastRead -1 FirstWrite 5}
		R_M_imag {Type O LastRead -1 FirstWrite 5}}
	qrf_top_Loop_1_proc3 {
		Qi_M_real {Type IO LastRead 85 FirstWrite 2}
		Qi_M_imag {Type IO LastRead 85 FirstWrite 2}
		Ri_M_real {Type IO LastRead 83 FirstWrite 4}
		Ri_M_imag {Type IO LastRead 83 FirstWrite 4}
		A_M_real {Type I LastRead 8 FirstWrite -1}
		A_M_imag {Type I LastRead 8 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "118", "Max" : "1798"}
	, {"Name" : "Interval", "Min" : "119", "Max" : "1799"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	A_M_real { ap_memory {  { A_M_real_address0 mem_address 1 4 }  { A_M_real_ce0 mem_ce 1 1 }  { A_M_real_d0 mem_din 1 32 }  { A_M_real_q0 mem_dout 0 32 }  { A_M_real_we0 mem_we 1 1 }  { A_M_real_address1 mem_address 1 4 }  { A_M_real_ce1 mem_ce 1 1 }  { A_M_real_d1 mem_din 1 32 }  { A_M_real_q1 mem_dout 0 32 }  { A_M_real_we1 mem_we 1 1 } } }
	A_M_imag { ap_memory {  { A_M_imag_address0 mem_address 1 4 }  { A_M_imag_ce0 mem_ce 1 1 }  { A_M_imag_d0 mem_din 1 32 }  { A_M_imag_q0 mem_dout 0 32 }  { A_M_imag_we0 mem_we 1 1 }  { A_M_imag_address1 mem_address 1 4 }  { A_M_imag_ce1 mem_ce 1 1 }  { A_M_imag_d1 mem_din 1 32 }  { A_M_imag_q1 mem_dout 0 32 }  { A_M_imag_we1 mem_we 1 1 } } }
	Q_M_real { ap_memory {  { Q_M_real_address0 mem_address 1 4 }  { Q_M_real_ce0 mem_ce 1 1 }  { Q_M_real_d0 mem_din 1 32 }  { Q_M_real_q0 mem_dout 0 32 }  { Q_M_real_we0 mem_we 1 1 }  { Q_M_real_address1 mem_address 1 4 }  { Q_M_real_ce1 mem_ce 1 1 }  { Q_M_real_d1 mem_din 1 32 }  { Q_M_real_q1 mem_dout 0 32 }  { Q_M_real_we1 mem_we 1 1 } } }
	Q_M_imag { ap_memory {  { Q_M_imag_address0 mem_address 1 4 }  { Q_M_imag_ce0 mem_ce 1 1 }  { Q_M_imag_d0 mem_din 1 32 }  { Q_M_imag_q0 mem_dout 0 32 }  { Q_M_imag_we0 mem_we 1 1 }  { Q_M_imag_address1 mem_address 1 4 }  { Q_M_imag_ce1 mem_ce 1 1 }  { Q_M_imag_d1 mem_din 1 32 }  { Q_M_imag_q1 mem_dout 0 32 }  { Q_M_imag_we1 mem_we 1 1 } } }
	R_M_real { ap_memory {  { R_M_real_address0 mem_address 1 4 }  { R_M_real_ce0 mem_ce 1 1 }  { R_M_real_d0 mem_din 1 32 }  { R_M_real_q0 mem_dout 0 32 }  { R_M_real_we0 mem_we 1 1 }  { R_M_real_address1 mem_address 1 4 }  { R_M_real_ce1 mem_ce 1 1 }  { R_M_real_d1 mem_din 1 32 }  { R_M_real_q1 mem_dout 0 32 }  { R_M_real_we1 mem_we 1 1 } } }
	R_M_imag { ap_memory {  { R_M_imag_address0 mem_address 1 4 }  { R_M_imag_ce0 mem_ce 1 1 }  { R_M_imag_d0 mem_din 1 32 }  { R_M_imag_q0 mem_dout 0 32 }  { R_M_imag_we0 mem_we 1 1 }  { R_M_imag_address1 mem_address 1 4 }  { R_M_imag_ce1 mem_ce 1 1 }  { R_M_imag_d1 mem_din 1 32 }  { R_M_imag_q1 mem_dout 0 32 }  { R_M_imag_we1 mem_we 1 1 } } }
}
