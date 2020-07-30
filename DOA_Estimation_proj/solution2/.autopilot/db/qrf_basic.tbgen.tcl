set moduleName qrf_basic
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
set C_modelName {qrf_basic}
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
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_M_real_address0 sc_out sc_lv 4 signal 0 } 
	{ A_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ A_M_imag_address0 sc_out sc_lv 4 signal 1 } 
	{ A_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_M_imag_q0 sc_in sc_lv 32 signal 1 } 
	{ Q_M_real_address0 sc_out sc_lv 4 signal 2 } 
	{ Q_M_real_ce0 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_we0 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_d0 sc_out sc_lv 32 signal 2 } 
	{ Q_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ Q_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_we0 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_d0 sc_out sc_lv 32 signal 3 } 
	{ R_M_real_address0 sc_out sc_lv 4 signal 4 } 
	{ R_M_real_ce0 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_we0 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_d0 sc_out sc_lv 32 signal 4 } 
	{ R_M_imag_address0 sc_out sc_lv 4 signal 5 } 
	{ R_M_imag_ce0 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_we0 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_d0 sc_out sc_lv 32 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real", "role": "address0" }} , 
 	{ "name": "A_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce0" }} , 
 	{ "name": "A_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q0" }} , 
 	{ "name": "A_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address0" }} , 
 	{ "name": "A_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce0" }} , 
 	{ "name": "A_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q0" }} , 
 	{ "name": "Q_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_real", "role": "address0" }} , 
 	{ "name": "Q_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "ce0" }} , 
 	{ "name": "Q_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "we0" }} , 
 	{ "name": "Q_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "d0" }} , 
 	{ "name": "Q_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "address0" }} , 
 	{ "name": "Q_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "ce0" }} , 
 	{ "name": "Q_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "we0" }} , 
 	{ "name": "Q_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "d0" }} , 
 	{ "name": "R_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_real", "role": "address0" }} , 
 	{ "name": "R_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "ce0" }} , 
 	{ "name": "R_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "we0" }} , 
 	{ "name": "R_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "d0" }} , 
 	{ "name": "R_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_imag", "role": "address0" }} , 
 	{ "name": "R_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "ce0" }} , 
 	{ "name": "R_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "we0" }} , 
 	{ "name": "R_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "44", "45", "46", "47"],
		"CDFG" : "qrf_basic",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "171", "EstimateLatencyMax" : "1767",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_givens_float_s_fu_584"}],
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Qi_M_real_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Qi_M_imag_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Ri_M_real_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Ri_M_imag_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584", "Parent" : "0", "Child" : ["6", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43"],
		"CDFG" : "qrf_givens_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "46",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_magnitude_float_s_fu_226"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_magnitude_float_s_fu_226"}],
		"Port" : [
			{"Name" : "extra_pass", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226", "Parent" : "5", "Child" : ["7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24"],
		"CDFG" : "qrf_magnitude_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "28",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fadd_32ns_3hbi_U19", "Parent" : "6"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fadd_32ns_3hbi_U20", "Parent" : "6"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3ibs_U21", "Parent" : "6"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3ibs_U22", "Parent" : "6"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3ibs_U23", "Parent" : "6"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3jbC_U24", "Parent" : "6"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3jbC_U25", "Parent" : "6"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3jbC_U26", "Parent" : "6"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U27", "Parent" : "6"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U28", "Parent" : "6"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U29", "Parent" : "6"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U30", "Parent" : "6"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U31", "Parent" : "6"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U32", "Parent" : "6"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U33", "Parent" : "6"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U34", "Parent" : "6"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3kbM_U35", "Parent" : "6"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.grp_qrf_magnitude_float_s_fu_226.music_fsqrt_32ns_lbW_U36", "Parent" : "6"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fadd_32ns_3hbi_U46", "Parent" : "5"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fadd_32ns_3hbi_U47", "Parent" : "5"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fsub_32ns_3mb6_U48", "Parent" : "5"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fadd_32ns_3hbi_U49", "Parent" : "5"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fsub_32ns_3mb6_U50", "Parent" : "5"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U51", "Parent" : "5"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U52", "Parent" : "5"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U53", "Parent" : "5"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U54", "Parent" : "5"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U55", "Parent" : "5"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U56", "Parent" : "5"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U57", "Parent" : "5"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U58", "Parent" : "5"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fmul_32ns_3ibs_U59", "Parent" : "5"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fdiv_32ns_3jbC_U60", "Parent" : "5"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fdiv_32ns_3jbC_U61", "Parent" : "5"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fdiv_32ns_3jbC_U62", "Parent" : "5"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fdiv_32ns_3jbC_U63", "Parent" : "5"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_584.music_fcmp_32ns_3kbM_U64", "Parent" : "5"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ncg_U71", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ncg_U72", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3ibs_U73", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3ibs_U74", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	qrf_basic {
		A_M_real {Type I LastRead 8 FirstWrite -1}
		A_M_imag {Type I LastRead 8 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 9}
		Q_M_imag {Type O LastRead -1 FirstWrite 9}
		R_M_real {Type O LastRead -1 FirstWrite 11}
		R_M_imag {Type O LastRead -1 FirstWrite 11}}
	qrf_givens_float_s {
		extra_pass {Type I LastRead 0 FirstWrite -1}
		a_M_real {Type I LastRead 0 FirstWrite -1}
		a_M_imag {Type I LastRead 0 FirstWrite -1}
		b_M_real {Type I LastRead 0 FirstWrite -1}
		b_M_imag {Type I LastRead 0 FirstWrite -1}}
	qrf_magnitude_float_s {
		a_M_real {Type I LastRead 0 FirstWrite -1}
		a_M_imag {Type I LastRead 0 FirstWrite -1}
		b_M_real {Type I LastRead 0 FirstWrite -1}
		b_M_imag {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "171", "Max" : "1767"}
	, {"Name" : "Interval", "Min" : "171", "Max" : "1767"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
]}

set Spec2ImplPortList { 
	A_M_real { ap_memory {  { A_M_real_address0 mem_address 1 4 }  { A_M_real_ce0 mem_ce 1 1 }  { A_M_real_q0 mem_dout 0 32 } } }
	A_M_imag { ap_memory {  { A_M_imag_address0 mem_address 1 4 }  { A_M_imag_ce0 mem_ce 1 1 }  { A_M_imag_q0 mem_dout 0 32 } } }
	Q_M_real { ap_memory {  { Q_M_real_address0 mem_address 1 4 }  { Q_M_real_ce0 mem_ce 1 1 }  { Q_M_real_we0 mem_we 1 1 }  { Q_M_real_d0 mem_din 1 32 } } }
	Q_M_imag { ap_memory {  { Q_M_imag_address0 mem_address 1 4 }  { Q_M_imag_ce0 mem_ce 1 1 }  { Q_M_imag_we0 mem_we 1 1 }  { Q_M_imag_d0 mem_din 1 32 } } }
	R_M_real { ap_memory {  { R_M_real_address0 mem_address 1 4 }  { R_M_real_ce0 mem_ce 1 1 }  { R_M_real_we0 mem_we 1 1 }  { R_M_real_d0 mem_din 1 32 } } }
	R_M_imag { ap_memory {  { R_M_imag_address0 mem_address 1 4 }  { R_M_imag_ce0 mem_ce 1 1 }  { R_M_imag_we0 mem_we 1 1 }  { R_M_imag_d0 mem_din 1 32 } } }
}
