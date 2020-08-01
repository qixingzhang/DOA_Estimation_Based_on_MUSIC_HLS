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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "27", "35", "43", "51", "59", "67", "75", "83", "91"],
		"CDFG" : "fft_streaming",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "23733", "EstimateLatencyMax" : "24757",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "21", "Name" : "fft_streaming_Loop_1_U0"}],
		"OutputProcess" : [
			{"ID" : "91", "Name" : "fft_stage_U0"}],
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "fft_streaming_Loop_1_U0", "Port" : "X_R"}]},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "fft_streaming_Loop_1_U0", "Port" : "X_I"}]},
			{"Name" : "OUT_R", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "fft_stage_U0", "Port" : "Out_R"}]},
			{"Name" : "OUT_I", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "fft_stage_U0", "Port" : "Out_I"}]},
			{"Name" : "W_real42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "fft_stage_119_U0", "Port" : "W_real42"}]},
			{"Name" : "W_imag33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "fft_stage_119_U0", "Port" : "W_imag33"}]},
			{"Name" : "W_real41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "fft_stage_120_U0", "Port" : "W_real41"}]},
			{"Name" : "W_imag32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "fft_stage_120_U0", "Port" : "W_imag32"}]},
			{"Name" : "W_real40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "fft_stage_121_U0", "Port" : "W_real40"}]},
			{"Name" : "W_imag31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "fft_stage_121_U0", "Port" : "W_imag31"}]},
			{"Name" : "W_real39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "fft_stage_122_U0", "Port" : "W_real39"}]},
			{"Name" : "W_imag30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "fft_stage_122_U0", "Port" : "W_imag30"}]},
			{"Name" : "W_real38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "fft_stage_123_U0", "Port" : "W_real38"}]},
			{"Name" : "W_imag29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "fft_stage_123_U0", "Port" : "W_imag29"}]},
			{"Name" : "W_real37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "fft_stage_124_U0", "Port" : "W_real37"}]},
			{"Name" : "W_imag28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "fft_stage_124_U0", "Port" : "W_imag28"}]},
			{"Name" : "W_real36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "fft_stage_125_U0", "Port" : "W_real36"}]},
			{"Name" : "W_imag27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "fft_stage_125_U0", "Port" : "W_imag27"}]},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_126_U0", "Port" : "W_real"}]},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_126_U0", "Port" : "W_imag"}]},
			{"Name" : "W_real44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "fft_stage_U0", "Port" : "W_real44"}]},
			{"Name" : "W_imag35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "fft_stage_U0", "Port" : "W_imag35"}]}]},
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
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_streaming_Loop_1_U0", "Parent" : "0",
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
			{"Name" : "Stage_R_0", "Type" : "Memory", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "1"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Stage_I_0", "Type" : "Memory", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "11"}]},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_118_U0", "Parent" : "0", "Child" : ["23", "24", "25", "26"],
		"CDFG" : "fft_stage_118",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "1"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "11"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "27", "DependentChan" : "2"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "27", "DependentChan" : "12"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_118_U0.music_faddfsub_32bkb_U5", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_118_U0.music_fsub_32ns_3cud_U6", "Parent" : "22"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_118_U0.music_fadd_32ns_3dEe_U7", "Parent" : "22"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_118_U0.music_fmul_32ns_3eOg_U8", "Parent" : "22"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0", "Parent" : "0", "Child" : ["28", "29", "30", "31", "32", "33", "34"],
		"CDFG" : "fft_stage_119",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "22", "DependentChan" : "2"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "22", "DependentChan" : "12"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "3"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "13"},
			{"Name" : "W_real42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag33", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.W_real42_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.W_imag33_U", "Parent" : "27"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.music_faddfsub_32bkb_U17", "Parent" : "27"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.music_fsub_32ns_3cud_U18", "Parent" : "27"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.music_fadd_32ns_3dEe_U19", "Parent" : "27"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.music_fmul_32ns_3eOg_U20", "Parent" : "27"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_119_U0.music_fmul_32ns_3eOg_U21", "Parent" : "27"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0", "Parent" : "0", "Child" : ["36", "37", "38", "39", "40", "41", "42"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "27", "DependentChan" : "3"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "27", "DependentChan" : "13"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "43", "DependentChan" : "4"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "43", "DependentChan" : "14"},
			{"Name" : "W_real41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag32", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.W_real41_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.W_imag32_U", "Parent" : "35"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.music_faddfsub_32bkb_U28", "Parent" : "35"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.music_fsub_32ns_3cud_U29", "Parent" : "35"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.music_fadd_32ns_3dEe_U30", "Parent" : "35"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.music_fmul_32ns_3eOg_U31", "Parent" : "35"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_120_U0.music_fmul_32ns_3eOg_U32", "Parent" : "35"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0", "Parent" : "0", "Child" : ["44", "45", "46", "47", "48", "49", "50"],
		"CDFG" : "fft_stage_121",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "4"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "14"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "5"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "15"},
			{"Name" : "W_real40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.W_real40_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.W_imag31_U", "Parent" : "43"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.music_faddfsub_32bkb_U37", "Parent" : "43"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.music_fsub_32ns_3cud_U38", "Parent" : "43"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.music_fadd_32ns_3dEe_U39", "Parent" : "43"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.music_fmul_32ns_3eOg_U40", "Parent" : "43"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_121_U0.music_fmul_32ns_3eOg_U41", "Parent" : "43"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0", "Parent" : "0", "Child" : ["52", "53", "54", "55", "56", "57", "58"],
		"CDFG" : "fft_stage_122",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "43", "DependentChan" : "5"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "43", "DependentChan" : "15"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "59", "DependentChan" : "6"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "59", "DependentChan" : "16"},
			{"Name" : "W_real39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag30", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.W_real39_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.W_imag30_U", "Parent" : "51"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.music_faddfsub_32bkb_U46", "Parent" : "51"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.music_fsub_32ns_3cud_U47", "Parent" : "51"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.music_fadd_32ns_3dEe_U48", "Parent" : "51"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.music_fmul_32ns_3eOg_U49", "Parent" : "51"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_122_U0.music_fmul_32ns_3eOg_U50", "Parent" : "51"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0", "Parent" : "0", "Child" : ["60", "61", "62", "63", "64", "65", "66"],
		"CDFG" : "fft_stage_123",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "6"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "16"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "67", "DependentChan" : "7"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "67", "DependentChan" : "17"},
			{"Name" : "W_real38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag29", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.W_real38_U", "Parent" : "59"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.W_imag29_U", "Parent" : "59"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.music_faddfsub_32bkb_U55", "Parent" : "59"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.music_fsub_32ns_3cud_U56", "Parent" : "59"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.music_fadd_32ns_3dEe_U57", "Parent" : "59"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.music_fmul_32ns_3eOg_U58", "Parent" : "59"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_123_U0.music_fmul_32ns_3eOg_U59", "Parent" : "59"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0", "Parent" : "0", "Child" : ["68", "69", "70", "71", "72", "73", "74"],
		"CDFG" : "fft_stage_124",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "59", "DependentChan" : "7"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "59", "DependentChan" : "17"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "75", "DependentChan" : "8"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "75", "DependentChan" : "18"},
			{"Name" : "W_real37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag28", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.W_real37_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.W_imag28_U", "Parent" : "67"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.music_faddfsub_32bkb_U64", "Parent" : "67"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.music_fsub_32ns_3cud_U65", "Parent" : "67"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.music_fadd_32ns_3dEe_U66", "Parent" : "67"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.music_fmul_32ns_3eOg_U67", "Parent" : "67"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_124_U0.music_fmul_32ns_3eOg_U68", "Parent" : "67"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0", "Parent" : "0", "Child" : ["76", "77", "78", "79", "80", "81", "82"],
		"CDFG" : "fft_stage_125",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "67", "DependentChan" : "8"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "67", "DependentChan" : "18"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "9"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "19"},
			{"Name" : "W_real36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag27", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.W_real36_U", "Parent" : "75"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.W_imag27_U", "Parent" : "75"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.music_faddfsub_32bkb_U73", "Parent" : "75"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.music_fsub_32ns_3cud_U74", "Parent" : "75"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.music_fadd_32ns_3dEe_U75", "Parent" : "75"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.music_fmul_32ns_3eOg_U76", "Parent" : "75"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_125_U0.music_fmul_32ns_3eOg_U77", "Parent" : "75"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0", "Parent" : "0", "Child" : ["84", "85", "86", "87", "88", "89", "90"],
		"CDFG" : "fft_stage_126",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "75", "DependentChan" : "9"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "75", "DependentChan" : "19"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "10"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "20"},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.W_real_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.W_imag_U", "Parent" : "83"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.music_faddfsub_32bkb_U82", "Parent" : "83"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.music_fsub_32ns_3cud_U83", "Parent" : "83"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.music_fadd_32ns_3dEe_U84", "Parent" : "83"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.music_fmul_32ns_3eOg_U85", "Parent" : "83"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_126_U0.music_fmul_32ns_3eOg_U86", "Parent" : "83"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0", "Parent" : "0", "Child" : ["92", "93", "94", "95", "96", "97", "98"],
		"CDFG" : "fft_stage",
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "10"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "20"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "W_real44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag35", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.W_real44_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.W_imag35_U", "Parent" : "91"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.music_faddfsub_32bkb_U91", "Parent" : "91"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.music_fsub_32ns_3cud_U92", "Parent" : "91"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.music_fadd_32ns_3dEe_U93", "Parent" : "91"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.music_fmul_32ns_3eOg_U94", "Parent" : "91"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.fft_stage_U0.music_fmul_32ns_3eOg_U95", "Parent" : "91"}]}


set ArgLastReadFirstWriteLatency {
	fft_streaming {
		X_R {Type I LastRead 3 FirstWrite -1}
		X_I {Type I LastRead 3 FirstWrite -1}
		OUT_R {Type O LastRead -1 FirstWrite 17}
		OUT_I {Type O LastRead -1 FirstWrite 18}
		W_real42 {Type I LastRead -1 FirstWrite -1}
		W_imag33 {Type I LastRead -1 FirstWrite -1}
		W_real41 {Type I LastRead -1 FirstWrite -1}
		W_imag32 {Type I LastRead -1 FirstWrite -1}
		W_real40 {Type I LastRead -1 FirstWrite -1}
		W_imag31 {Type I LastRead -1 FirstWrite -1}
		W_real39 {Type I LastRead -1 FirstWrite -1}
		W_imag30 {Type I LastRead -1 FirstWrite -1}
		W_real38 {Type I LastRead -1 FirstWrite -1}
		W_imag29 {Type I LastRead -1 FirstWrite -1}
		W_real37 {Type I LastRead -1 FirstWrite -1}
		W_imag28 {Type I LastRead -1 FirstWrite -1}
		W_real36 {Type I LastRead -1 FirstWrite -1}
		W_imag27 {Type I LastRead -1 FirstWrite -1}
		W_real {Type I LastRead -1 FirstWrite -1}
		W_imag {Type I LastRead -1 FirstWrite -1}
		W_real44 {Type I LastRead -1 FirstWrite -1}
		W_imag35 {Type I LastRead -1 FirstWrite -1}}
	fft_streaming_Loop_1 {
		X_R {Type I LastRead 3 FirstWrite -1}
		Stage_R_0 {Type O LastRead -1 FirstWrite 3}
		X_I {Type I LastRead 3 FirstWrite -1}
		Stage_I_0 {Type O LastRead -1 FirstWrite 3}}
	fft_stage_118 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}}
	fft_stage_119 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real42 {Type I LastRead -1 FirstWrite -1}
		W_imag33 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_120 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real41 {Type I LastRead -1 FirstWrite -1}
		W_imag32 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_121 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real40 {Type I LastRead -1 FirstWrite -1}
		W_imag31 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_122 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real39 {Type I LastRead -1 FirstWrite -1}
		W_imag30 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_123 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real38 {Type I LastRead -1 FirstWrite -1}
		W_imag29 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_124 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real37 {Type I LastRead -1 FirstWrite -1}
		W_imag28 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_125 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real36 {Type I LastRead -1 FirstWrite -1}
		W_imag27 {Type I LastRead -1 FirstWrite -1}}
	fft_stage_126 {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real {Type I LastRead -1 FirstWrite -1}
		W_imag {Type I LastRead -1 FirstWrite -1}}
	fft_stage {
		X_R {Type I LastRead 9 FirstWrite -1}
		X_I {Type I LastRead 11 FirstWrite -1}
		Out_R {Type O LastRead -1 FirstWrite 17}
		Out_I {Type O LastRead -1 FirstWrite 18}
		W_real44 {Type I LastRead -1 FirstWrite -1}
		W_imag35 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "23733", "Max" : "24757"}
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
