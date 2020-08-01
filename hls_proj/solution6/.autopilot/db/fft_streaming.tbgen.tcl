set moduleName fft_streaming
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
set C_modelName {fft_streaming}
set C_modelType { void 0 }
set C_modelArgList {
	{ X_R float 32 regular {array 1024 { 1 3 } 1 1 }  }
	{ X_I float 32 regular {array 1024 { 1 3 } 1 1 }  }
	{ OUT_R float 32 regular {array 1024 { 0 0 } 0 1 }  }
	{ OUT_I float 32 regular {array 1024 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "X_R", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "X_I", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "OUT_R", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "OUT_I", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 47
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ X_R_address0 sc_out sc_lv 10 signal 0 } 
	{ X_R_ce0 sc_out sc_logic 1 signal 0 } 
	{ X_R_d0 sc_out sc_lv 32 signal 0 } 
	{ X_R_q0 sc_in sc_lv 32 signal 0 } 
	{ X_R_we0 sc_out sc_logic 1 signal 0 } 
	{ X_R_address1 sc_out sc_lv 10 signal 0 } 
	{ X_R_ce1 sc_out sc_logic 1 signal 0 } 
	{ X_R_d1 sc_out sc_lv 32 signal 0 } 
	{ X_R_q1 sc_in sc_lv 32 signal 0 } 
	{ X_R_we1 sc_out sc_logic 1 signal 0 } 
	{ X_I_address0 sc_out sc_lv 10 signal 1 } 
	{ X_I_ce0 sc_out sc_logic 1 signal 1 } 
	{ X_I_d0 sc_out sc_lv 32 signal 1 } 
	{ X_I_q0 sc_in sc_lv 32 signal 1 } 
	{ X_I_we0 sc_out sc_logic 1 signal 1 } 
	{ X_I_address1 sc_out sc_lv 10 signal 1 } 
	{ X_I_ce1 sc_out sc_logic 1 signal 1 } 
	{ X_I_d1 sc_out sc_lv 32 signal 1 } 
	{ X_I_q1 sc_in sc_lv 32 signal 1 } 
	{ X_I_we1 sc_out sc_logic 1 signal 1 } 
	{ OUT_R_address0 sc_out sc_lv 10 signal 2 } 
	{ OUT_R_ce0 sc_out sc_logic 1 signal 2 } 
	{ OUT_R_d0 sc_out sc_lv 32 signal 2 } 
	{ OUT_R_q0 sc_in sc_lv 32 signal 2 } 
	{ OUT_R_we0 sc_out sc_logic 1 signal 2 } 
	{ OUT_R_address1 sc_out sc_lv 10 signal 2 } 
	{ OUT_R_ce1 sc_out sc_logic 1 signal 2 } 
	{ OUT_R_d1 sc_out sc_lv 32 signal 2 } 
	{ OUT_R_q1 sc_in sc_lv 32 signal 2 } 
	{ OUT_R_we1 sc_out sc_logic 1 signal 2 } 
	{ OUT_I_address0 sc_out sc_lv 10 signal 3 } 
	{ OUT_I_ce0 sc_out sc_logic 1 signal 3 } 
	{ OUT_I_d0 sc_out sc_lv 32 signal 3 } 
	{ OUT_I_q0 sc_in sc_lv 32 signal 3 } 
	{ OUT_I_we0 sc_out sc_logic 1 signal 3 } 
	{ OUT_I_address1 sc_out sc_lv 10 signal 3 } 
	{ OUT_I_ce1 sc_out sc_logic 1 signal 3 } 
	{ OUT_I_d1 sc_out sc_lv 32 signal 3 } 
	{ OUT_I_q1 sc_in sc_lv 32 signal 3 } 
	{ OUT_I_we1 sc_out sc_logic 1 signal 3 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "X_R_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_R", "role": "address0" }} , 
 	{ "name": "X_R_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "ce0" }} , 
 	{ "name": "X_R_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "d0" }} , 
 	{ "name": "X_R_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "q0" }} , 
 	{ "name": "X_R_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "we0" }} , 
 	{ "name": "X_R_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_R", "role": "address1" }} , 
 	{ "name": "X_R_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "ce1" }} , 
 	{ "name": "X_R_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "d1" }} , 
 	{ "name": "X_R_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "q1" }} , 
 	{ "name": "X_R_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "we1" }} , 
 	{ "name": "X_I_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address0" }} , 
 	{ "name": "X_I_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce0" }} , 
 	{ "name": "X_I_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "d0" }} , 
 	{ "name": "X_I_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q0" }} , 
 	{ "name": "X_I_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "we0" }} , 
 	{ "name": "X_I_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address1" }} , 
 	{ "name": "X_I_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce1" }} , 
 	{ "name": "X_I_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "d1" }} , 
 	{ "name": "X_I_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q1" }} , 
 	{ "name": "X_I_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "we1" }} , 
 	{ "name": "OUT_R_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_R", "role": "address0" }} , 
 	{ "name": "OUT_R_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_R", "role": "ce0" }} , 
 	{ "name": "OUT_R_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_R", "role": "d0" }} , 
 	{ "name": "OUT_R_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_R", "role": "q0" }} , 
 	{ "name": "OUT_R_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_R", "role": "we0" }} , 
 	{ "name": "OUT_R_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_R", "role": "address1" }} , 
 	{ "name": "OUT_R_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_R", "role": "ce1" }} , 
 	{ "name": "OUT_R_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_R", "role": "d1" }} , 
 	{ "name": "OUT_R_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_R", "role": "q1" }} , 
 	{ "name": "OUT_R_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_R", "role": "we1" }} , 
 	{ "name": "OUT_I_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_I", "role": "address0" }} , 
 	{ "name": "OUT_I_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_I", "role": "ce0" }} , 
 	{ "name": "OUT_I_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_I", "role": "d0" }} , 
 	{ "name": "OUT_I_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_I", "role": "q0" }} , 
 	{ "name": "OUT_I_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_I", "role": "we0" }} , 
 	{ "name": "OUT_I_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "OUT_I", "role": "address1" }} , 
 	{ "name": "OUT_I_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_I", "role": "ce1" }} , 
 	{ "name": "OUT_I_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_I", "role": "d1" }} , 
 	{ "name": "OUT_I_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_I", "role": "q1" }} , 
 	{ "name": "OUT_I_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUT_I", "role": "we1" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "31", "44", "57", "70", "83", "96", "109", "122", "135"],
		"CDFG" : "fft_streaming",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18613", "EstimateLatencyMax" : "19637",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "21", "Name" : "bit_reverse235_U0"}],
		"OutputProcess" : [
			{"ID" : "135", "Name" : "fft_stage245_U0"}],
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "bit_reverse235_U0", "Port" : "X_R"}]},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "bit_reverse235_U0", "Port" : "X_I"}]},
			{"Name" : "OUT_R", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "fft_stage245_U0", "Port" : "Out_R"}]},
			{"Name" : "OUT_I", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "fft_stage245_U0", "Port" : "Out_I"}]},
			{"Name" : "W_real277", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "fft_stage_1237_U0", "Port" : "W_real277"}]},
			{"Name" : "W_imag269", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "fft_stage_1237_U0", "Port" : "W_imag269"}]},
			{"Name" : "W_real276", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "fft_stage_1238_U0", "Port" : "W_real276"}]},
			{"Name" : "W_imag268", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "fft_stage_1238_U0", "Port" : "W_imag268"}]},
			{"Name" : "W_real275", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "fft_stage_1239_U0", "Port" : "W_real275"}]},
			{"Name" : "W_imag267", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "fft_stage_1239_U0", "Port" : "W_imag267"}]},
			{"Name" : "W_real274", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "fft_stage_1240_U0", "Port" : "W_real274"}]},
			{"Name" : "W_imag266", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "fft_stage_1240_U0", "Port" : "W_imag266"}]},
			{"Name" : "W_real273", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_1241_U0", "Port" : "W_real273"}]},
			{"Name" : "W_imag265", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_1241_U0", "Port" : "W_imag265"}]},
			{"Name" : "W_real272", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "fft_stage_1242_U0", "Port" : "W_real272"}]},
			{"Name" : "W_imag264", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "fft_stage_1242_U0", "Port" : "W_imag264"}]},
			{"Name" : "W_real271", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "109", "SubInstance" : "fft_stage_1243_U0", "Port" : "W_real271"}]},
			{"Name" : "W_imag263", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "109", "SubInstance" : "fft_stage_1243_U0", "Port" : "W_imag263"}]},
			{"Name" : "W_real270", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "fft_stage_1244_U0", "Port" : "W_real270"}]},
			{"Name" : "W_imag262", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "fft_stage_1244_U0", "Port" : "W_imag262"}]},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "fft_stage245_U0", "Port" : "W_real"}]},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "fft_stage245_U0", "Port" : "W_imag"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_R_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_0_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_1_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_2_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_3_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_4_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_5_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_6_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_7_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_8_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Stage_I_9_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bit_reverse235_U0", "Parent" : "0",
		"CDFG" : "bit_reverse235",
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
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OUT_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "1"},
			{"Name" : "OUT_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "11"}]},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0", "Parent" : "0", "Child" : ["23", "24", "25", "26", "27", "28", "29", "30"],
		"CDFG" : "fft_stage_1236",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_0", "Type" : "Memory", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "1"},
			{"Name" : "X_I_0", "Type" : "Memory", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "11"},
			{"Name" : "Out_R_1", "Type" : "Memory", "Direction" : "O", "DependentProc" : "31", "DependentChan" : "2"},
			{"Name" : "Out_I_1", "Type" : "Memory", "Direction" : "O", "DependentProc" : "31", "DependentChan" : "12"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fsub_32ns_3bkb_U5", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fadd_32ns_3cud_U6", "Parent" : "22"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fsub_32ns_3bkb_U7", "Parent" : "22"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fsub_32ns_3bkb_U8", "Parent" : "22"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fadd_32ns_3cud_U9", "Parent" : "22"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fadd_32ns_3cud_U10", "Parent" : "22"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fmul_32ns_3dEe_U11", "Parent" : "22"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1236_U0.music_fmul_32ns_3dEe_U12", "Parent" : "22"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0", "Parent" : "0", "Child" : ["32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43"],
		"CDFG" : "fft_stage_1237",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "22", "DependentChan" : "2"},
			{"Name" : "X_I_1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "22", "DependentChan" : "12"},
			{"Name" : "Out_R_2", "Type" : "Memory", "Direction" : "O", "DependentProc" : "44", "DependentChan" : "3"},
			{"Name" : "Out_I_2", "Type" : "Memory", "Direction" : "O", "DependentProc" : "44", "DependentChan" : "13"},
			{"Name" : "W_real277", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag269", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.W_real277_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.W_imag269_U", "Parent" : "31"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fsub_32ns_3bkb_U20", "Parent" : "31"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fadd_32ns_3cud_U21", "Parent" : "31"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fsub_32ns_3bkb_U22", "Parent" : "31"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fsub_32ns_3bkb_U23", "Parent" : "31"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fadd_32ns_3cud_U24", "Parent" : "31"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fadd_32ns_3cud_U25", "Parent" : "31"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fmul_32ns_3dEe_U26", "Parent" : "31"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fmul_32ns_3dEe_U27", "Parent" : "31"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fmul_32ns_3dEe_U28", "Parent" : "31"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1237_U0.music_fmul_32ns_3dEe_U29", "Parent" : "31"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0", "Parent" : "0", "Child" : ["45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56"],
		"CDFG" : "fft_stage_1238",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "31", "DependentChan" : "3"},
			{"Name" : "X_I_2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "31", "DependentChan" : "13"},
			{"Name" : "Out_R_3", "Type" : "Memory", "Direction" : "O", "DependentProc" : "57", "DependentChan" : "4"},
			{"Name" : "Out_I_3", "Type" : "Memory", "Direction" : "O", "DependentProc" : "57", "DependentChan" : "14"},
			{"Name" : "W_real276", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag268", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.W_real276_U", "Parent" : "44"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.W_imag268_U", "Parent" : "44"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fsub_32ns_3bkb_U36", "Parent" : "44"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fadd_32ns_3cud_U37", "Parent" : "44"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fsub_32ns_3bkb_U38", "Parent" : "44"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fsub_32ns_3bkb_U39", "Parent" : "44"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fadd_32ns_3cud_U40", "Parent" : "44"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fadd_32ns_3cud_U41", "Parent" : "44"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fmul_32ns_3dEe_U42", "Parent" : "44"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fmul_32ns_3dEe_U43", "Parent" : "44"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fmul_32ns_3dEe_U44", "Parent" : "44"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1238_U0.music_fmul_32ns_3dEe_U45", "Parent" : "44"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0", "Parent" : "0", "Child" : ["58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69"],
		"CDFG" : "fft_stage_1239",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "44", "DependentChan" : "4"},
			{"Name" : "X_I_3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "44", "DependentChan" : "14"},
			{"Name" : "Out_R_4", "Type" : "Memory", "Direction" : "O", "DependentProc" : "70", "DependentChan" : "5"},
			{"Name" : "Out_I_4", "Type" : "Memory", "Direction" : "O", "DependentProc" : "70", "DependentChan" : "15"},
			{"Name" : "W_real275", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag267", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.W_real275_U", "Parent" : "57"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.W_imag267_U", "Parent" : "57"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fsub_32ns_3bkb_U50", "Parent" : "57"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fadd_32ns_3cud_U51", "Parent" : "57"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fsub_32ns_3bkb_U52", "Parent" : "57"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fsub_32ns_3bkb_U53", "Parent" : "57"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fadd_32ns_3cud_U54", "Parent" : "57"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fadd_32ns_3cud_U55", "Parent" : "57"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fmul_32ns_3dEe_U56", "Parent" : "57"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fmul_32ns_3dEe_U57", "Parent" : "57"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fmul_32ns_3dEe_U58", "Parent" : "57"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1239_U0.music_fmul_32ns_3dEe_U59", "Parent" : "57"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0", "Parent" : "0", "Child" : ["71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82"],
		"CDFG" : "fft_stage_1240",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "57", "DependentChan" : "5"},
			{"Name" : "X_I_4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "57", "DependentChan" : "15"},
			{"Name" : "Out_R_5", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "6"},
			{"Name" : "Out_I_5", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "16"},
			{"Name" : "W_real274", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag266", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.W_real274_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.W_imag266_U", "Parent" : "70"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fsub_32ns_3bkb_U64", "Parent" : "70"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fadd_32ns_3cud_U65", "Parent" : "70"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fsub_32ns_3bkb_U66", "Parent" : "70"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fsub_32ns_3bkb_U67", "Parent" : "70"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fadd_32ns_3cud_U68", "Parent" : "70"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fadd_32ns_3cud_U69", "Parent" : "70"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fmul_32ns_3dEe_U70", "Parent" : "70"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fmul_32ns_3dEe_U71", "Parent" : "70"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fmul_32ns_3dEe_U72", "Parent" : "70"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1240_U0.music_fmul_32ns_3dEe_U73", "Parent" : "70"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0", "Parent" : "0", "Child" : ["84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95"],
		"CDFG" : "fft_stage_1241",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "70", "DependentChan" : "6"},
			{"Name" : "X_I_5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "70", "DependentChan" : "16"},
			{"Name" : "Out_R_6", "Type" : "Memory", "Direction" : "O", "DependentProc" : "96", "DependentChan" : "7"},
			{"Name" : "Out_I_6", "Type" : "Memory", "Direction" : "O", "DependentProc" : "96", "DependentChan" : "17"},
			{"Name" : "W_real273", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag265", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.W_real273_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.W_imag265_U", "Parent" : "83"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fsub_32ns_3bkb_U78", "Parent" : "83"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fadd_32ns_3cud_U79", "Parent" : "83"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fsub_32ns_3bkb_U80", "Parent" : "83"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fsub_32ns_3bkb_U81", "Parent" : "83"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fadd_32ns_3cud_U82", "Parent" : "83"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fadd_32ns_3cud_U83", "Parent" : "83"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fmul_32ns_3dEe_U84", "Parent" : "83"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fmul_32ns_3dEe_U85", "Parent" : "83"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fmul_32ns_3dEe_U86", "Parent" : "83"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1241_U0.music_fmul_32ns_3dEe_U87", "Parent" : "83"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0", "Parent" : "0", "Child" : ["97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108"],
		"CDFG" : "fft_stage_1242",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_6", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "7"},
			{"Name" : "X_I_6", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "17"},
			{"Name" : "Out_R_7", "Type" : "Memory", "Direction" : "O", "DependentProc" : "109", "DependentChan" : "8"},
			{"Name" : "Out_I_7", "Type" : "Memory", "Direction" : "O", "DependentProc" : "109", "DependentChan" : "18"},
			{"Name" : "W_real272", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag264", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.W_real272_U", "Parent" : "96"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.W_imag264_U", "Parent" : "96"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fsub_32ns_3bkb_U92", "Parent" : "96"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fadd_32ns_3cud_U93", "Parent" : "96"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fsub_32ns_3bkb_U94", "Parent" : "96"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fsub_32ns_3bkb_U95", "Parent" : "96"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fadd_32ns_3cud_U96", "Parent" : "96"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fadd_32ns_3cud_U97", "Parent" : "96"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fmul_32ns_3dEe_U98", "Parent" : "96"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fmul_32ns_3dEe_U99", "Parent" : "96"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fmul_32ns_3dEe_U100", "Parent" : "96"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1242_U0.music_fmul_32ns_3dEe_U101", "Parent" : "96"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0", "Parent" : "0", "Child" : ["110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121"],
		"CDFG" : "fft_stage_1243",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_7", "Type" : "Memory", "Direction" : "I", "DependentProc" : "96", "DependentChan" : "8"},
			{"Name" : "X_I_7", "Type" : "Memory", "Direction" : "I", "DependentProc" : "96", "DependentChan" : "18"},
			{"Name" : "Out_R_8", "Type" : "Memory", "Direction" : "O", "DependentProc" : "122", "DependentChan" : "9"},
			{"Name" : "Out_I_8", "Type" : "Memory", "Direction" : "O", "DependentProc" : "122", "DependentChan" : "19"},
			{"Name" : "W_real271", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag263", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.W_real271_U", "Parent" : "109"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.W_imag263_U", "Parent" : "109"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fsub_32ns_3bkb_U106", "Parent" : "109"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fadd_32ns_3cud_U107", "Parent" : "109"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fsub_32ns_3bkb_U108", "Parent" : "109"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fsub_32ns_3bkb_U109", "Parent" : "109"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fadd_32ns_3cud_U110", "Parent" : "109"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fadd_32ns_3cud_U111", "Parent" : "109"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fmul_32ns_3dEe_U112", "Parent" : "109"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fmul_32ns_3dEe_U113", "Parent" : "109"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fmul_32ns_3dEe_U114", "Parent" : "109"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1243_U0.music_fmul_32ns_3dEe_U115", "Parent" : "109"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0", "Parent" : "0", "Child" : ["123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134"],
		"CDFG" : "fft_stage_1244",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R_8", "Type" : "Memory", "Direction" : "I", "DependentProc" : "109", "DependentChan" : "9"},
			{"Name" : "X_I_8", "Type" : "Memory", "Direction" : "I", "DependentProc" : "109", "DependentChan" : "19"},
			{"Name" : "Out_R_9", "Type" : "Memory", "Direction" : "O", "DependentProc" : "135", "DependentChan" : "10"},
			{"Name" : "Out_I_9", "Type" : "Memory", "Direction" : "O", "DependentProc" : "135", "DependentChan" : "20"},
			{"Name" : "W_real270", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag262", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.W_real270_U", "Parent" : "122"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.W_imag262_U", "Parent" : "122"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fsub_32ns_3bkb_U120", "Parent" : "122"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fadd_32ns_3cud_U121", "Parent" : "122"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fsub_32ns_3bkb_U122", "Parent" : "122"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fsub_32ns_3bkb_U123", "Parent" : "122"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fadd_32ns_3cud_U124", "Parent" : "122"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fadd_32ns_3cud_U125", "Parent" : "122"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fmul_32ns_3dEe_U126", "Parent" : "122"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fmul_32ns_3dEe_U127", "Parent" : "122"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fmul_32ns_3dEe_U128", "Parent" : "122"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_1244_U0.music_fmul_32ns_3dEe_U129", "Parent" : "122"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0", "Parent" : "0", "Child" : ["136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147"],
		"CDFG" : "fft_stage245",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "529", "EstimateLatencyMax" : "529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R9", "Type" : "Memory", "Direction" : "I", "DependentProc" : "122", "DependentChan" : "10"},
			{"Name" : "X_I18", "Type" : "Memory", "Direction" : "I", "DependentProc" : "122", "DependentChan" : "20"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.W_real_U", "Parent" : "135"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.W_imag_U", "Parent" : "135"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fsub_32ns_3bkb_U134", "Parent" : "135"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fadd_32ns_3cud_U135", "Parent" : "135"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fsub_32ns_3bkb_U136", "Parent" : "135"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fsub_32ns_3bkb_U137", "Parent" : "135"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fadd_32ns_3cud_U138", "Parent" : "135"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fadd_32ns_3cud_U139", "Parent" : "135"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fmul_32ns_3dEe_U140", "Parent" : "135"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fmul_32ns_3dEe_U141", "Parent" : "135"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fmul_32ns_3dEe_U142", "Parent" : "135"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage245_U0.music_fmul_32ns_3dEe_U143", "Parent" : "135"}]}


set ArgLastReadFirstWriteLatency {
	fft_streaming {
		X_R {Type I LastRead 3 FirstWrite -1}
		X_I {Type I LastRead 3 FirstWrite -1}
		OUT_R {Type O LastRead -1 FirstWrite 17}
		OUT_I {Type O LastRead -1 FirstWrite 17}
		W_real277 {Type I LastRead -1 FirstWrite -1}
		W_imag269 {Type I LastRead -1 FirstWrite -1}
		W_real276 {Type I LastRead -1 FirstWrite -1}
		W_imag268 {Type I LastRead -1 FirstWrite -1}
		W_real275 {Type I LastRead -1 FirstWrite -1}
		W_imag267 {Type I LastRead -1 FirstWrite -1}
		W_real274 {Type I LastRead -1 FirstWrite -1}
		W_imag266 {Type I LastRead -1 FirstWrite -1}
		W_real273 {Type I LastRead -1 FirstWrite -1}
		W_imag265 {Type I LastRead -1 FirstWrite -1}
		W_real272 {Type I LastRead -1 FirstWrite -1}
		W_imag264 {Type I LastRead -1 FirstWrite -1}
		W_real271 {Type I LastRead -1 FirstWrite -1}
		W_imag263 {Type I LastRead -1 FirstWrite -1}
		W_real270 {Type I LastRead -1 FirstWrite -1}
		W_imag262 {Type I LastRead -1 FirstWrite -1}
		W_real {Type I LastRead -1 FirstWrite -1}
		W_imag {Type I LastRead -1 FirstWrite -1}}
	bit_reverse235 {
		X_R {Type I LastRead 3 FirstWrite -1}
		X_I {Type I LastRead 3 FirstWrite -1}
		OUT_R {Type O LastRead -1 FirstWrite 3}
		OUT_I {Type O LastRead -1 FirstWrite 3}}
	fft_stage_1236 {
		X_R_0 {Type I LastRead 10 FirstWrite -1}
		X_I_0 {Type I LastRead 10 FirstWrite -1}
		Out_R_1 {Type O LastRead -1 FirstWrite 17}
		Out_I_1 {Type O LastRead -1 FirstWrite 17}}
	fft_stage_1237 {
		X_R_1 {Type I LastRead 10 FirstWrite -1}
		X_I_1 {Type I LastRead 10 FirstWrite -1}
		Out_R_2 {Type O LastRead -1 FirstWrite 17}
		Out_I_2 {Type O LastRead -1 FirstWrite 17}
		W_real277 {Type I LastRead -1 FirstWrite -1}
		W_imag269 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1238 {
		X_R_2 {Type I LastRead 10 FirstWrite -1}
		X_I_2 {Type I LastRead 10 FirstWrite -1}
		Out_R_3 {Type O LastRead -1 FirstWrite 17}
		Out_I_3 {Type O LastRead -1 FirstWrite 17}
		W_real276 {Type I LastRead -1 FirstWrite -1}
		W_imag268 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1239 {
		X_R_3 {Type I LastRead 10 FirstWrite -1}
		X_I_3 {Type I LastRead 10 FirstWrite -1}
		Out_R_4 {Type O LastRead -1 FirstWrite 17}
		Out_I_4 {Type O LastRead -1 FirstWrite 17}
		W_real275 {Type I LastRead -1 FirstWrite -1}
		W_imag267 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1240 {
		X_R_4 {Type I LastRead 10 FirstWrite -1}
		X_I_4 {Type I LastRead 10 FirstWrite -1}
		Out_R_5 {Type O LastRead -1 FirstWrite 17}
		Out_I_5 {Type O LastRead -1 FirstWrite 17}
		W_real274 {Type I LastRead -1 FirstWrite -1}
		W_imag266 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1241 {
		X_R_5 {Type I LastRead 10 FirstWrite -1}
		X_I_5 {Type I LastRead 10 FirstWrite -1}
		Out_R_6 {Type O LastRead -1 FirstWrite 17}
		Out_I_6 {Type O LastRead -1 FirstWrite 17}
		W_real273 {Type I LastRead -1 FirstWrite -1}
		W_imag265 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1242 {
		X_R_6 {Type I LastRead 10 FirstWrite -1}
		X_I_6 {Type I LastRead 10 FirstWrite -1}
		Out_R_7 {Type O LastRead -1 FirstWrite 17}
		Out_I_7 {Type O LastRead -1 FirstWrite 17}
		W_real272 {Type I LastRead -1 FirstWrite -1}
		W_imag264 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1243 {
		X_R_7 {Type I LastRead 10 FirstWrite -1}
		X_I_7 {Type I LastRead 10 FirstWrite -1}
		Out_R_8 {Type O LastRead -1 FirstWrite 17}
		Out_I_8 {Type O LastRead -1 FirstWrite 17}
		W_real271 {Type I LastRead -1 FirstWrite -1}
		W_imag263 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_1244 {
		X_R_8 {Type I LastRead 10 FirstWrite -1}
		X_I_8 {Type I LastRead 10 FirstWrite -1}
		Out_R_9 {Type O LastRead -1 FirstWrite 17}
		Out_I_9 {Type O LastRead -1 FirstWrite 17}
		W_real270 {Type I LastRead -1 FirstWrite -1}
		W_imag262 {Type I LastRead -1 FirstWrite -1}}
	fft_stage245 {
		X_R9 {Type I LastRead 10 FirstWrite -1}
		X_I18 {Type I LastRead 10 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 17}
		W_real {Type I LastRead -1 FirstWrite -1}
		W_imag {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "18613", "Max" : "19637"}
	, {"Name" : "Interval", "Min" : "13314", "Max" : "14338"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	X_R { ap_memory {  { X_R_address0 mem_address 1 10 }  { X_R_ce0 mem_ce 1 1 }  { X_R_d0 mem_din 1 32 }  { X_R_q0 mem_dout 0 32 }  { X_R_we0 mem_we 1 1 }  { X_R_address1 mem_address 1 10 }  { X_R_ce1 mem_ce 1 1 }  { X_R_d1 mem_din 1 32 }  { X_R_q1 mem_dout 0 32 }  { X_R_we1 mem_we 1 1 } } }
	X_I { ap_memory {  { X_I_address0 mem_address 1 10 }  { X_I_ce0 mem_ce 1 1 }  { X_I_d0 mem_din 1 32 }  { X_I_q0 mem_dout 0 32 }  { X_I_we0 mem_we 1 1 }  { X_I_address1 mem_address 1 10 }  { X_I_ce1 mem_ce 1 1 }  { X_I_d1 mem_din 1 32 }  { X_I_q1 mem_dout 0 32 }  { X_I_we1 mem_we 1 1 } } }
	OUT_R { ap_memory {  { OUT_R_address0 mem_address 1 10 }  { OUT_R_ce0 mem_ce 1 1 }  { OUT_R_d0 mem_din 1 32 }  { OUT_R_q0 mem_dout 0 32 }  { OUT_R_we0 mem_we 1 1 }  { OUT_R_address1 MemPortADDR2 1 10 }  { OUT_R_ce1 MemPortCE2 1 1 }  { OUT_R_d1 MemPortDIN2 1 32 }  { OUT_R_q1 mem_dout 0 32 }  { OUT_R_we1 MemPortWE2 1 1 } } }
	OUT_I { ap_memory {  { OUT_I_address0 mem_address 1 10 }  { OUT_I_ce0 mem_ce 1 1 }  { OUT_I_d0 mem_din 1 32 }  { OUT_I_q0 mem_dout 0 32 }  { OUT_I_we0 mem_we 1 1 }  { OUT_I_address1 MemPortADDR2 1 10 }  { OUT_I_ce1 MemPortCE2 1 1 }  { OUT_I_d1 MemPortDIN2 1 32 }  { OUT_I_q1 mem_dout 0 32 }  { OUT_I_we1 MemPortWE2 1 1 } } }
}
