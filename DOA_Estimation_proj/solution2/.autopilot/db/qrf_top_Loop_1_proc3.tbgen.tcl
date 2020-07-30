set moduleName qrf_top_Loop_1_proc3
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
set C_modelName {qrf_top_Loop_1_proc3}
set C_modelType { void 0 }
set C_modelArgList {
	{ Qi_M_real float 32 regular {array 16 { 2 2 } 1 1 }  }
	{ Qi_M_imag float 32 regular {array 16 { 2 2 } 1 1 }  }
	{ Ri_M_real float 32 regular {array 16 { 2 2 } 1 1 }  }
	{ Ri_M_imag float 32 regular {array 16 { 2 2 } 1 1 }  }
	{ A_M_real float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag float 32 regular {array 16 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "Qi_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "Qi_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "Ri_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "Ri_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 53
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ Qi_M_real_address0 sc_out sc_lv 4 signal 0 } 
	{ Qi_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ Qi_M_real_we0 sc_out sc_logic 1 signal 0 } 
	{ Qi_M_real_d0 sc_out sc_lv 32 signal 0 } 
	{ Qi_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ Qi_M_real_address1 sc_out sc_lv 4 signal 0 } 
	{ Qi_M_real_ce1 sc_out sc_logic 1 signal 0 } 
	{ Qi_M_real_we1 sc_out sc_logic 1 signal 0 } 
	{ Qi_M_real_d1 sc_out sc_lv 32 signal 0 } 
	{ Qi_M_real_q1 sc_in sc_lv 32 signal 0 } 
	{ Qi_M_imag_address0 sc_out sc_lv 4 signal 1 } 
	{ Qi_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ Qi_M_imag_we0 sc_out sc_logic 1 signal 1 } 
	{ Qi_M_imag_d0 sc_out sc_lv 32 signal 1 } 
	{ Qi_M_imag_q0 sc_in sc_lv 32 signal 1 } 
	{ Qi_M_imag_address1 sc_out sc_lv 4 signal 1 } 
	{ Qi_M_imag_ce1 sc_out sc_logic 1 signal 1 } 
	{ Qi_M_imag_we1 sc_out sc_logic 1 signal 1 } 
	{ Qi_M_imag_d1 sc_out sc_lv 32 signal 1 } 
	{ Qi_M_imag_q1 sc_in sc_lv 32 signal 1 } 
	{ Ri_M_real_address0 sc_out sc_lv 4 signal 2 } 
	{ Ri_M_real_ce0 sc_out sc_logic 1 signal 2 } 
	{ Ri_M_real_we0 sc_out sc_logic 1 signal 2 } 
	{ Ri_M_real_d0 sc_out sc_lv 32 signal 2 } 
	{ Ri_M_real_q0 sc_in sc_lv 32 signal 2 } 
	{ Ri_M_real_address1 sc_out sc_lv 4 signal 2 } 
	{ Ri_M_real_ce1 sc_out sc_logic 1 signal 2 } 
	{ Ri_M_real_we1 sc_out sc_logic 1 signal 2 } 
	{ Ri_M_real_d1 sc_out sc_lv 32 signal 2 } 
	{ Ri_M_real_q1 sc_in sc_lv 32 signal 2 } 
	{ Ri_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ Ri_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ Ri_M_imag_we0 sc_out sc_logic 1 signal 3 } 
	{ Ri_M_imag_d0 sc_out sc_lv 32 signal 3 } 
	{ Ri_M_imag_q0 sc_in sc_lv 32 signal 3 } 
	{ Ri_M_imag_address1 sc_out sc_lv 4 signal 3 } 
	{ Ri_M_imag_ce1 sc_out sc_logic 1 signal 3 } 
	{ Ri_M_imag_we1 sc_out sc_logic 1 signal 3 } 
	{ Ri_M_imag_d1 sc_out sc_lv 32 signal 3 } 
	{ Ri_M_imag_q1 sc_in sc_lv 32 signal 3 } 
	{ A_M_real_address0 sc_out sc_lv 4 signal 4 } 
	{ A_M_real_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_M_real_q0 sc_in sc_lv 32 signal 4 } 
	{ A_M_imag_address0 sc_out sc_lv 4 signal 5 } 
	{ A_M_imag_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_M_imag_q0 sc_in sc_lv 32 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "Qi_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "address0" }} , 
 	{ "name": "Qi_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "ce0" }} , 
 	{ "name": "Qi_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "we0" }} , 
 	{ "name": "Qi_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "d0" }} , 
 	{ "name": "Qi_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "q0" }} , 
 	{ "name": "Qi_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "address1" }} , 
 	{ "name": "Qi_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "ce1" }} , 
 	{ "name": "Qi_M_real_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "we1" }} , 
 	{ "name": "Qi_M_real_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "d1" }} , 
 	{ "name": "Qi_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_real", "role": "q1" }} , 
 	{ "name": "Qi_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "address0" }} , 
 	{ "name": "Qi_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "ce0" }} , 
 	{ "name": "Qi_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "we0" }} , 
 	{ "name": "Qi_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "d0" }} , 
 	{ "name": "Qi_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "q0" }} , 
 	{ "name": "Qi_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "address1" }} , 
 	{ "name": "Qi_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "ce1" }} , 
 	{ "name": "Qi_M_imag_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "we1" }} , 
 	{ "name": "Qi_M_imag_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "d1" }} , 
 	{ "name": "Qi_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Qi_M_imag", "role": "q1" }} , 
 	{ "name": "Ri_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "address0" }} , 
 	{ "name": "Ri_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "ce0" }} , 
 	{ "name": "Ri_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "we0" }} , 
 	{ "name": "Ri_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "d0" }} , 
 	{ "name": "Ri_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "q0" }} , 
 	{ "name": "Ri_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "address1" }} , 
 	{ "name": "Ri_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "ce1" }} , 
 	{ "name": "Ri_M_real_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "we1" }} , 
 	{ "name": "Ri_M_real_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "d1" }} , 
 	{ "name": "Ri_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_real", "role": "q1" }} , 
 	{ "name": "Ri_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "address0" }} , 
 	{ "name": "Ri_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "ce0" }} , 
 	{ "name": "Ri_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "we0" }} , 
 	{ "name": "Ri_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "d0" }} , 
 	{ "name": "Ri_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "q0" }} , 
 	{ "name": "Ri_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "address1" }} , 
 	{ "name": "Ri_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "ce1" }} , 
 	{ "name": "Ri_M_imag_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "we1" }} , 
 	{ "name": "Ri_M_imag_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "d1" }} , 
 	{ "name": "Ri_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Ri_M_imag", "role": "q1" }} , 
 	{ "name": "A_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real", "role": "address0" }} , 
 	{ "name": "A_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce0" }} , 
 	{ "name": "A_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q0" }} , 
 	{ "name": "A_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address0" }} , 
 	{ "name": "A_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce0" }} , 
 	{ "name": "A_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28"],
		"CDFG" : "qrf_top_Loop_1_proc3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "118", "EstimateLatencyMax" : "1666",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32jbC_U21", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32jbC_U22", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3kbM_U23", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3lbW_U24", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3kbM_U25", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U26", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U27", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U28", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U29", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U30", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U31", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U32", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U33", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U34", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U35", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U36", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U37", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U38", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U39", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U40", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U41", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U42", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U43", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U44", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U45", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U46", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U47", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsqrt_32ns_pcA_U48", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	qrf_top_Loop_1_proc3 {
		Qi_M_real {Type IO LastRead 54 FirstWrite 2}
		Qi_M_imag {Type IO LastRead 54 FirstWrite 2}
		Ri_M_real {Type IO LastRead 52 FirstWrite 4}
		Ri_M_imag {Type IO LastRead 52 FirstWrite 4}
		A_M_real {Type I LastRead 8 FirstWrite -1}
		A_M_imag {Type I LastRead 8 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "118", "Max" : "1666"}
	, {"Name" : "Interval", "Min" : "118", "Max" : "1666"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
]}

set Spec2ImplPortList { 
	Qi_M_real { ap_memory {  { Qi_M_real_address0 mem_address 1 4 }  { Qi_M_real_ce0 mem_ce 1 1 }  { Qi_M_real_we0 mem_we 1 1 }  { Qi_M_real_d0 mem_din 1 32 }  { Qi_M_real_q0 mem_dout 0 32 }  { Qi_M_real_address1 MemPortADDR2 1 4 }  { Qi_M_real_ce1 MemPortCE2 1 1 }  { Qi_M_real_we1 MemPortWE2 1 1 }  { Qi_M_real_d1 MemPortDIN2 1 32 }  { Qi_M_real_q1 MemPortDOUT2 0 32 } } }
	Qi_M_imag { ap_memory {  { Qi_M_imag_address0 mem_address 1 4 }  { Qi_M_imag_ce0 mem_ce 1 1 }  { Qi_M_imag_we0 mem_we 1 1 }  { Qi_M_imag_d0 mem_din 1 32 }  { Qi_M_imag_q0 mem_dout 0 32 }  { Qi_M_imag_address1 MemPortADDR2 1 4 }  { Qi_M_imag_ce1 MemPortCE2 1 1 }  { Qi_M_imag_we1 MemPortWE2 1 1 }  { Qi_M_imag_d1 MemPortDIN2 1 32 }  { Qi_M_imag_q1 MemPortDOUT2 0 32 } } }
	Ri_M_real { ap_memory {  { Ri_M_real_address0 mem_address 1 4 }  { Ri_M_real_ce0 mem_ce 1 1 }  { Ri_M_real_we0 mem_we 1 1 }  { Ri_M_real_d0 mem_din 1 32 }  { Ri_M_real_q0 mem_dout 0 32 }  { Ri_M_real_address1 MemPortADDR2 1 4 }  { Ri_M_real_ce1 MemPortCE2 1 1 }  { Ri_M_real_we1 MemPortWE2 1 1 }  { Ri_M_real_d1 MemPortDIN2 1 32 }  { Ri_M_real_q1 MemPortDOUT2 0 32 } } }
	Ri_M_imag { ap_memory {  { Ri_M_imag_address0 mem_address 1 4 }  { Ri_M_imag_ce0 mem_ce 1 1 }  { Ri_M_imag_we0 mem_we 1 1 }  { Ri_M_imag_d0 mem_din 1 32 }  { Ri_M_imag_q0 mem_dout 0 32 }  { Ri_M_imag_address1 MemPortADDR2 1 4 }  { Ri_M_imag_ce1 MemPortCE2 1 1 }  { Ri_M_imag_we1 MemPortWE2 1 1 }  { Ri_M_imag_d1 MemPortDIN2 1 32 }  { Ri_M_imag_q1 MemPortDOUT2 0 32 } } }
	A_M_real { ap_memory {  { A_M_real_address0 mem_address 1 4 }  { A_M_real_ce0 mem_ce 1 1 }  { A_M_real_q0 mem_dout 0 32 } } }
	A_M_imag { ap_memory {  { A_M_imag_address0 mem_address 1 4 }  { A_M_imag_ce0 mem_ce 1 1 }  { A_M_imag_q0 mem_dout 0 32 } } }
}
