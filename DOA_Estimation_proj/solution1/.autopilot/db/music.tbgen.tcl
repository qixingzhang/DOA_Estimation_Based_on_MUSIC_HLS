set moduleName music
set isTopModule 1
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
set C_modelName {music}
set C_modelType { void 0 }
set C_modelArgList {
	{ X float 32 regular {array 40960 { 1 3 } 1 1 }  }
	{ P_sm float 32 regular {array 361 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "X", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "X","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 10239,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "P_sm", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "P_sm","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 360,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ X_address0 sc_out sc_lv 16 signal 0 } 
	{ X_ce0 sc_out sc_logic 1 signal 0 } 
	{ X_q0 sc_in sc_lv 32 signal 0 } 
	{ P_sm_address0 sc_out sc_lv 9 signal 1 } 
	{ P_sm_ce0 sc_out sc_logic 1 signal 1 } 
	{ P_sm_we0 sc_out sc_logic 1 signal 1 } 
	{ P_sm_d0 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "X_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "X", "role": "address0" }} , 
 	{ "name": "X_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X", "role": "ce0" }} , 
 	{ "name": "X_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X", "role": "q0" }} , 
 	{ "name": "P_sm_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "P_sm", "role": "address0" }} , 
 	{ "name": "P_sm_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "P_sm", "role": "ce0" }} , 
 	{ "name": "P_sm_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "P_sm", "role": "we0" }} , 
 	{ "name": "P_sm_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "P_sm", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "117", "152", "161", "173", "185", "203", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228"],
		"CDFG" : "music",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_eig_decompose_fu_1565"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fft_fu_1577"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Autocorrelation_fu_1591"},
			{"State" : "ap_ST_fsm_state106", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_1599"},
			{"State" : "ap_ST_fsm_state106", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_1615"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sort_eigval_fu_1630"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_fu_1642"}],
		"Port" : [
			{"Name" : "X", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "P_sm", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "173", "SubInstance" : "grp_sin_or_cos_float_s_fu_1615", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "161", "SubInstance" : "grp_sin_or_cos_float_s_fu_1599", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "117", "SubInstance" : "grp_fft_fu_1577", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "173", "SubInstance" : "grp_sin_or_cos_float_s_fu_1615", "Port" : "second_order_float_2"},
					{"ID" : "161", "SubInstance" : "grp_sin_or_cos_float_s_fu_1599", "Port" : "second_order_float_2"},
					{"ID" : "117", "SubInstance" : "grp_fft_fu_1577", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "173", "SubInstance" : "grp_sin_or_cos_float_s_fu_1615", "Port" : "second_order_float_3"},
					{"ID" : "161", "SubInstance" : "grp_sin_or_cos_float_s_fu_1599", "Port" : "second_order_float_3"},
					{"ID" : "117", "SubInstance" : "grp_fft_fu_1577", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "173", "SubInstance" : "grp_sin_or_cos_float_s_fu_1615", "Port" : "second_order_float_s"},
					{"ID" : "161", "SubInstance" : "grp_sin_or_cos_float_s_fu_1599", "Port" : "second_order_float_s"},
					{"ID" : "117", "SubInstance" : "grp_fft_fu_1577", "Port" : "second_order_float_s"}]},
			{"Name" : "fc", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "theta", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.theta_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_4oPi_table_256_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_4_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_6_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_7_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_s_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_re_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_im_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Xj_f_M_real_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Xj_f_M_imag_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_r_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_i_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_real_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_imag_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_real_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_imag_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_mat_M_real_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_mat_M_imag_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_real_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_imag_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_M_real_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_M_imag_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_real_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_imag_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565", "Parent" : "0", "Child" : ["28", "29", "30", "31", "32", "33", "34", "35", "36", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116"],
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
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.Q_temp_M_real_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.Q_temp_M_imag_U", "Parent" : "27"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.R_temp_M_real_U", "Parent" : "27"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.R_temp_M_imag_U", "Parent" : "27"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.Rx_temp_M_real_U", "Parent" : "27"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.Rx_temp_M_imag_U", "Parent" : "27"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.eig_mat_M_real_U", "Parent" : "27"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.eig_mat_M_imag_U", "Parent" : "27"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974", "Parent" : "27", "Child" : ["37", "38", "39", "40", "41", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103"],
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
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.Qi_M_real_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.Qi_M_imag_U", "Parent" : "36"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.Ri_M_real_U", "Parent" : "36"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.Ri_M_imag_U", "Parent" : "36"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556", "Parent" : "36", "Child" : ["42", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79"],
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
	{"ID" : "42", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226", "Parent" : "41", "Child" : ["43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60"],
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
	{"ID" : "43", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fadd_32ns_3ocq_U52", "Parent" : "42"},
	{"ID" : "44", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fadd_32ns_3ocq_U53", "Parent" : "42"},
	{"ID" : "45", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3jbC_U54", "Parent" : "42"},
	{"ID" : "46", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3jbC_U55", "Parent" : "42"},
	{"ID" : "47", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fmul_32ns_3jbC_U56", "Parent" : "42"},
	{"ID" : "48", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3ncg_U57", "Parent" : "42"},
	{"ID" : "49", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3ncg_U58", "Parent" : "42"},
	{"ID" : "50", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fdiv_32ns_3ncg_U59", "Parent" : "42"},
	{"ID" : "51", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U60", "Parent" : "42"},
	{"ID" : "52", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U61", "Parent" : "42"},
	{"ID" : "53", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U62", "Parent" : "42"},
	{"ID" : "54", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U63", "Parent" : "42"},
	{"ID" : "55", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U64", "Parent" : "42"},
	{"ID" : "56", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U65", "Parent" : "42"},
	{"ID" : "57", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U66", "Parent" : "42"},
	{"ID" : "58", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U67", "Parent" : "42"},
	{"ID" : "59", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fcmp_32ns_3pcA_U68", "Parent" : "42"},
	{"ID" : "60", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.grp_qrf_magnitude_float_s_fu_226.music_fsqrt_32ns_qcK_U69", "Parent" : "42"},
	{"ID" : "61", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fadd_32ns_3ocq_U77", "Parent" : "41"},
	{"ID" : "62", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fadd_32ns_3ocq_U78", "Parent" : "41"},
	{"ID" : "63", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fsub_32ns_3rcU_U79", "Parent" : "41"},
	{"ID" : "64", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fadd_32ns_3ocq_U80", "Parent" : "41"},
	{"ID" : "65", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fsub_32ns_3rcU_U81", "Parent" : "41"},
	{"ID" : "66", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U82", "Parent" : "41"},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U83", "Parent" : "41"},
	{"ID" : "68", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U84", "Parent" : "41"},
	{"ID" : "69", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U85", "Parent" : "41"},
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U86", "Parent" : "41"},
	{"ID" : "71", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U87", "Parent" : "41"},
	{"ID" : "72", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U88", "Parent" : "41"},
	{"ID" : "73", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U89", "Parent" : "41"},
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fmul_32ns_3jbC_U90", "Parent" : "41"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U91", "Parent" : "41"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U92", "Parent" : "41"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U93", "Parent" : "41"},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fdiv_32ns_3ncg_U94", "Parent" : "41"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.grp_qrf_givens_float_s_fu_556.music_fcmp_32ns_3pcA_U95", "Parent" : "41"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_faddfsub_32ibs_U102", "Parent" : "36"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U103", "Parent" : "36"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_faddfsub_32ibs_U104", "Parent" : "36"},
	{"ID" : "83", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U105", "Parent" : "36"},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fsub_32ns_3rcU_U106", "Parent" : "36"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U107", "Parent" : "36"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fsub_32ns_3rcU_U108", "Parent" : "36"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fadd_32ns_3ocq_U109", "Parent" : "36"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U110", "Parent" : "36"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U111", "Parent" : "36"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U112", "Parent" : "36"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U113", "Parent" : "36"},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U114", "Parent" : "36"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U115", "Parent" : "36"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U116", "Parent" : "36"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U117", "Parent" : "36"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U118", "Parent" : "36"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U119", "Parent" : "36"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U120", "Parent" : "36"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U121", "Parent" : "36"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U122", "Parent" : "36"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U123", "Parent" : "36"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U124", "Parent" : "36"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.grp_qrf_basic_fu_974.music_fmul_32ns_3jbC_U125", "Parent" : "36"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_faddfsub_32ibs_U133", "Parent" : "27"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_faddfsub_32ibs_U134", "Parent" : "27"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fsub_32ns_3rcU_U135", "Parent" : "27"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fmul_32ns_3jbC_U136", "Parent" : "27"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fmul_32ns_3jbC_U137", "Parent" : "27"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fmul_32ns_3jbC_U138", "Parent" : "27"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fmul_32ns_3jbC_U139", "Parent" : "27"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fmul_32ns_3jbC_U140", "Parent" : "27"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fmul_32ns_3jbC_U141", "Parent" : "27"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fdiv_32ns_3ncg_U142", "Parent" : "27"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fdiv_32ns_3ncg_U143", "Parent" : "27"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_fsqrt_32ns_qcK_U144", "Parent" : "27"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1565.music_mux_42_32_1_1_U145", "Parent" : "27"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577", "Parent" : "0", "Child" : ["118", "130", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151"],
		"CDFG" : "fft",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_152"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_168"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_bit_reverse_fu_184"}],
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "142", "SubInstance" : "grp_bit_reverse_fu_184", "Port" : "X_R"}]},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "142", "SubInstance" : "grp_bit_reverse_fu_184", "Port" : "X_I"}]},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "130", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "118", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "130", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "second_order_float_2"},
					{"ID" : "118", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "130", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "second_order_float_3"},
					{"ID" : "118", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "130", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "second_order_float_s"},
					{"ID" : "118", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "second_order_float_s"}]}]},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152", "Parent" : "117", "Child" : ["119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.ref_4oPi_table_100_V_U", "Parent" : "118"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.second_order_float_2_U", "Parent" : "118"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.second_order_float_3_U", "Parent" : "118"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.second_order_float_s_U", "Parent" : "118"},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "118",
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.music_mul_80ns_24fYi_U5", "Parent" : "118"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.music_mux_83_1_1_1_U6", "Parent" : "118"},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.music_mux_164_1_1_1_U7", "Parent" : "118"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.music_mux_164_1_1_1_U8", "Parent" : "118"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.music_mul_mul_15ng8j_U9", "Parent" : "118"},
	{"ID" : "129", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_152.music_mul_mul_15nhbi_U10", "Parent" : "118"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168", "Parent" : "117", "Child" : ["131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.ref_4oPi_table_100_V_U", "Parent" : "130"},
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.second_order_float_2_U", "Parent" : "130"},
	{"ID" : "133", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.second_order_float_3_U", "Parent" : "130"},
	{"ID" : "134", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.second_order_float_s_U", "Parent" : "130"},
	{"ID" : "135", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "130",
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.music_mul_80ns_24fYi_U5", "Parent" : "130"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.music_mux_83_1_1_1_U6", "Parent" : "130"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.music_mux_164_1_1_1_U7", "Parent" : "130"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.music_mux_164_1_1_1_U8", "Parent" : "130"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.music_mul_mul_15ng8j_U9", "Parent" : "130"},
	{"ID" : "141", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_sin_or_cos_float_s_fu_168.music_mul_mul_15nhbi_U10", "Parent" : "130"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.grp_bit_reverse_fu_184", "Parent" : "117",
		"CDFG" : "bit_reverse",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13313", "EstimateLatencyMax" : "14337",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_faddfsub_32ibs_U23", "Parent" : "117"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_faddfsub_32ibs_U24", "Parent" : "117"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_fmul_32ns_3jbC_U25", "Parent" : "117"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_fmul_32ns_3jbC_U26", "Parent" : "117"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_fmul_32ns_3jbC_U27", "Parent" : "117"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_fmul_32ns_3jbC_U28", "Parent" : "117"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_fptrunc_64nkbM_U29", "Parent" : "117"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_ddiv_64ns_6lbW_U30", "Parent" : "117"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1577.music_sitodp_32nsmb6_U31", "Parent" : "117"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591", "Parent" : "0", "Child" : ["153", "154", "155", "156", "157", "158", "159", "160"],
		"CDFG" : "Autocorrelation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2985", "EstimateLatencyMax" : "2985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "X_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rx_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Rx_M_imag", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_faddfsub_32ibs_U39", "Parent" : "152"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_faddfsub_32ibs_U40", "Parent" : "152"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_fmul_32ns_3jbC_U41", "Parent" : "152"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_fmul_32ns_3jbC_U42", "Parent" : "152"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_fmul_32ns_3jbC_U43", "Parent" : "152"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_fmul_32ns_3jbC_U44", "Parent" : "152"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_fdiv_32ns_3ncg_U45", "Parent" : "152"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1591.music_fdiv_32ns_3ncg_U46", "Parent" : "152"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599", "Parent" : "0", "Child" : ["162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.ref_4oPi_table_100_V_U", "Parent" : "161"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.second_order_float_2_U", "Parent" : "161"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.second_order_float_3_U", "Parent" : "161"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.second_order_float_s_U", "Parent" : "161"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "161",
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.music_mul_80ns_24fYi_U5", "Parent" : "161"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.music_mux_83_1_1_1_U6", "Parent" : "161"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.music_mux_164_1_1_1_U7", "Parent" : "161"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.music_mux_164_1_1_1_U8", "Parent" : "161"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.music_mul_mul_15ng8j_U9", "Parent" : "161"},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1599.music_mul_mul_15nhbi_U10", "Parent" : "161"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615", "Parent" : "0", "Child" : ["174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.ref_4oPi_table_100_V_U", "Parent" : "173"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.second_order_float_2_U", "Parent" : "173"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.second_order_float_3_U", "Parent" : "173"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.second_order_float_s_U", "Parent" : "173"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "173",
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.music_mul_80ns_24fYi_U5", "Parent" : "173"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.music_mux_83_1_1_1_U6", "Parent" : "173"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.music_mux_164_1_1_1_U7", "Parent" : "173"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.music_mux_164_1_1_1_U8", "Parent" : "173"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.music_mul_mul_15ng8j_U9", "Parent" : "173"},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_1615.music_mul_mul_15nhbi_U10", "Parent" : "173"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630", "Parent" : "0", "Child" : ["186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202"],
		"CDFG" : "sort_eigval",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "42",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "eigval_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_3_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_fcmp_32ns_3pcA_U156", "Parent" : "185"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U157", "Parent" : "185"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U158", "Parent" : "185"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U159", "Parent" : "185"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U160", "Parent" : "185"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U161", "Parent" : "185"},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U162", "Parent" : "185"},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U163", "Parent" : "185"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U164", "Parent" : "185"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U165", "Parent" : "185"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U166", "Parent" : "185"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U167", "Parent" : "185"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U168", "Parent" : "185"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U169", "Parent" : "185"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U170", "Parent" : "185"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U171", "Parent" : "185"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1630.music_mux_42_32_1_1_U172", "Parent" : "185"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_1642", "Parent" : "0", "Child" : ["204", "205"],
		"CDFG" : "scaled_fixed2ieee",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_1642.music_mux_42_32_1_1_U181", "Parent" : "203"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_1642.music_mux_42_32_1_1_U182", "Parent" : "203"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U185", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U186", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U187", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U188", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U189", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U190", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U191", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fptrunc_64nkbM_U192", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fpext_32ns_Mgi_U193", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_dmul_64ns_6Ngs_U194", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U195", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U196", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_170ns_5OgC_U197", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_83_1_1_1_U198", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49PgM_U199", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49PgM_U200", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49PgM_U201", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_56ns_52QgW_U202", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_44Rg6_U203", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_42ns_33Shg_U204", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_64s_63nThq_U205", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U206", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U207", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	music {
		X {Type I LastRead 19 FirstWrite -1}
		P_sm {Type O LastRead -1 FirstWrite 37}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}
		fc {Type I LastRead -1 FirstWrite -1}
		theta {Type I LastRead -1 FirstWrite -1}
		ref_4oPi_table_256_V {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_4 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_5 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_6 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_7 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_s {Type I LastRead -1 FirstWrite -1}}
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
		b_M_imag {Type I LastRead 0 FirstWrite -1}}
	fft {
		X_R {Type IO LastRead 63 FirstWrite 3}
		X_I {Type IO LastRead 63 FirstWrite 3}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 9 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 9 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	bit_reverse {
		X_R {Type IO LastRead 3 FirstWrite 3}
		X_I {Type IO LastRead 3 FirstWrite 3}}
	Autocorrelation {
		X_M_real {Type I LastRead 4 FirstWrite -1}
		X_M_imag {Type I LastRead 4 FirstWrite -1}
		Rx_M_real {Type O LastRead -1 FirstWrite 27}
		Rx_M_imag {Type O LastRead -1 FirstWrite 27}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 9 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 9 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	sort_eigval {
		eigval_0_read {Type I LastRead 0 FirstWrite -1}
		eigval_1_read {Type I LastRead 0 FirstWrite -1}
		eigval_2_read {Type I LastRead 0 FirstWrite -1}
		eigval_3_read {Type I LastRead 0 FirstWrite -1}
		sort_index_0_read {Type I LastRead 0 FirstWrite -1}
		sort_index_1_read {Type I LastRead 0 FirstWrite -1}
		sort_index_2_read {Type I LastRead 0 FirstWrite -1}
		sort_index_3_read {Type I LastRead 0 FirstWrite -1}}
	scaled_fixed2ieee {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	X { ap_memory {  { X_address0 mem_address 1 16 }  { X_ce0 mem_ce 1 1 }  { X_q0 mem_dout 0 32 } } }
	P_sm { ap_memory {  { P_sm_address0 mem_address 1 9 }  { P_sm_ce0 mem_ce 1 1 }  { P_sm_we0 mem_we 1 1 }  { P_sm_d0 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
