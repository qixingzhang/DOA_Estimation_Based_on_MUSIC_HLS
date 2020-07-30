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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "128", "163", "184", "205", "214", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245"],
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
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_eig_decompose_fu_1399"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fft_fu_1419"},
			{"State" : "ap_ST_fsm_state88", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Autocorrelation_fu_1472"},
			{"State" : "ap_ST_fsm_state34", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sort_eigval_fu_1480"}],
		"Port" : [
			{"Name" : "X", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "P_sm", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "128", "SubInstance" : "grp_fft_fu_1419", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "128", "SubInstance" : "grp_fft_fu_1419", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "128", "SubInstance" : "grp_fft_fu_1419", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "128", "SubInstance" : "grp_fft_fu_1419", "Port" : "second_order_float_s"}]},
			{"Name" : "CONFIG_BATCH_CNTS", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_eig_decompose_fu_1399", "Port" : "CONFIG_BATCH_CNTS"}]},
			{"Name" : "CONFIG_SEQUENCE_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_eig_decompose_fu_1399", "Port" : "CONFIG_SEQUENCE_0"}]},
			{"Name" : "CONFIG_SEQUENCE_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_eig_decompose_fu_1399", "Port" : "CONFIG_SEQUENCE_1"}]},
			{"Name" : "CONFIG_SEQUENCE_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_eig_decompose_fu_1399", "Port" : "CONFIG_SEQUENCE_2"}]},
			{"Name" : "fc", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "theta", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "163", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433", "Port" : "ref_4oPi_table_256_V"},
					{"ID" : "184", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453", "Port" : "ref_4oPi_table_256_V"}]},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "163", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433", "Port" : "fourth_order_double_4"},
					{"ID" : "184", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453", "Port" : "fourth_order_double_4"}]},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "163", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433", "Port" : "fourth_order_double_5"},
					{"ID" : "184", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453", "Port" : "fourth_order_double_5"}]},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "163", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433", "Port" : "fourth_order_double_6"},
					{"ID" : "184", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453", "Port" : "fourth_order_double_6"}]},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "163", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433", "Port" : "fourth_order_double_7"},
					{"ID" : "184", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453", "Port" : "fourth_order_double_7"}]},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "163", "SubInstance" : "grp_sin_or_cos_double_s_fu_1433", "Port" : "fourth_order_double_s"},
					{"ID" : "184", "SubInstance" : "grp_sin_or_cos_double_s_fu_1453", "Port" : "fourth_order_double_s"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.theta_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_re_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_im_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Xj_f_M_real_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Xj_f_M_imag_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_r_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_i_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rx_M_real_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rx_M_imag_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_real_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_imag_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_real_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_imag_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.UU_M_real_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.UU_M_imag_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_real_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_imag_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_M_real_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_M_imag_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_real_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_imag_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399", "Parent" : "0", "Child" : ["24", "25", "26", "27", "28", "29", "30", "31", "32", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127"],
		"CDFG" : "eig_decompose",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "19613", "EstimateLatencyMax" : "24545",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_alt_fu_970"}],
		"Port" : [
			{"Name" : "Rx_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rx_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "U_M_real", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "U_M_imag", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "eigval_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "CONFIG_BATCH_CNTS", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_qrf_alt_fu_970", "Port" : "CONFIG_BATCH_CNTS"}]},
			{"Name" : "CONFIG_SEQUENCE_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_qrf_alt_fu_970", "Port" : "CONFIG_SEQUENCE_0"}]},
			{"Name" : "CONFIG_SEQUENCE_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_qrf_alt_fu_970", "Port" : "CONFIG_SEQUENCE_1"}]},
			{"Name" : "CONFIG_SEQUENCE_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_qrf_alt_fu_970", "Port" : "CONFIG_SEQUENCE_2"}]}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.Q_temp_M_real_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.Q_temp_M_imag_U", "Parent" : "23"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.R_temp_M_real_U", "Parent" : "23"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.R_temp_M_imag_U", "Parent" : "23"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.Rx_temp_M_real_U", "Parent" : "23"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.Rx_temp_M_imag_U", "Parent" : "23"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.eig_mat_M_real_U", "Parent" : "23"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.eig_mat_M_imag_U", "Parent" : "23"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970", "Parent" : "23", "Child" : ["33", "34", "35", "36", "37", "38", "39", "40", "41", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114"],
		"CDFG" : "qrf_alt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "684", "EstimateLatencyMax" : "854",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "CONFIG_BATCH_CNTS", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "CONFIG_SEQUENCE_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "CONFIG_SEQUENCE_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "CONFIG_SEQUENCE_2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.CONFIG_BATCH_CNTS_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.CONFIG_SEQUENCE_0_U", "Parent" : "32"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.CONFIG_SEQUENCE_1_U", "Parent" : "32"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.CONFIG_SEQUENCE_2_U", "Parent" : "32"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.q_i_M_real_U", "Parent" : "32"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.q_i_M_imag_U", "Parent" : "32"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.r_i_M_real_U", "Parent" : "32"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.r_i_M_imag_U", "Parent" : "32"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090", "Parent" : "32", "Child" : ["42", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87"],
		"CDFG" : "qrf_givens_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "75", "EstimateLatencyMin" : "75", "EstimateLatencyMax" : "75",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "extra_pass", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "42", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220", "Parent" : "41", "Child" : ["43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63"],
		"CDFG" : "qrf_magnitude_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "48", "EstimateLatencyMin" : "48", "EstimateLatencyMax" : "48",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U52", "Parent" : "42"},
	{"ID" : "44", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U53", "Parent" : "42"},
	{"ID" : "45", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U54", "Parent" : "42"},
	{"ID" : "46", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U55", "Parent" : "42"},
	{"ID" : "47", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U56", "Parent" : "42"},
	{"ID" : "48", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U57", "Parent" : "42"},
	{"ID" : "49", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U58", "Parent" : "42"},
	{"ID" : "50", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U59", "Parent" : "42"},
	{"ID" : "51", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U60", "Parent" : "42"},
	{"ID" : "52", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U61", "Parent" : "42"},
	{"ID" : "53", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U62", "Parent" : "42"},
	{"ID" : "54", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U63", "Parent" : "42"},
	{"ID" : "55", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U64", "Parent" : "42"},
	{"ID" : "56", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U65", "Parent" : "42"},
	{"ID" : "57", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U66", "Parent" : "42"},
	{"ID" : "58", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U67", "Parent" : "42"},
	{"ID" : "59", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U68", "Parent" : "42"},
	{"ID" : "60", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U69", "Parent" : "42"},
	{"ID" : "61", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U70", "Parent" : "42"},
	{"ID" : "62", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U71", "Parent" : "42"},
	{"ID" : "63", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fsqrt_32ns_qcK_U72", "Parent" : "42"},
	{"ID" : "64", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fadd_32ns_3ocq_U80", "Parent" : "41"},
	{"ID" : "65", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fadd_32ns_3ocq_U81", "Parent" : "41"},
	{"ID" : "66", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fsub_32ns_3rcU_U82", "Parent" : "41"},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fadd_32ns_3ocq_U83", "Parent" : "41"},
	{"ID" : "68", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fsub_32ns_3rcU_U84", "Parent" : "41"},
	{"ID" : "69", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U85", "Parent" : "41"},
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U86", "Parent" : "41"},
	{"ID" : "71", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U87", "Parent" : "41"},
	{"ID" : "72", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U88", "Parent" : "41"},
	{"ID" : "73", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U89", "Parent" : "41"},
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U90", "Parent" : "41"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U91", "Parent" : "41"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U92", "Parent" : "41"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U93", "Parent" : "41"},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U94", "Parent" : "41"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U95", "Parent" : "41"},
	{"ID" : "80", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U96", "Parent" : "41"},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U97", "Parent" : "41"},
	{"ID" : "82", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U98", "Parent" : "41"},
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U99", "Parent" : "41"},
	{"ID" : "84", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U100", "Parent" : "41"},
	{"ID" : "85", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U101", "Parent" : "41"},
	{"ID" : "86", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U102", "Parent" : "41"},
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U103", "Parent" : "41"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fsub_32ns_3rcU_U110", "Parent" : "32"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fadd_32ns_3ocq_U111", "Parent" : "32"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fsub_32ns_3rcU_U112", "Parent" : "32"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fadd_32ns_3ocq_U113", "Parent" : "32"},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fadd_32ns_3ocq_U114", "Parent" : "32"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fadd_32ns_3ocq_U115", "Parent" : "32"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U116", "Parent" : "32"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U117", "Parent" : "32"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U118", "Parent" : "32"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U119", "Parent" : "32"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U120", "Parent" : "32"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U121", "Parent" : "32"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U122", "Parent" : "32"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.music_fmul_32ns_3jbC_U123", "Parent" : "32"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.to_rot_0_V_fifo_U", "Parent" : "32"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.to_rot_1_V_fifo_U", "Parent" : "32"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.to_rot_2_V_fifo_U", "Parent" : "32"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_real_s_fifo_U", "Parent" : "32"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_real_1_fifo_U", "Parent" : "32"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_real_2_fifo_U", "Parent" : "32"},
	{"ID" : "108", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_real_3_fifo_U", "Parent" : "32"},
	{"ID" : "109", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_real_4_fifo_U", "Parent" : "32"},
	{"ID" : "110", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_imag_s_fifo_U", "Parent" : "32"},
	{"ID" : "111", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_imag_1_fifo_U", "Parent" : "32"},
	{"ID" : "112", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_imag_2_fifo_U", "Parent" : "32"},
	{"ID" : "113", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_imag_3_fifo_U", "Parent" : "32"},
	{"ID" : "114", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.grp_qrf_alt_fu_970.rotations_V_M_imag_4_fifo_U", "Parent" : "32"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_faddfsub_32ibs_U148", "Parent" : "23"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_faddfsub_32ibs_U149", "Parent" : "23"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fsub_32ns_3rcU_U150", "Parent" : "23"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fmul_32ns_3jbC_U151", "Parent" : "23"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fmul_32ns_3jbC_U152", "Parent" : "23"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fmul_32ns_3jbC_U153", "Parent" : "23"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fmul_32ns_3jbC_U154", "Parent" : "23"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fmul_32ns_3jbC_U155", "Parent" : "23"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fmul_32ns_3jbC_U156", "Parent" : "23"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fdiv_32ns_3ncg_U157", "Parent" : "23"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fdiv_32ns_3ncg_U158", "Parent" : "23"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_fsqrt_32ns_qcK_U159", "Parent" : "23"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_eig_decompose_fu_1399.music_mux_42_32_1_1_U160", "Parent" : "23"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419", "Parent" : "0", "Child" : ["129", "141", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162"],
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
					{"ID" : "153", "SubInstance" : "grp_bit_reverse_fu_184", "Port" : "X_R"}]},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_bit_reverse_fu_184", "Port" : "X_I"}]},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "129", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "141", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "129", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "second_order_float_2"},
					{"ID" : "141", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "129", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "second_order_float_3"},
					{"ID" : "141", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "129", "SubInstance" : "grp_sin_or_cos_float_s_fu_152", "Port" : "second_order_float_s"},
					{"ID" : "141", "SubInstance" : "grp_sin_or_cos_float_s_fu_168", "Port" : "second_order_float_s"}]}]},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152", "Parent" : "128", "Child" : ["130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140"],
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
	{"ID" : "130", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.ref_4oPi_table_100_V_U", "Parent" : "129"},
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.second_order_float_2_U", "Parent" : "129"},
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.second_order_float_3_U", "Parent" : "129"},
	{"ID" : "133", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.second_order_float_s_U", "Parent" : "129"},
	{"ID" : "134", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "129",
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
	{"ID" : "135", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.music_mul_80ns_24fYi_U5", "Parent" : "129"},
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.music_mux_83_1_1_1_U6", "Parent" : "129"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.music_mux_164_1_1_1_U7", "Parent" : "129"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.music_mux_164_1_1_1_U8", "Parent" : "129"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.music_mul_mul_15ng8j_U9", "Parent" : "129"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_152.music_mul_mul_15nhbi_U10", "Parent" : "129"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168", "Parent" : "128", "Child" : ["142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152"],
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
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.ref_4oPi_table_100_V_U", "Parent" : "141"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.second_order_float_2_U", "Parent" : "141"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.second_order_float_3_U", "Parent" : "141"},
	{"ID" : "145", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.second_order_float_s_U", "Parent" : "141"},
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "141",
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
	{"ID" : "147", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.music_mul_80ns_24fYi_U5", "Parent" : "141"},
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.music_mux_83_1_1_1_U6", "Parent" : "141"},
	{"ID" : "149", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.music_mux_164_1_1_1_U7", "Parent" : "141"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.music_mux_164_1_1_1_U8", "Parent" : "141"},
	{"ID" : "151", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.music_mul_mul_15ng8j_U9", "Parent" : "141"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_sin_or_cos_float_s_fu_168.music_mul_mul_15nhbi_U10", "Parent" : "141"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.grp_bit_reverse_fu_184", "Parent" : "128",
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
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_faddfsub_32ibs_U23", "Parent" : "128"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_faddfsub_32ibs_U24", "Parent" : "128"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_fmul_32ns_3jbC_U25", "Parent" : "128"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_fmul_32ns_3jbC_U26", "Parent" : "128"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_fmul_32ns_3jbC_U27", "Parent" : "128"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_fmul_32ns_3jbC_U28", "Parent" : "128"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_fptrunc_64nkbM_U29", "Parent" : "128"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_ddiv_64ns_6lbW_U30", "Parent" : "128"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_fu_1419.music_sitodp_32nsmb6_U31", "Parent" : "128"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433", "Parent" : "0", "Child" : ["164", "165", "166", "167", "168", "169", "170", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183"],
		"CDFG" : "sin_or_cos_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "43", "EstimateLatencyMax" : "51",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_fu_268"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.ref_4oPi_table_256_V_U", "Parent" : "163"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.fourth_order_double_4_U", "Parent" : "163"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.fourth_order_double_5_U", "Parent" : "163"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.fourth_order_double_6_U", "Parent" : "163"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.fourth_order_double_7_U", "Parent" : "163"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.fourth_order_double_s_U", "Parent" : "163"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.grp_scaled_fixed2ieee_fu_268", "Parent" : "163", "Child" : ["171", "172"],
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
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.grp_scaled_fixed2ieee_fu_268.music_mux_42_32_1_1_U196", "Parent" : "170"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.grp_scaled_fixed2ieee_fu_268.music_mux_42_32_1_1_U197", "Parent" : "170"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_170ns_5KfY_U200", "Parent" : "163"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mux_83_1_1_1_U201", "Parent" : "163"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_49ns_49Lf8_U202", "Parent" : "163"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_49ns_49Lf8_U203", "Parent" : "163"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_49ns_49Lf8_U204", "Parent" : "163"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_56ns_52Mgi_U205", "Parent" : "163"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_49ns_44Ngs_U206", "Parent" : "163"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_42ns_33OgC_U207", "Parent" : "163"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mul_64s_63nPgM_U208", "Parent" : "163"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mux_164_1_1_1_U209", "Parent" : "163"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1433.music_mux_164_1_1_1_U210", "Parent" : "163"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453", "Parent" : "0", "Child" : ["185", "186", "187", "188", "189", "190", "191", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204"],
		"CDFG" : "sin_or_cos_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "43", "EstimateLatencyMax" : "51",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_fu_268"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.ref_4oPi_table_256_V_U", "Parent" : "184"},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.fourth_order_double_4_U", "Parent" : "184"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.fourth_order_double_5_U", "Parent" : "184"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.fourth_order_double_6_U", "Parent" : "184"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.fourth_order_double_7_U", "Parent" : "184"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.fourth_order_double_s_U", "Parent" : "184"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.grp_scaled_fixed2ieee_fu_268", "Parent" : "184", "Child" : ["192", "193"],
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
	{"ID" : "192", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.grp_scaled_fixed2ieee_fu_268.music_mux_42_32_1_1_U196", "Parent" : "191"},
	{"ID" : "193", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.grp_scaled_fixed2ieee_fu_268.music_mux_42_32_1_1_U197", "Parent" : "191"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_170ns_5KfY_U200", "Parent" : "184"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mux_83_1_1_1_U201", "Parent" : "184"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_49ns_49Lf8_U202", "Parent" : "184"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_49ns_49Lf8_U203", "Parent" : "184"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_49ns_49Lf8_U204", "Parent" : "184"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_56ns_52Mgi_U205", "Parent" : "184"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_49ns_44Ngs_U206", "Parent" : "184"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_42ns_33OgC_U207", "Parent" : "184"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mul_64s_63nPgM_U208", "Parent" : "184"},
	{"ID" : "203", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mux_164_1_1_1_U209", "Parent" : "184"},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_double_s_fu_1453.music_mux_164_1_1_1_U210", "Parent" : "184"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472", "Parent" : "0", "Child" : ["206", "207", "208", "209", "210", "211", "212", "213"],
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
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_faddfsub_32ibs_U39", "Parent" : "205"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_faddfsub_32ibs_U40", "Parent" : "205"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_fmul_32ns_3jbC_U41", "Parent" : "205"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_fmul_32ns_3jbC_U42", "Parent" : "205"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_fmul_32ns_3jbC_U43", "Parent" : "205"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_fmul_32ns_3jbC_U44", "Parent" : "205"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_fdiv_32ns_3ncg_U45", "Parent" : "205"},
	{"ID" : "213", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Autocorrelation_fu_1472.music_fdiv_32ns_3ncg_U46", "Parent" : "205"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480", "Parent" : "0", "Child" : ["215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231"],
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
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_fcmp_32ns_3pcA_U171", "Parent" : "214"},
	{"ID" : "216", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U172", "Parent" : "214"},
	{"ID" : "217", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U173", "Parent" : "214"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U174", "Parent" : "214"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U175", "Parent" : "214"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U176", "Parent" : "214"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U177", "Parent" : "214"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U178", "Parent" : "214"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U179", "Parent" : "214"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U180", "Parent" : "214"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U181", "Parent" : "214"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U182", "Parent" : "214"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U183", "Parent" : "214"},
	{"ID" : "228", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U184", "Parent" : "214"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U185", "Parent" : "214"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U186", "Parent" : "214"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sort_eigval_fu_1480.music_mux_42_32_1_1_U187", "Parent" : "214"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U225", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U226", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U227", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U228", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U229", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U230", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U231", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fptrunc_64nkbM_U232", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fptrunc_64nkbM_U233", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fpext_32ns_UhA_U234", "Parent" : "0"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_dmul_64ns_6VhK_U235", "Parent" : "0"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_ddiv_64ns_6lbW_U236", "Parent" : "0"},
	{"ID" : "244", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U237", "Parent" : "0"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U238", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	music {
		X {Type I LastRead 21 FirstWrite -1}
		P_sm {Type O LastRead -1 FirstWrite 39}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}
		CONFIG_BATCH_CNTS {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_0 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_1 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_2 {Type I LastRead -1 FirstWrite -1}
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
		eigval_3_read {Type I LastRead 0 FirstWrite -1}
		CONFIG_BATCH_CNTS {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_0 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_1 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_2 {Type I LastRead -1 FirstWrite -1}}
	qrf_alt {
		A_M_real {Type I LastRead 7 FirstWrite -1}
		A_M_imag {Type I LastRead 7 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 10}
		Q_M_imag {Type O LastRead -1 FirstWrite 10}
		R_M_real {Type O LastRead -1 FirstWrite 10}
		R_M_imag {Type O LastRead -1 FirstWrite 10}
		CONFIG_BATCH_CNTS {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_0 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_1 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_2 {Type I LastRead -1 FirstWrite -1}}
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
	sin_or_cos_double_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 11 FirstWrite -1}
		ref_4oPi_table_256_V {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_4 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_5 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_6 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_7 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	sin_or_cos_double_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 11 FirstWrite -1}
		ref_4oPi_table_256_V {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_4 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_5 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_6 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_7 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	Autocorrelation {
		X_M_real {Type I LastRead 4 FirstWrite -1}
		X_M_imag {Type I LastRead 4 FirstWrite -1}
		Rx_M_real {Type O LastRead -1 FirstWrite 27}
		Rx_M_imag {Type O LastRead -1 FirstWrite 27}}
	sort_eigval {
		eigval_0_read {Type I LastRead 0 FirstWrite -1}
		eigval_1_read {Type I LastRead 0 FirstWrite -1}
		eigval_2_read {Type I LastRead 0 FirstWrite -1}
		eigval_3_read {Type I LastRead 0 FirstWrite -1}
		sort_index_0_read {Type I LastRead 0 FirstWrite -1}
		sort_index_1_read {Type I LastRead 0 FirstWrite -1}
		sort_index_2_read {Type I LastRead 0 FirstWrite -1}
		sort_index_3_read {Type I LastRead 0 FirstWrite -1}}}

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
