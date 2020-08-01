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
set C_modelType { int 32 }
set C_modelArgList {
	{ data float 32 regular {axi_master 2}  }
	{ data_re int 32 regular {axi_slave 0}  }
	{ data_im int 32 regular {axi_slave 0}  }
	{ P_sm_data float 32 regular {axi_s 1 volatile  { P_sm Data } }  }
	{ P_sm_user_V int 1 regular {axi_s 1 volatile  { P_sm User } }  }
	{ P_sm_last_V int 1 regular {axi_s 1 volatile  { P_sm Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "data_re","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "data_re","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 10239,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]},{"cName": "data_im","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "data_im","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 10239,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "data_re", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "data_im", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "P_sm_data", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "P_sm.data","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "P_sm_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "P_sm.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "P_sm_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "P_sm.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}], "offset" : {"out":16}} ]}
# RTL Port declarations: 
set portNum 70
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_data_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_data_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_data_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_data_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_data_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_data_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_data_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_data_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_data_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_data_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_data_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_data_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_data_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_data_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_data_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_data_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_data_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_data_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_data_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_data_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_data_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_data_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_data_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_data_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_data_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_data_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_data_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_data_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_data_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_data_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_data_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_data_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_data_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_data_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_data_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_data_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_data_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_data_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_data_BUSER sc_in sc_lv 1 signal 0 } 
	{ P_sm_TDATA sc_out sc_lv 32 signal 3 } 
	{ P_sm_TVALID sc_out sc_logic 1 outvld 5 } 
	{ P_sm_TREADY sc_in sc_logic 1 outacc 3 } 
	{ P_sm_TUSER sc_out sc_lv 1 signal 4 } 
	{ P_sm_TLAST sc_out sc_lv 1 signal 5 } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"music","role":"start","value":"0","valid_bit":"0"},{"name":"music","role":"continue","value":"0","valid_bit":"4"},{"name":"music","role":"auto_start","value":"0","valid_bit":"7"},{"name":"data_re","role":"data","value":"24"},{"name":"data_im","role":"data","value":"32"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"music","role":"start","value":"0","valid_bit":"0"},{"name":"music","role":"done","value":"0","valid_bit":"1"},{"name":"music","role":"idle","value":"0","valid_bit":"2"},{"name":"music","role":"ready","value":"0","valid_bit":"3"},{"name":"music","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_data_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "AWVALID" }} , 
 	{ "name": "m_axi_data_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "AWREADY" }} , 
 	{ "name": "m_axi_data_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "data", "role": "AWADDR" }} , 
 	{ "name": "m_axi_data_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "AWID" }} , 
 	{ "name": "m_axi_data_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data", "role": "AWLEN" }} , 
 	{ "name": "m_axi_data_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_data_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "data", "role": "AWBURST" }} , 
 	{ "name": "m_axi_data_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "data", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_data_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_data_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data", "role": "AWPROT" }} , 
 	{ "name": "m_axi_data_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "AWQOS" }} , 
 	{ "name": "m_axi_data_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "AWREGION" }} , 
 	{ "name": "m_axi_data_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "AWUSER" }} , 
 	{ "name": "m_axi_data_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "WVALID" }} , 
 	{ "name": "m_axi_data_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "WREADY" }} , 
 	{ "name": "m_axi_data_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "data", "role": "WDATA" }} , 
 	{ "name": "m_axi_data_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "WSTRB" }} , 
 	{ "name": "m_axi_data_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "WLAST" }} , 
 	{ "name": "m_axi_data_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "WID" }} , 
 	{ "name": "m_axi_data_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "WUSER" }} , 
 	{ "name": "m_axi_data_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ARVALID" }} , 
 	{ "name": "m_axi_data_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ARREADY" }} , 
 	{ "name": "m_axi_data_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "data", "role": "ARADDR" }} , 
 	{ "name": "m_axi_data_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ARID" }} , 
 	{ "name": "m_axi_data_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data", "role": "ARLEN" }} , 
 	{ "name": "m_axi_data_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_data_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "data", "role": "ARBURST" }} , 
 	{ "name": "m_axi_data_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "data", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_data_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_data_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data", "role": "ARPROT" }} , 
 	{ "name": "m_axi_data_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "ARQOS" }} , 
 	{ "name": "m_axi_data_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data", "role": "ARREGION" }} , 
 	{ "name": "m_axi_data_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ARUSER" }} , 
 	{ "name": "m_axi_data_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "RVALID" }} , 
 	{ "name": "m_axi_data_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "RREADY" }} , 
 	{ "name": "m_axi_data_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "data", "role": "RDATA" }} , 
 	{ "name": "m_axi_data_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "RLAST" }} , 
 	{ "name": "m_axi_data_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "RID" }} , 
 	{ "name": "m_axi_data_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "RUSER" }} , 
 	{ "name": "m_axi_data_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "data", "role": "RRESP" }} , 
 	{ "name": "m_axi_data_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "BVALID" }} , 
 	{ "name": "m_axi_data_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "BREADY" }} , 
 	{ "name": "m_axi_data_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "data", "role": "BRESP" }} , 
 	{ "name": "m_axi_data_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "BID" }} , 
 	{ "name": "m_axi_data_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "BUSER" }} , 
 	{ "name": "P_sm_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "P_sm_data", "role": "" }} , 
 	{ "name": "P_sm_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "P_sm_last_V", "role": "default" }} , 
 	{ "name": "P_sm_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "P_sm_data", "role": "Y" }} , 
 	{ "name": "P_sm_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "P_sm_user_V", "role": "default" }} , 
 	{ "name": "P_sm_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "P_sm_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "music",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1728825", "EstimateLatencyMax" : "1769785",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fft_streaming_fu_368"}],
		"Port" : [
			{"Name" : "data", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "data_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "data_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "data_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "data_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "data_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "data_re", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_im", "Type" : "None", "Direction" : "I"},
			{"Name" : "P_sm_data", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "P_sm_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "P_sm_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "P_sm_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "W_real42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real42"}]},
			{"Name" : "W_imag33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag33"}]},
			{"Name" : "W_real41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real41"}]},
			{"Name" : "W_imag32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag32"}]},
			{"Name" : "W_real40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real40"}]},
			{"Name" : "W_imag31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag31"}]},
			{"Name" : "W_real39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real39"}]},
			{"Name" : "W_imag30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag30"}]},
			{"Name" : "W_real38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real38"}]},
			{"Name" : "W_imag29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag29"}]},
			{"Name" : "W_real37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real37"}]},
			{"Name" : "W_imag28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag28"}]},
			{"Name" : "W_real36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real36"}]},
			{"Name" : "W_imag27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag27"}]},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real"}]},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag"}]},
			{"Name" : "W_real44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_real44"}]},
			{"Name" : "W_imag35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_fft_streaming_fu_368", "Port" : "W_imag35"}]},
			{"Name" : "temp_array", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_array_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_data_m_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_re_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_im_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_out_re_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_out_im_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368", "Parent" : "0", "Child" : ["9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "35", "43", "51", "59", "67", "75", "83", "91", "99"],
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
			{"ID" : "29", "Name" : "fft_streaming_Loop_1_U0"}],
		"OutputProcess" : [
			{"ID" : "99", "Name" : "fft_stage_U0"}],
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "fft_streaming_Loop_1_U0", "Port" : "X_R"}]},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "fft_streaming_Loop_1_U0", "Port" : "X_I"}]},
			{"Name" : "OUT_R", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "fft_stage_U0", "Port" : "Out_R"}]},
			{"Name" : "OUT_I", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "fft_stage_U0", "Port" : "Out_I"}]},
			{"Name" : "W_real42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "fft_stage_119_U0", "Port" : "W_real42"}]},
			{"Name" : "W_imag33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "fft_stage_119_U0", "Port" : "W_imag33"}]},
			{"Name" : "W_real41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "fft_stage_120_U0", "Port" : "W_real41"}]},
			{"Name" : "W_imag32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "fft_stage_120_U0", "Port" : "W_imag32"}]},
			{"Name" : "W_real40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "fft_stage_121_U0", "Port" : "W_real40"}]},
			{"Name" : "W_imag31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "fft_stage_121_U0", "Port" : "W_imag31"}]},
			{"Name" : "W_real39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "fft_stage_122_U0", "Port" : "W_real39"}]},
			{"Name" : "W_imag30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "fft_stage_122_U0", "Port" : "W_imag30"}]},
			{"Name" : "W_real38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "fft_stage_123_U0", "Port" : "W_real38"}]},
			{"Name" : "W_imag29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "fft_stage_123_U0", "Port" : "W_imag29"}]},
			{"Name" : "W_real37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "fft_stage_124_U0", "Port" : "W_real37"}]},
			{"Name" : "W_imag28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "fft_stage_124_U0", "Port" : "W_imag28"}]},
			{"Name" : "W_real36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_125_U0", "Port" : "W_real36"}]},
			{"Name" : "W_imag27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_125_U0", "Port" : "W_imag27"}]},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "fft_stage_126_U0", "Port" : "W_real"}]},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "fft_stage_126_U0", "Port" : "W_imag"}]},
			{"Name" : "W_real44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "fft_stage_U0", "Port" : "W_real44"}]},
			{"Name" : "W_imag35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "fft_stage_U0", "Port" : "W_imag35"}]}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_0_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_1_U", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_2_U", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_3_U", "Parent" : "8"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_4_U", "Parent" : "8"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_5_U", "Parent" : "8"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_6_U", "Parent" : "8"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_7_U", "Parent" : "8"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_8_U", "Parent" : "8"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_R_9_U", "Parent" : "8"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_0_U", "Parent" : "8"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_1_U", "Parent" : "8"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_2_U", "Parent" : "8"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_3_U", "Parent" : "8"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_4_U", "Parent" : "8"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_5_U", "Parent" : "8"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_6_U", "Parent" : "8"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_7_U", "Parent" : "8"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_8_U", "Parent" : "8"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.Stage_I_9_U", "Parent" : "8"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_streaming_Loop_1_U0", "Parent" : "8",
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
			{"Name" : "Stage_R_0", "Type" : "Memory", "Direction" : "O", "DependentProc" : "30", "DependentChan" : "9"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Stage_I_0", "Type" : "Memory", "Direction" : "O", "DependentProc" : "30", "DependentChan" : "19"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_118_U0", "Parent" : "8", "Child" : ["31", "32", "33", "34"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "29", "DependentChan" : "9"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "29", "DependentChan" : "19"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "10"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "20"}]},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_118_U0.music_faddfsub_32bkb_U5", "Parent" : "30"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_118_U0.music_fsub_32ns_3cud_U6", "Parent" : "30"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_118_U0.music_fadd_32ns_3dEe_U7", "Parent" : "30"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_118_U0.music_fmul_32ns_3eOg_U8", "Parent" : "30"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0", "Parent" : "8", "Child" : ["36", "37", "38", "39", "40", "41", "42"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "30", "DependentChan" : "10"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "30", "DependentChan" : "20"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "43", "DependentChan" : "11"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "43", "DependentChan" : "21"},
			{"Name" : "W_real42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag33", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.W_real42_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.W_imag33_U", "Parent" : "35"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.music_faddfsub_32bkb_U17", "Parent" : "35"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.music_fsub_32ns_3cud_U18", "Parent" : "35"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.music_fadd_32ns_3dEe_U19", "Parent" : "35"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.music_fmul_32ns_3eOg_U20", "Parent" : "35"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_119_U0.music_fmul_32ns_3eOg_U21", "Parent" : "35"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0", "Parent" : "8", "Child" : ["44", "45", "46", "47", "48", "49", "50"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "11"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "21"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "12"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "22"},
			{"Name" : "W_real41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag32", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.W_real41_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.W_imag32_U", "Parent" : "43"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.music_faddfsub_32bkb_U28", "Parent" : "43"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.music_fsub_32ns_3cud_U29", "Parent" : "43"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.music_fadd_32ns_3dEe_U30", "Parent" : "43"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.music_fmul_32ns_3eOg_U31", "Parent" : "43"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_120_U0.music_fmul_32ns_3eOg_U32", "Parent" : "43"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0", "Parent" : "8", "Child" : ["52", "53", "54", "55", "56", "57", "58"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "43", "DependentChan" : "12"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "43", "DependentChan" : "22"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "59", "DependentChan" : "13"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "59", "DependentChan" : "23"},
			{"Name" : "W_real40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag31", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.W_real40_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.W_imag31_U", "Parent" : "51"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.music_faddfsub_32bkb_U37", "Parent" : "51"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.music_fsub_32ns_3cud_U38", "Parent" : "51"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.music_fadd_32ns_3dEe_U39", "Parent" : "51"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.music_fmul_32ns_3eOg_U40", "Parent" : "51"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_121_U0.music_fmul_32ns_3eOg_U41", "Parent" : "51"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0", "Parent" : "8", "Child" : ["60", "61", "62", "63", "64", "65", "66"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "13"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "23"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "67", "DependentChan" : "14"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "67", "DependentChan" : "24"},
			{"Name" : "W_real39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag30", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.W_real39_U", "Parent" : "59"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.W_imag30_U", "Parent" : "59"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.music_faddfsub_32bkb_U46", "Parent" : "59"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.music_fsub_32ns_3cud_U47", "Parent" : "59"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.music_fadd_32ns_3dEe_U48", "Parent" : "59"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.music_fmul_32ns_3eOg_U49", "Parent" : "59"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_122_U0.music_fmul_32ns_3eOg_U50", "Parent" : "59"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0", "Parent" : "8", "Child" : ["68", "69", "70", "71", "72", "73", "74"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "59", "DependentChan" : "14"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "59", "DependentChan" : "24"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "75", "DependentChan" : "15"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "75", "DependentChan" : "25"},
			{"Name" : "W_real38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag29", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.W_real38_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.W_imag29_U", "Parent" : "67"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.music_faddfsub_32bkb_U55", "Parent" : "67"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.music_fsub_32ns_3cud_U56", "Parent" : "67"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.music_fadd_32ns_3dEe_U57", "Parent" : "67"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.music_fmul_32ns_3eOg_U58", "Parent" : "67"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_123_U0.music_fmul_32ns_3eOg_U59", "Parent" : "67"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0", "Parent" : "8", "Child" : ["76", "77", "78", "79", "80", "81", "82"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "67", "DependentChan" : "15"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "67", "DependentChan" : "25"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "16"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "26"},
			{"Name" : "W_real37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag28", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.W_real37_U", "Parent" : "75"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.W_imag28_U", "Parent" : "75"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.music_faddfsub_32bkb_U64", "Parent" : "75"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.music_fsub_32ns_3cud_U65", "Parent" : "75"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.music_fadd_32ns_3dEe_U66", "Parent" : "75"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.music_fmul_32ns_3eOg_U67", "Parent" : "75"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_124_U0.music_fmul_32ns_3eOg_U68", "Parent" : "75"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0", "Parent" : "8", "Child" : ["84", "85", "86", "87", "88", "89", "90"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "75", "DependentChan" : "16"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "75", "DependentChan" : "26"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "17"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "27"},
			{"Name" : "W_real36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag27", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.W_real36_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.W_imag27_U", "Parent" : "83"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.music_faddfsub_32bkb_U73", "Parent" : "83"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.music_fsub_32ns_3cud_U74", "Parent" : "83"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.music_fadd_32ns_3dEe_U75", "Parent" : "83"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.music_fmul_32ns_3eOg_U76", "Parent" : "83"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_125_U0.music_fmul_32ns_3eOg_U77", "Parent" : "83"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0", "Parent" : "8", "Child" : ["92", "93", "94", "95", "96", "97", "98"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "17"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "27"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "18"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "28"},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.W_real_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.W_imag_U", "Parent" : "91"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.music_faddfsub_32bkb_U82", "Parent" : "91"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.music_fsub_32ns_3cud_U83", "Parent" : "91"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.music_fadd_32ns_3dEe_U84", "Parent" : "91"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.music_fmul_32ns_3eOg_U85", "Parent" : "91"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_126_U0.music_fmul_32ns_3eOg_U86", "Parent" : "91"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0", "Parent" : "8", "Child" : ["100", "101", "102", "103", "104", "105", "106"],
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
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I", "DependentProc" : "91", "DependentChan" : "18"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I", "DependentProc" : "91", "DependentChan" : "28"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "W_real44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag35", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.W_real44_U", "Parent" : "99"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.W_imag35_U", "Parent" : "99"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.music_faddfsub_32bkb_U91", "Parent" : "99"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.music_fsub_32ns_3cud_U92", "Parent" : "99"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.music_fadd_32ns_3dEe_U93", "Parent" : "99"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.music_fmul_32ns_3eOg_U94", "Parent" : "99"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_368.fft_stage_U0.music_fmul_32ns_3eOg_U95", "Parent" : "99"}]}


set ArgLastReadFirstWriteLatency {
	music {
		data {Type IO LastRead 13 FirstWrite 7}
		data_re {Type I LastRead 0 FirstWrite -1}
		data_im {Type I LastRead 0 FirstWrite -1}
		P_sm_data {Type O LastRead -1 FirstWrite 3}
		P_sm_user_V {Type O LastRead -1 FirstWrite 3}
		P_sm_last_V {Type O LastRead -1 FirstWrite 3}
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
		W_imag35 {Type I LastRead -1 FirstWrite -1}
		temp_array {Type I LastRead -1 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "1728825", "Max" : "1769785"}
	, {"Name" : "Interval", "Min" : "1728826", "Max" : "1769786"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data { m_axi {  { m_axi_data_AWVALID VALID 1 1 }  { m_axi_data_AWREADY READY 0 1 }  { m_axi_data_AWADDR ADDR 1 32 }  { m_axi_data_AWID ID 1 1 }  { m_axi_data_AWLEN LEN 1 8 }  { m_axi_data_AWSIZE SIZE 1 3 }  { m_axi_data_AWBURST BURST 1 2 }  { m_axi_data_AWLOCK LOCK 1 2 }  { m_axi_data_AWCACHE CACHE 1 4 }  { m_axi_data_AWPROT PROT 1 3 }  { m_axi_data_AWQOS QOS 1 4 }  { m_axi_data_AWREGION REGION 1 4 }  { m_axi_data_AWUSER USER 1 1 }  { m_axi_data_WVALID VALID 1 1 }  { m_axi_data_WREADY READY 0 1 }  { m_axi_data_WDATA DATA 1 32 }  { m_axi_data_WSTRB STRB 1 4 }  { m_axi_data_WLAST LAST 1 1 }  { m_axi_data_WID ID 1 1 }  { m_axi_data_WUSER USER 1 1 }  { m_axi_data_ARVALID VALID 1 1 }  { m_axi_data_ARREADY READY 0 1 }  { m_axi_data_ARADDR ADDR 1 32 }  { m_axi_data_ARID ID 1 1 }  { m_axi_data_ARLEN LEN 1 8 }  { m_axi_data_ARSIZE SIZE 1 3 }  { m_axi_data_ARBURST BURST 1 2 }  { m_axi_data_ARLOCK LOCK 1 2 }  { m_axi_data_ARCACHE CACHE 1 4 }  { m_axi_data_ARPROT PROT 1 3 }  { m_axi_data_ARQOS QOS 1 4 }  { m_axi_data_ARREGION REGION 1 4 }  { m_axi_data_ARUSER USER 1 1 }  { m_axi_data_RVALID VALID 0 1 }  { m_axi_data_RREADY READY 1 1 }  { m_axi_data_RDATA DATA 0 32 }  { m_axi_data_RLAST LAST 0 1 }  { m_axi_data_RID ID 0 1 }  { m_axi_data_RUSER USER 0 1 }  { m_axi_data_RRESP RESP 0 2 }  { m_axi_data_BVALID VALID 0 1 }  { m_axi_data_BREADY READY 1 1 }  { m_axi_data_BRESP RESP 0 2 }  { m_axi_data_BID ID 0 1 }  { m_axi_data_BUSER USER 0 1 } } }
	P_sm_data { axis {  { P_sm_TDATA out_data 1 32 }  { P_sm_TREADY out_acc 0 1 } } }
	P_sm_user_V { axis {  { P_sm_TUSER out_data 1 1 } } }
	P_sm_last_V { axis {  { P_sm_TVALID out_vld 1 1 }  { P_sm_TLAST out_data 1 1 } } }
}

set busDeadlockParameterList { 
	{ data { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ data 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ data 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
