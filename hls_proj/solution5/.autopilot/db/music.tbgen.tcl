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
	{ "Name" : "data", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "data_re","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "data_re","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 10239,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]},{"cName": "data_im","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "data_im","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 10239,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "73", "86", "99", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123"],
		"CDFG" : "music",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "116221157", "EstimateLatencyMax" : "2033101045",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state112", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_top_fu_2716"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_2726"},
			{"State" : "ap_ST_fsm_state206", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_2726"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_2742"},
			{"State" : "ap_ST_fsm_state206", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_2742"},
			{"State" : "ap_ST_fsm_state204", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_fu_2759"}],
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
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_sin_or_cos_float_s_fu_2726", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "86", "SubInstance" : "grp_sin_or_cos_float_s_fu_2742", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_sin_or_cos_float_s_fu_2726", "Port" : "second_order_float_2"},
					{"ID" : "86", "SubInstance" : "grp_sin_or_cos_float_s_fu_2742", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_sin_or_cos_float_s_fu_2726", "Port" : "second_order_float_3"},
					{"ID" : "86", "SubInstance" : "grp_sin_or_cos_float_s_fu_2742", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_sin_or_cos_float_s_fu_2726", "Port" : "second_order_float_s"},
					{"ID" : "86", "SubInstance" : "grp_sin_or_cos_float_s_fu_2742", "Port" : "second_order_float_s"}]},
			{"Name" : "fc", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "theta", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.theta_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_4oPi_table_256_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_s_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_data_m_axi_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_temp_M_real_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Q_temp_M_imag_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.R_temp_M_real_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.R_temp_M_imag_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rx_temp_M_real_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Rx_temp_M_imag_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.eig_mat_M_real_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.eig_mat_M_imag_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_re_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_Buffer_im_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_r_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_i_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_real_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_imag_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_real_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_imag_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_mat_M_real_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_mat_M_imag_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_real_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_imag_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_real_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_imag_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.eigval_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sort_index_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716", "Parent" : "0", "Child" : ["38", "39", "40", "41", "42", "72"],
		"CDFG" : "qrf_top",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "118", "EstimateLatencyMax" : "946",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "42", "Name" : "qrf_top_Loop_1_proc3_U0"}],
		"OutputProcess" : [
			{"ID" : "72", "Name" : "qrf_top_Loop_qrf_out_U0"}],
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "qrf_top_Loop_1_proc3_U0", "Port" : "A_M_real"}]},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "qrf_top_Loop_1_proc3_U0", "Port" : "A_M_imag"}]},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "Q_M_real"}]},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "Q_M_imag"}]},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "R_M_real"}]},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "R_M_imag"}]}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.Qi_M_real_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.Qi_M_imag_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.Ri_M_real_U", "Parent" : "37"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.Ri_M_imag_U", "Parent" : "37"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0", "Parent" : "37", "Child" : ["43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71"],
		"CDFG" : "qrf_top_Loop_1_proc3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "118", "EstimateLatencyMax" : "946",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "72", "DependentChan" : "38"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "72", "DependentChan" : "39"},
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "72", "DependentChan" : "40"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "72", "DependentChan" : "41"},
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_faddfsub_32jbC_U21", "Parent" : "42"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_faddfsub_32jbC_U22", "Parent" : "42"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_faddfsub_32jbC_U23", "Parent" : "42"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fadd_32ns_3kbM_U24", "Parent" : "42"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fsub_32ns_3lbW_U25", "Parent" : "42"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U26", "Parent" : "42"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U27", "Parent" : "42"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U28", "Parent" : "42"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U29", "Parent" : "42"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U30", "Parent" : "42"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U31", "Parent" : "42"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U32", "Parent" : "42"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U33", "Parent" : "42"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3mb6_U34", "Parent" : "42"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3ncg_U35", "Parent" : "42"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3ncg_U36", "Parent" : "42"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3ncg_U37", "Parent" : "42"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3ncg_U38", "Parent" : "42"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U39", "Parent" : "42"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U40", "Parent" : "42"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U41", "Parent" : "42"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U42", "Parent" : "42"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U43", "Parent" : "42"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U44", "Parent" : "42"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U45", "Parent" : "42"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U46", "Parent" : "42"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U47", "Parent" : "42"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3ocq_U48", "Parent" : "42"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_1_proc3_U0.music_fsqrt_32ns_pcA_U49", "Parent" : "42"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2716.qrf_top_Loop_qrf_out_U0", "Parent" : "37",
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
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "42", "DependentChan" : "40"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "42", "DependentChan" : "41"},
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "42", "DependentChan" : "38"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "42", "DependentChan" : "39"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726", "Parent" : "0", "Child" : ["74", "75", "76", "77", "78", "81", "82", "83", "84", "85"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "15",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.ref_4oPi_table_100_V_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.second_order_float_2_U", "Parent" : "73"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.second_order_float_3_U", "Parent" : "73"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.second_order_float_s_U", "Parent" : "73"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "73", "Child" : ["79", "80"],
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "12",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.grp_scaled_fixed2ieee_1_fu_218.out_bits_V_U", "Parent" : "78"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.grp_scaled_fixed2ieee_1_fu_218.c_U", "Parent" : "78"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.music_mux_83_1_1_1_U5", "Parent" : "73"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.music_mux_164_1_1_1_U6", "Parent" : "73"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.music_mux_164_1_1_1_U7", "Parent" : "73"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.music_mul_mul_15nhbi_U8", "Parent" : "73"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2726.music_mul_mul_15nibs_U9", "Parent" : "73"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742", "Parent" : "0", "Child" : ["87", "88", "89", "90", "91", "94", "95", "96", "97", "98"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "15",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.ref_4oPi_table_100_V_U", "Parent" : "86"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.second_order_float_2_U", "Parent" : "86"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.second_order_float_3_U", "Parent" : "86"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.second_order_float_s_U", "Parent" : "86"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "86", "Child" : ["92", "93"],
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "12",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.grp_scaled_fixed2ieee_1_fu_218.out_bits_V_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.grp_scaled_fixed2ieee_1_fu_218.c_U", "Parent" : "91"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.music_mux_83_1_1_1_U5", "Parent" : "86"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.music_mux_164_1_1_1_U6", "Parent" : "86"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.music_mux_164_1_1_1_U7", "Parent" : "86"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.music_mul_mul_15nhbi_U8", "Parent" : "86"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2742.music_mul_mul_15nibs_U9", "Parent" : "86"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_2759", "Parent" : "0", "Child" : ["100", "101"],
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
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_2759.out_bits_V_U", "Parent" : "99"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_2759.c_U", "Parent" : "99"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32jbC_U82", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32jbC_U83", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3lbW_U84", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U85", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U86", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U87", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U88", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U89", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3mb6_U90", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U91", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U92", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fptrunc_64nHfu_U93", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fpext_32ns_IfE_U94", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3ocq_U95", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsqrt_32ns_pcA_U96", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_dmul_64ns_6JfO_U97", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_ddiv_64ns_6KfY_U98", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_sitodp_32nsLf8_U99", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_170ns_5Mgi_U100", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_83_1_1_1_U101", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U102", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U103", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	music {
		data {Type IO LastRead 36 FirstWrite 20}
		data_re {Type I LastRead 0 FirstWrite -1}
		data_im {Type I LastRead 0 FirstWrite -1}
		P_sm_data {Type O LastRead -1 FirstWrite 16}
		P_sm_user_V {Type O LastRead -1 FirstWrite 16}
		P_sm_last_V {Type O LastRead -1 FirstWrite 16}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}
		fc {Type I LastRead -1 FirstWrite -1}
		p {Type I LastRead -1 FirstWrite -1}
		theta {Type I LastRead -1 FirstWrite -1}
		ref_4oPi_table_256_V {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_4 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_5 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_6 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_7 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_s {Type I LastRead -1 FirstWrite -1}}
	qrf_top {
		A_M_real {Type I LastRead 8 FirstWrite -1}
		A_M_imag {Type I LastRead 8 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 3}
		Q_M_imag {Type O LastRead -1 FirstWrite 3}
		R_M_real {Type O LastRead -1 FirstWrite 5}
		R_M_imag {Type O LastRead -1 FirstWrite 5}}
	qrf_top_Loop_1_proc3 {
		Qi_M_real {Type IO LastRead 34 FirstWrite 2}
		Qi_M_imag {Type IO LastRead 34 FirstWrite 2}
		Ri_M_real {Type IO LastRead 32 FirstWrite 4}
		Ri_M_imag {Type IO LastRead 32 FirstWrite 4}
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
		Q_M_imag {Type O LastRead -1 FirstWrite 3}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 1 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 1 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	scaled_fixed2ieee {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "116221157", "Max" : "2033101045"}
	, {"Name" : "Interval", "Min" : "116221158", "Max" : "2033101046"}
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
