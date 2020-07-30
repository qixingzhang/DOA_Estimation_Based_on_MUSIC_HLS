set moduleName eig_decompose
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
set C_modelName {eig_decompose}
set C_modelType { int 128 }
set C_modelArgList {
	{ Rx_M_real float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ Rx_M_imag float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ U_M_real float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ U_M_imag float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ eigval_0_read float 32 regular  }
	{ eigval_1_read float 32 regular  }
	{ eigval_2_read float 32 regular  }
	{ eigval_3_read float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "Rx_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Rx_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "U_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "U_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "eigval_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "eigval_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "eigval_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "eigval_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ Rx_M_real_address0 sc_out sc_lv 4 signal 0 } 
	{ Rx_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ Rx_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ Rx_M_imag_address0 sc_out sc_lv 4 signal 1 } 
	{ Rx_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ Rx_M_imag_q0 sc_in sc_lv 32 signal 1 } 
	{ U_M_real_address0 sc_out sc_lv 4 signal 2 } 
	{ U_M_real_ce0 sc_out sc_logic 1 signal 2 } 
	{ U_M_real_we0 sc_out sc_logic 1 signal 2 } 
	{ U_M_real_d0 sc_out sc_lv 32 signal 2 } 
	{ U_M_real_q0 sc_in sc_lv 32 signal 2 } 
	{ U_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ U_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ U_M_imag_we0 sc_out sc_logic 1 signal 3 } 
	{ U_M_imag_d0 sc_out sc_lv 32 signal 3 } 
	{ U_M_imag_q0 sc_in sc_lv 32 signal 3 } 
	{ eigval_0_read sc_in sc_lv 32 signal 4 } 
	{ eigval_1_read sc_in sc_lv 32 signal 5 } 
	{ eigval_2_read sc_in sc_lv 32 signal 6 } 
	{ eigval_3_read sc_in sc_lv 32 signal 7 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "Rx_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "address0" }} , 
 	{ "name": "Rx_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "ce0" }} , 
 	{ "name": "Rx_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "q0" }} , 
 	{ "name": "Rx_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "address0" }} , 
 	{ "name": "Rx_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "ce0" }} , 
 	{ "name": "Rx_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "q0" }} , 
 	{ "name": "U_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "U_M_real", "role": "address0" }} , 
 	{ "name": "U_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "U_M_real", "role": "ce0" }} , 
 	{ "name": "U_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "U_M_real", "role": "we0" }} , 
 	{ "name": "U_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "U_M_real", "role": "d0" }} , 
 	{ "name": "U_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "U_M_real", "role": "q0" }} , 
 	{ "name": "U_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "U_M_imag", "role": "address0" }} , 
 	{ "name": "U_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "U_M_imag", "role": "ce0" }} , 
 	{ "name": "U_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "U_M_imag", "role": "we0" }} , 
 	{ "name": "U_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "U_M_imag", "role": "d0" }} , 
 	{ "name": "U_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "U_M_imag", "role": "q0" }} , 
 	{ "name": "eigval_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_0_read", "role": "default" }} , 
 	{ "name": "eigval_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_1_read", "role": "default" }} , 
 	{ "name": "eigval_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_2_read", "role": "default" }} , 
 	{ "name": "eigval_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_3_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89"],
		"CDFG" : "eig_decompose",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14883", "EstimateLatencyMax" : "43195",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_basic_fu_974"}],
		"Port" : [
			{"Name" : "Rx_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rx_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "U_M_real", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "U_M_imag", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "eigval_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_3_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_temp_M_real_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_temp_M_imag_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.R_temp_M_real_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.R_temp_M_imag_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rx_temp_M_real_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rx_temp_M_imag_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.eig_mat_M_real_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.eig_mat_M_imag_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974", "Parent" : "0", "Child" : ["10", "11", "12", "13", "14", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76"],
		"CDFG" : "qrf_basic",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "211", "EstimateLatencyMax" : "2719",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_givens_float_s_fu_556"}],
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.Qi_M_real_U", "Parent" : "9"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.Qi_M_imag_U", "Parent" : "9"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.Ri_M_real_U", "Parent" : "9"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.Ri_M_imag_U", "Parent" : "9"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556", "Parent" : "9", "Child" : ["15", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52"],
		"CDFG" : "qrf_givens_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "77",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_magnitude_float_s_fu_226"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_magnitude_float_s_fu_226"}],
		"Port" : [
			{"Name" : "extra_pass", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226", "Parent" : "14", "Child" : ["16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33"],
		"CDFG" : "qrf_magnitude_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "48",
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
	{"ID" : "16", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fadd_32ns_3ocq_U52", "Parent" : "15"},
	{"ID" : "17", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fadd_32ns_3ocq_U53", "Parent" : "15"},
	{"ID" : "18", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3jbC_U54", "Parent" : "15"},
	{"ID" : "19", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3jbC_U55", "Parent" : "15"},
	{"ID" : "20", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3jbC_U56", "Parent" : "15"},
	{"ID" : "21", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3ncg_U57", "Parent" : "15"},
	{"ID" : "22", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3ncg_U58", "Parent" : "15"},
	{"ID" : "23", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3ncg_U59", "Parent" : "15"},
	{"ID" : "24", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U60", "Parent" : "15"},
	{"ID" : "25", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U61", "Parent" : "15"},
	{"ID" : "26", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U62", "Parent" : "15"},
	{"ID" : "27", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U63", "Parent" : "15"},
	{"ID" : "28", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U64", "Parent" : "15"},
	{"ID" : "29", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U65", "Parent" : "15"},
	{"ID" : "30", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U66", "Parent" : "15"},
	{"ID" : "31", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U67", "Parent" : "15"},
	{"ID" : "32", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U68", "Parent" : "15"},
	{"ID" : "33", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fsqrt_32ns_qcK_U69", "Parent" : "15"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fadd_32ns_3ocq_U77", "Parent" : "14"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fadd_32ns_3ocq_U78", "Parent" : "14"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fsub_32ns_3rcU_U79", "Parent" : "14"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fadd_32ns_3ocq_U80", "Parent" : "14"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fsub_32ns_3rcU_U81", "Parent" : "14"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U82", "Parent" : "14"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U83", "Parent" : "14"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U84", "Parent" : "14"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U85", "Parent" : "14"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U86", "Parent" : "14"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U87", "Parent" : "14"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U88", "Parent" : "14"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U89", "Parent" : "14"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U90", "Parent" : "14"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U91", "Parent" : "14"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U92", "Parent" : "14"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U93", "Parent" : "14"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U94", "Parent" : "14"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fcmp_32ns_3pcA_U95", "Parent" : "14"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_faddfsub_32ibs_U102", "Parent" : "9"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U103", "Parent" : "9"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_faddfsub_32ibs_U104", "Parent" : "9"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U105", "Parent" : "9"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fsub_32ns_3rcU_U106", "Parent" : "9"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U107", "Parent" : "9"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fsub_32ns_3rcU_U108", "Parent" : "9"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U109", "Parent" : "9"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U110", "Parent" : "9"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U111", "Parent" : "9"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U112", "Parent" : "9"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U113", "Parent" : "9"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U114", "Parent" : "9"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U115", "Parent" : "9"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U116", "Parent" : "9"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U117", "Parent" : "9"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U118", "Parent" : "9"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U119", "Parent" : "9"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U120", "Parent" : "9"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U121", "Parent" : "9"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U122", "Parent" : "9"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U123", "Parent" : "9"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U124", "Parent" : "9"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U125", "Parent" : "9"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U133", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U134", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3rcU_U135", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U136", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U137", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U138", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U139", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U140", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U141", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U142", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U143", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsqrt_32ns_qcK_U144", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U145", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	eig_decompose {
		Rx_M_real {Type I LastRead 15 FirstWrite -1}
		Rx_M_imag {Type I LastRead 15 FirstWrite -1}
		U_M_real {Type IO LastRead 36 FirstWrite 11}
		U_M_imag {Type IO LastRead 36 FirstWrite 11}
		eigval_0_read {Type I LastRead 0 FirstWrite -1}
		eigval_1_read {Type I LastRead 0 FirstWrite -1}
		eigval_2_read {Type I LastRead 0 FirstWrite -1}
		eigval_3_read {Type I LastRead 0 FirstWrite -1}}
	qrf_basic {
		A_M_real {Type I LastRead 7 FirstWrite -1}
		A_M_imag {Type I LastRead 7 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 9}
		Q_M_imag {Type O LastRead -1 FirstWrite 9}
		R_M_real {Type O LastRead -1 FirstWrite 10}
		R_M_imag {Type O LastRead -1 FirstWrite 10}}
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
	{"Name" : "Latency", "Min" : "14883", "Max" : "43195"}
	, {"Name" : "Interval", "Min" : "14883", "Max" : "43195"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	Rx_M_real { ap_memory {  { Rx_M_real_address0 mem_address 1 4 }  { Rx_M_real_ce0 mem_ce 1 1 }  { Rx_M_real_q0 mem_dout 0 32 } } }
	Rx_M_imag { ap_memory {  { Rx_M_imag_address0 mem_address 1 4 }  { Rx_M_imag_ce0 mem_ce 1 1 }  { Rx_M_imag_q0 mem_dout 0 32 } } }
	U_M_real { ap_memory {  { U_M_real_address0 mem_address 1 4 }  { U_M_real_ce0 mem_ce 1 1 }  { U_M_real_we0 mem_we 1 1 }  { U_M_real_d0 mem_din 1 32 }  { U_M_real_q0 mem_dout 0 32 } } }
	U_M_imag { ap_memory {  { U_M_imag_address0 mem_address 1 4 }  { U_M_imag_ce0 mem_ce 1 1 }  { U_M_imag_we0 mem_we 1 1 }  { U_M_imag_d0 mem_din 1 32 }  { U_M_imag_q0 mem_dout 0 32 } } }
	eigval_0_read { ap_none {  { eigval_0_read in_data 0 32 } } }
	eigval_1_read { ap_none {  { eigval_1_read in_data 0 32 } } }
	eigval_2_read { ap_none {  { eigval_2_read in_data 0 32 } } }
	eigval_3_read { ap_none {  { eigval_3_read in_data 0 32 } } }
}
