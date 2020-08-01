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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "187", "222", "236", "250", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280"],
		"CDFG" : "music",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "274716901", "EstimateLatencyMax" : "318208229",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fft_streaming_fu_2582"},
			{"State" : "ap_ST_fsm_state144", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_qrf_top_fu_2626"},
			{"State" : "ap_ST_fsm_state387", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_2636"},
			{"State" : "ap_ST_fsm_state387", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_2652"},
			{"State" : "ap_ST_fsm_state379", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_fu_2667"}],
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
			{"Name" : "W_real277", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real277"}]},
			{"Name" : "W_imag269", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag269"}]},
			{"Name" : "W_real276", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real276"}]},
			{"Name" : "W_imag268", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag268"}]},
			{"Name" : "W_real275", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real275"}]},
			{"Name" : "W_imag267", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag267"}]},
			{"Name" : "W_real274", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real274"}]},
			{"Name" : "W_imag266", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag266"}]},
			{"Name" : "W_real273", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real273"}]},
			{"Name" : "W_imag265", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag265"}]},
			{"Name" : "W_real272", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real272"}]},
			{"Name" : "W_imag264", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag264"}]},
			{"Name" : "W_real271", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real271"}]},
			{"Name" : "W_imag263", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag263"}]},
			{"Name" : "W_real270", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real270"}]},
			{"Name" : "W_imag262", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag262"}]},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_real"}]},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_fft_streaming_fu_2582", "Port" : "W_imag"}]},
			{"Name" : "fc", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "theta", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "222", "SubInstance" : "grp_sin_or_cos_float_s_fu_2636", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "236", "SubInstance" : "grp_sin_or_cos_float_s_fu_2652", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "222", "SubInstance" : "grp_sin_or_cos_float_s_fu_2636", "Port" : "second_order_float_2"},
					{"ID" : "236", "SubInstance" : "grp_sin_or_cos_float_s_fu_2652", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "222", "SubInstance" : "grp_sin_or_cos_float_s_fu_2636", "Port" : "second_order_float_3"},
					{"ID" : "236", "SubInstance" : "grp_sin_or_cos_float_s_fu_2652", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "222", "SubInstance" : "grp_sin_or_cos_float_s_fu_2636", "Port" : "second_order_float_s"},
					{"ID" : "236", "SubInstance" : "grp_sin_or_cos_float_s_fu_2652", "Port" : "second_order_float_s"}]}]},
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
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_out_re_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FFT_out_im_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_r_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Autocorr_Buffer_M_i_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_real_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.U_M_imag_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_real_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Un_M_imag_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_mat_M_real_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_mat_M_imag_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_real_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AUU_M_imag_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_real_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_theta_M_imag_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.eigval_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sort_index_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582", "Parent" : "0", "Child" : ["40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "70", "83", "96", "109", "122", "135", "148", "161", "174"],
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
			{"ID" : "60", "Name" : "bit_reverse235_U0"}],
		"OutputProcess" : [
			{"ID" : "174", "Name" : "fft_stage245_U0"}],
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "bit_reverse235_U0", "Port" : "X_R"}]},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "bit_reverse235_U0", "Port" : "X_I"}]},
			{"Name" : "OUT_R", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "fft_stage245_U0", "Port" : "Out_R"}]},
			{"Name" : "OUT_I", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "fft_stage245_U0", "Port" : "Out_I"}]},
			{"Name" : "W_real277", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "fft_stage_1237_U0", "Port" : "W_real277"}]},
			{"Name" : "W_imag269", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "fft_stage_1237_U0", "Port" : "W_imag269"}]},
			{"Name" : "W_real276", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_1238_U0", "Port" : "W_real276"}]},
			{"Name" : "W_imag268", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "fft_stage_1238_U0", "Port" : "W_imag268"}]},
			{"Name" : "W_real275", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "fft_stage_1239_U0", "Port" : "W_real275"}]},
			{"Name" : "W_imag267", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "fft_stage_1239_U0", "Port" : "W_imag267"}]},
			{"Name" : "W_real274", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "109", "SubInstance" : "fft_stage_1240_U0", "Port" : "W_real274"}]},
			{"Name" : "W_imag266", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "109", "SubInstance" : "fft_stage_1240_U0", "Port" : "W_imag266"}]},
			{"Name" : "W_real273", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "fft_stage_1241_U0", "Port" : "W_real273"}]},
			{"Name" : "W_imag265", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "fft_stage_1241_U0", "Port" : "W_imag265"}]},
			{"Name" : "W_real272", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "fft_stage_1242_U0", "Port" : "W_real272"}]},
			{"Name" : "W_imag264", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "fft_stage_1242_U0", "Port" : "W_imag264"}]},
			{"Name" : "W_real271", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "fft_stage_1243_U0", "Port" : "W_real271"}]},
			{"Name" : "W_imag263", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "fft_stage_1243_U0", "Port" : "W_imag263"}]},
			{"Name" : "W_real270", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "fft_stage_1244_U0", "Port" : "W_real270"}]},
			{"Name" : "W_imag262", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "fft_stage_1244_U0", "Port" : "W_imag262"}]},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "fft_stage245_U0", "Port" : "W_real"}]},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "fft_stage245_U0", "Port" : "W_imag"}]}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_0_U", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_1_U", "Parent" : "39"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_2_U", "Parent" : "39"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_3_U", "Parent" : "39"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_4_U", "Parent" : "39"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_5_U", "Parent" : "39"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_6_U", "Parent" : "39"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_7_U", "Parent" : "39"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_8_U", "Parent" : "39"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_R_9_U", "Parent" : "39"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_0_U", "Parent" : "39"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_1_U", "Parent" : "39"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_2_U", "Parent" : "39"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_3_U", "Parent" : "39"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_4_U", "Parent" : "39"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_5_U", "Parent" : "39"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_6_U", "Parent" : "39"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_7_U", "Parent" : "39"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_8_U", "Parent" : "39"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.Stage_I_9_U", "Parent" : "39"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.bit_reverse235_U0", "Parent" : "39",
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
			{"Name" : "OUT_R", "Type" : "Memory", "Direction" : "O", "DependentProc" : "61", "DependentChan" : "40"},
			{"Name" : "OUT_I", "Type" : "Memory", "Direction" : "O", "DependentProc" : "61", "DependentChan" : "50"}]},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0", "Parent" : "39", "Child" : ["62", "63", "64", "65", "66", "67", "68", "69"],
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
			{"Name" : "X_R_0", "Type" : "Memory", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "40"},
			{"Name" : "X_I_0", "Type" : "Memory", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "50"},
			{"Name" : "Out_R_1", "Type" : "Memory", "Direction" : "O", "DependentProc" : "70", "DependentChan" : "41"},
			{"Name" : "Out_I_1", "Type" : "Memory", "Direction" : "O", "DependentProc" : "70", "DependentChan" : "51"}]},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fsub_32ns_3bkb_U5", "Parent" : "61"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fadd_32ns_3cud_U6", "Parent" : "61"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fsub_32ns_3bkb_U7", "Parent" : "61"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fsub_32ns_3bkb_U8", "Parent" : "61"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fadd_32ns_3cud_U9", "Parent" : "61"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fadd_32ns_3cud_U10", "Parent" : "61"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fmul_32ns_3dEe_U11", "Parent" : "61"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1236_U0.music_fmul_32ns_3dEe_U12", "Parent" : "61"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0", "Parent" : "39", "Child" : ["71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82"],
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
			{"Name" : "X_R_1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "61", "DependentChan" : "41"},
			{"Name" : "X_I_1", "Type" : "Memory", "Direction" : "I", "DependentProc" : "61", "DependentChan" : "51"},
			{"Name" : "Out_R_2", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "42"},
			{"Name" : "Out_I_2", "Type" : "Memory", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "52"},
			{"Name" : "W_real277", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag269", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.W_real277_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.W_imag269_U", "Parent" : "70"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fsub_32ns_3bkb_U20", "Parent" : "70"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fadd_32ns_3cud_U21", "Parent" : "70"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fsub_32ns_3bkb_U22", "Parent" : "70"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fsub_32ns_3bkb_U23", "Parent" : "70"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fadd_32ns_3cud_U24", "Parent" : "70"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fadd_32ns_3cud_U25", "Parent" : "70"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fmul_32ns_3dEe_U26", "Parent" : "70"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fmul_32ns_3dEe_U27", "Parent" : "70"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fmul_32ns_3dEe_U28", "Parent" : "70"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1237_U0.music_fmul_32ns_3dEe_U29", "Parent" : "70"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0", "Parent" : "39", "Child" : ["84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95"],
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
			{"Name" : "X_R_2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "70", "DependentChan" : "42"},
			{"Name" : "X_I_2", "Type" : "Memory", "Direction" : "I", "DependentProc" : "70", "DependentChan" : "52"},
			{"Name" : "Out_R_3", "Type" : "Memory", "Direction" : "O", "DependentProc" : "96", "DependentChan" : "43"},
			{"Name" : "Out_I_3", "Type" : "Memory", "Direction" : "O", "DependentProc" : "96", "DependentChan" : "53"},
			{"Name" : "W_real276", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag268", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.W_real276_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.W_imag268_U", "Parent" : "83"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fsub_32ns_3bkb_U36", "Parent" : "83"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fadd_32ns_3cud_U37", "Parent" : "83"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fsub_32ns_3bkb_U38", "Parent" : "83"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fsub_32ns_3bkb_U39", "Parent" : "83"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fadd_32ns_3cud_U40", "Parent" : "83"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fadd_32ns_3cud_U41", "Parent" : "83"},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fmul_32ns_3dEe_U42", "Parent" : "83"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fmul_32ns_3dEe_U43", "Parent" : "83"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fmul_32ns_3dEe_U44", "Parent" : "83"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1238_U0.music_fmul_32ns_3dEe_U45", "Parent" : "83"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0", "Parent" : "39", "Child" : ["97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108"],
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
			{"Name" : "X_R_3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "43"},
			{"Name" : "X_I_3", "Type" : "Memory", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "53"},
			{"Name" : "Out_R_4", "Type" : "Memory", "Direction" : "O", "DependentProc" : "109", "DependentChan" : "44"},
			{"Name" : "Out_I_4", "Type" : "Memory", "Direction" : "O", "DependentProc" : "109", "DependentChan" : "54"},
			{"Name" : "W_real275", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag267", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.W_real275_U", "Parent" : "96"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.W_imag267_U", "Parent" : "96"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fsub_32ns_3bkb_U50", "Parent" : "96"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fadd_32ns_3cud_U51", "Parent" : "96"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fsub_32ns_3bkb_U52", "Parent" : "96"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fsub_32ns_3bkb_U53", "Parent" : "96"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fadd_32ns_3cud_U54", "Parent" : "96"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fadd_32ns_3cud_U55", "Parent" : "96"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fmul_32ns_3dEe_U56", "Parent" : "96"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fmul_32ns_3dEe_U57", "Parent" : "96"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fmul_32ns_3dEe_U58", "Parent" : "96"},
	{"ID" : "108", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1239_U0.music_fmul_32ns_3dEe_U59", "Parent" : "96"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0", "Parent" : "39", "Child" : ["110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121"],
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
			{"Name" : "X_R_4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "96", "DependentChan" : "44"},
			{"Name" : "X_I_4", "Type" : "Memory", "Direction" : "I", "DependentProc" : "96", "DependentChan" : "54"},
			{"Name" : "Out_R_5", "Type" : "Memory", "Direction" : "O", "DependentProc" : "122", "DependentChan" : "45"},
			{"Name" : "Out_I_5", "Type" : "Memory", "Direction" : "O", "DependentProc" : "122", "DependentChan" : "55"},
			{"Name" : "W_real274", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag266", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "110", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.W_real274_U", "Parent" : "109"},
	{"ID" : "111", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.W_imag266_U", "Parent" : "109"},
	{"ID" : "112", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fsub_32ns_3bkb_U64", "Parent" : "109"},
	{"ID" : "113", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fadd_32ns_3cud_U65", "Parent" : "109"},
	{"ID" : "114", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fsub_32ns_3bkb_U66", "Parent" : "109"},
	{"ID" : "115", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fsub_32ns_3bkb_U67", "Parent" : "109"},
	{"ID" : "116", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fadd_32ns_3cud_U68", "Parent" : "109"},
	{"ID" : "117", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fadd_32ns_3cud_U69", "Parent" : "109"},
	{"ID" : "118", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fmul_32ns_3dEe_U70", "Parent" : "109"},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fmul_32ns_3dEe_U71", "Parent" : "109"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fmul_32ns_3dEe_U72", "Parent" : "109"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1240_U0.music_fmul_32ns_3dEe_U73", "Parent" : "109"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0", "Parent" : "39", "Child" : ["123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134"],
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
			{"Name" : "X_R_5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "109", "DependentChan" : "45"},
			{"Name" : "X_I_5", "Type" : "Memory", "Direction" : "I", "DependentProc" : "109", "DependentChan" : "55"},
			{"Name" : "Out_R_6", "Type" : "Memory", "Direction" : "O", "DependentProc" : "135", "DependentChan" : "46"},
			{"Name" : "Out_I_6", "Type" : "Memory", "Direction" : "O", "DependentProc" : "135", "DependentChan" : "56"},
			{"Name" : "W_real273", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag265", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.W_real273_U", "Parent" : "122"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.W_imag265_U", "Parent" : "122"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fsub_32ns_3bkb_U78", "Parent" : "122"},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fadd_32ns_3cud_U79", "Parent" : "122"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fsub_32ns_3bkb_U80", "Parent" : "122"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fsub_32ns_3bkb_U81", "Parent" : "122"},
	{"ID" : "129", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fadd_32ns_3cud_U82", "Parent" : "122"},
	{"ID" : "130", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fadd_32ns_3cud_U83", "Parent" : "122"},
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fmul_32ns_3dEe_U84", "Parent" : "122"},
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fmul_32ns_3dEe_U85", "Parent" : "122"},
	{"ID" : "133", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fmul_32ns_3dEe_U86", "Parent" : "122"},
	{"ID" : "134", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1241_U0.music_fmul_32ns_3dEe_U87", "Parent" : "122"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0", "Parent" : "39", "Child" : ["136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147"],
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
			{"Name" : "X_R_6", "Type" : "Memory", "Direction" : "I", "DependentProc" : "122", "DependentChan" : "46"},
			{"Name" : "X_I_6", "Type" : "Memory", "Direction" : "I", "DependentProc" : "122", "DependentChan" : "56"},
			{"Name" : "Out_R_7", "Type" : "Memory", "Direction" : "O", "DependentProc" : "148", "DependentChan" : "47"},
			{"Name" : "Out_I_7", "Type" : "Memory", "Direction" : "O", "DependentProc" : "148", "DependentChan" : "57"},
			{"Name" : "W_real272", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag264", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.W_real272_U", "Parent" : "135"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.W_imag264_U", "Parent" : "135"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fsub_32ns_3bkb_U92", "Parent" : "135"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fadd_32ns_3cud_U93", "Parent" : "135"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fsub_32ns_3bkb_U94", "Parent" : "135"},
	{"ID" : "141", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fsub_32ns_3bkb_U95", "Parent" : "135"},
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fadd_32ns_3cud_U96", "Parent" : "135"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fadd_32ns_3cud_U97", "Parent" : "135"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fmul_32ns_3dEe_U98", "Parent" : "135"},
	{"ID" : "145", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fmul_32ns_3dEe_U99", "Parent" : "135"},
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fmul_32ns_3dEe_U100", "Parent" : "135"},
	{"ID" : "147", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1242_U0.music_fmul_32ns_3dEe_U101", "Parent" : "135"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0", "Parent" : "39", "Child" : ["149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160"],
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
			{"Name" : "X_R_7", "Type" : "Memory", "Direction" : "I", "DependentProc" : "135", "DependentChan" : "47"},
			{"Name" : "X_I_7", "Type" : "Memory", "Direction" : "I", "DependentProc" : "135", "DependentChan" : "57"},
			{"Name" : "Out_R_8", "Type" : "Memory", "Direction" : "O", "DependentProc" : "161", "DependentChan" : "48"},
			{"Name" : "Out_I_8", "Type" : "Memory", "Direction" : "O", "DependentProc" : "161", "DependentChan" : "58"},
			{"Name" : "W_real271", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag263", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "149", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.W_real271_U", "Parent" : "148"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.W_imag263_U", "Parent" : "148"},
	{"ID" : "151", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fsub_32ns_3bkb_U106", "Parent" : "148"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fadd_32ns_3cud_U107", "Parent" : "148"},
	{"ID" : "153", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fsub_32ns_3bkb_U108", "Parent" : "148"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fsub_32ns_3bkb_U109", "Parent" : "148"},
	{"ID" : "155", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fadd_32ns_3cud_U110", "Parent" : "148"},
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fadd_32ns_3cud_U111", "Parent" : "148"},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fmul_32ns_3dEe_U112", "Parent" : "148"},
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fmul_32ns_3dEe_U113", "Parent" : "148"},
	{"ID" : "159", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fmul_32ns_3dEe_U114", "Parent" : "148"},
	{"ID" : "160", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1243_U0.music_fmul_32ns_3dEe_U115", "Parent" : "148"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0", "Parent" : "39", "Child" : ["162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173"],
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
			{"Name" : "X_R_8", "Type" : "Memory", "Direction" : "I", "DependentProc" : "148", "DependentChan" : "48"},
			{"Name" : "X_I_8", "Type" : "Memory", "Direction" : "I", "DependentProc" : "148", "DependentChan" : "58"},
			{"Name" : "Out_R_9", "Type" : "Memory", "Direction" : "O", "DependentProc" : "174", "DependentChan" : "49"},
			{"Name" : "Out_I_9", "Type" : "Memory", "Direction" : "O", "DependentProc" : "174", "DependentChan" : "59"},
			{"Name" : "W_real270", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag262", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.W_real270_U", "Parent" : "161"},
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.W_imag262_U", "Parent" : "161"},
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fsub_32ns_3bkb_U120", "Parent" : "161"},
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fadd_32ns_3cud_U121", "Parent" : "161"},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fsub_32ns_3bkb_U122", "Parent" : "161"},
	{"ID" : "167", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fsub_32ns_3bkb_U123", "Parent" : "161"},
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fadd_32ns_3cud_U124", "Parent" : "161"},
	{"ID" : "169", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fadd_32ns_3cud_U125", "Parent" : "161"},
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fmul_32ns_3dEe_U126", "Parent" : "161"},
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fmul_32ns_3dEe_U127", "Parent" : "161"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fmul_32ns_3dEe_U128", "Parent" : "161"},
	{"ID" : "173", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage_1244_U0.music_fmul_32ns_3dEe_U129", "Parent" : "161"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0", "Parent" : "39", "Child" : ["175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186"],
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
			{"Name" : "X_R9", "Type" : "Memory", "Direction" : "I", "DependentProc" : "161", "DependentChan" : "49"},
			{"Name" : "X_I18", "Type" : "Memory", "Direction" : "I", "DependentProc" : "161", "DependentChan" : "59"},
			{"Name" : "Out_R", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Out_I", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "W_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "W_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.W_real_U", "Parent" : "174"},
	{"ID" : "176", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.W_imag_U", "Parent" : "174"},
	{"ID" : "177", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fsub_32ns_3bkb_U134", "Parent" : "174"},
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fadd_32ns_3cud_U135", "Parent" : "174"},
	{"ID" : "179", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fsub_32ns_3bkb_U136", "Parent" : "174"},
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fsub_32ns_3bkb_U137", "Parent" : "174"},
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fadd_32ns_3cud_U138", "Parent" : "174"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fadd_32ns_3cud_U139", "Parent" : "174"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fmul_32ns_3dEe_U140", "Parent" : "174"},
	{"ID" : "184", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fmul_32ns_3dEe_U141", "Parent" : "174"},
	{"ID" : "185", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fmul_32ns_3dEe_U142", "Parent" : "174"},
	{"ID" : "186", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_fft_streaming_fu_2582.fft_stage245_U0.music_fmul_32ns_3dEe_U143", "Parent" : "174"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626", "Parent" : "0", "Child" : ["188", "189", "190", "191", "192", "221"],
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
			{"ID" : "192", "Name" : "qrf_top_Loop_1_proc3_U0"}],
		"OutputProcess" : [
			{"ID" : "221", "Name" : "qrf_top_Loop_qrf_out_U0"}],
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "qrf_top_Loop_1_proc3_U0", "Port" : "A_M_real"}]},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "qrf_top_Loop_1_proc3_U0", "Port" : "A_M_imag"}]},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "221", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "Q_M_real"}]},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "221", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "Q_M_imag"}]},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "221", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "R_M_real"}]},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "221", "SubInstance" : "qrf_top_Loop_qrf_out_U0", "Port" : "R_M_imag"}]}]},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.Qi_M_real_U", "Parent" : "187"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.Qi_M_imag_U", "Parent" : "187"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.Ri_M_real_U", "Parent" : "187"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.Ri_M_imag_U", "Parent" : "187"},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0", "Parent" : "187", "Child" : ["193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220"],
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
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "221", "DependentChan" : "188"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "221", "DependentChan" : "189"},
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "221", "DependentChan" : "190"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "IO", "DependentProc" : "221", "DependentChan" : "191"},
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "193", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_faddfsub_32OgC_U154", "Parent" : "192"},
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fadd_32ns_3cud_U155", "Parent" : "192"},
	{"ID" : "195", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_faddfsub_32OgC_U156", "Parent" : "192"},
	{"ID" : "196", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fadd_32ns_3cud_U157", "Parent" : "192"},
	{"ID" : "197", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fsub_32ns_3bkb_U158", "Parent" : "192"},
	{"ID" : "198", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U159", "Parent" : "192"},
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U160", "Parent" : "192"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U161", "Parent" : "192"},
	{"ID" : "201", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U162", "Parent" : "192"},
	{"ID" : "202", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U163", "Parent" : "192"},
	{"ID" : "203", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U164", "Parent" : "192"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U165", "Parent" : "192"},
	{"ID" : "205", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U166", "Parent" : "192"},
	{"ID" : "206", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fmul_32ns_3dEe_U167", "Parent" : "192"},
	{"ID" : "207", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U168", "Parent" : "192"},
	{"ID" : "208", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U169", "Parent" : "192"},
	{"ID" : "209", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U170", "Parent" : "192"},
	{"ID" : "210", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fdiv_32ns_3PgM_U171", "Parent" : "192"},
	{"ID" : "211", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U172", "Parent" : "192"},
	{"ID" : "212", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U173", "Parent" : "192"},
	{"ID" : "213", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U174", "Parent" : "192"},
	{"ID" : "214", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U175", "Parent" : "192"},
	{"ID" : "215", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U176", "Parent" : "192"},
	{"ID" : "216", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U177", "Parent" : "192"},
	{"ID" : "217", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U178", "Parent" : "192"},
	{"ID" : "218", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U179", "Parent" : "192"},
	{"ID" : "219", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fcmp_32ns_3QgW_U180", "Parent" : "192"},
	{"ID" : "220", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_1_proc3_U0.music_fsqrt_32ns_Rg6_U181", "Parent" : "192"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_top_fu_2626.qrf_top_Loop_qrf_out_U0", "Parent" : "187",
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
			{"Name" : "Ri_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "192", "DependentChan" : "190"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Ri_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "192", "DependentChan" : "191"},
			{"Name" : "Qi_M_real", "Type" : "Memory", "Direction" : "I", "DependentProc" : "192", "DependentChan" : "188"},
			{"Name" : "Qi_M_imag", "Type" : "Memory", "Direction" : "I", "DependentProc" : "192", "DependentChan" : "189"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636", "Parent" : "0", "Child" : ["223", "224", "225", "226", "227", "230", "231", "232", "233", "234", "235"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.ref_4oPi_table_100_V_U", "Parent" : "222"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.second_order_float_2_U", "Parent" : "222"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.second_order_float_3_U", "Parent" : "222"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.second_order_float_s_U", "Parent" : "222"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "222", "Child" : ["228", "229"],
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "228", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.grp_scaled_fixed2ieee_1_fu_218.out_bits_V_U", "Parent" : "227"},
	{"ID" : "229", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.grp_scaled_fixed2ieee_1_fu_218.c_U", "Parent" : "227"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.music_mul_80ns_24Zio_U215", "Parent" : "222"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.music_mux_83_1_1_1_U216", "Parent" : "222"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.music_mux_164_1_1_1_U217", "Parent" : "222"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.music_mux_164_1_1_1_U218", "Parent" : "222"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.music_mul_mul_15n0iy_U219", "Parent" : "222"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2636.music_mul_mul_15n1iI_U220", "Parent" : "222"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652", "Parent" : "0", "Child" : ["237", "238", "239", "240", "241", "244", "245", "246", "247", "248", "249"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.ref_4oPi_table_100_V_U", "Parent" : "236"},
	{"ID" : "238", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.second_order_float_2_U", "Parent" : "236"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.second_order_float_3_U", "Parent" : "236"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.second_order_float_s_U", "Parent" : "236"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "236", "Child" : ["242", "243"],
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "242", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.grp_scaled_fixed2ieee_1_fu_218.out_bits_V_U", "Parent" : "241"},
	{"ID" : "243", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.grp_scaled_fixed2ieee_1_fu_218.c_U", "Parent" : "241"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.music_mul_80ns_24Zio_U215", "Parent" : "236"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.music_mux_83_1_1_1_U216", "Parent" : "236"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.music_mux_164_1_1_1_U217", "Parent" : "236"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.music_mux_164_1_1_1_U218", "Parent" : "236"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.music_mul_mul_15n0iy_U219", "Parent" : "236"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_2652.music_mul_mul_15n1iI_U220", "Parent" : "236"},
	{"ID" : "250", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_2667", "Parent" : "0", "Child" : ["251", "252"],
		"CDFG" : "scaled_fixed2ieee",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_2667.out_bits_V_U", "Parent" : "250"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_2667.c_U", "Parent" : "250"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32OgC_U233", "Parent" : "0"},
	{"ID" : "254", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32OgC_U234", "Parent" : "0"},
	{"ID" : "255", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3bkb_U235", "Parent" : "0"},
	{"ID" : "256", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3dEe_U236", "Parent" : "0"},
	{"ID" : "257", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3dEe_U237", "Parent" : "0"},
	{"ID" : "258", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3dEe_U238", "Parent" : "0"},
	{"ID" : "259", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3dEe_U239", "Parent" : "0"},
	{"ID" : "260", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3dEe_U240", "Parent" : "0"},
	{"ID" : "261", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3dEe_U241", "Parent" : "0"},
	{"ID" : "262", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3PgM_U242", "Parent" : "0"},
	{"ID" : "263", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3PgM_U243", "Parent" : "0"},
	{"ID" : "264", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fptrunc_64nbil_U244", "Parent" : "0"},
	{"ID" : "265", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fpext_32ns_bjl_U245", "Parent" : "0"},
	{"ID" : "266", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3QgW_U246", "Parent" : "0"},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsqrt_32ns_Rg6_U247", "Parent" : "0"},
	{"ID" : "268", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_dmul_64ns_6bkl_U248", "Parent" : "0"},
	{"ID" : "269", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_ddiv_64ns_6bll_U249", "Parent" : "0"},
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_170ns_5bml_U250", "Parent" : "0"},
	{"ID" : "271", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49bnm_U251", "Parent" : "0"},
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_83_1_1_1_U252", "Parent" : "0"},
	{"ID" : "273", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49bnm_U253", "Parent" : "0"},
	{"ID" : "274", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49bnm_U254", "Parent" : "0"},
	{"ID" : "275", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_56ns_52bom_U255", "Parent" : "0"},
	{"ID" : "276", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_44bpm_U256", "Parent" : "0"},
	{"ID" : "277", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_42ns_33bqm_U257", "Parent" : "0"},
	{"ID" : "278", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_64s_63nbrm_U258", "Parent" : "0"},
	{"ID" : "279", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U259", "Parent" : "0"},
	{"ID" : "280", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U260", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	music {
		data {Type IO LastRead 66 FirstWrite 19}
		data_re {Type I LastRead 0 FirstWrite -1}
		data_im {Type I LastRead 0 FirstWrite -1}
		P_sm_data {Type O LastRead -1 FirstWrite 32}
		P_sm_user_V {Type O LastRead -1 FirstWrite 32}
		P_sm_last_V {Type O LastRead -1 FirstWrite 32}
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
		W_imag {Type I LastRead -1 FirstWrite -1}
		fc {Type I LastRead -1 FirstWrite -1}
		p {Type I LastRead -1 FirstWrite -1}
		theta {Type I LastRead -1 FirstWrite -1}
		ref_4oPi_table_256_V {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_4 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_5 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_6 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_7 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_s {Type I LastRead -1 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
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
		W_imag {Type I LastRead -1 FirstWrite -1}}
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
		Q_M_imag {Type O LastRead -1 FirstWrite 3}}
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
	scaled_fixed2ieee {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "274716901", "Max" : "318208229"}
	, {"Name" : "Interval", "Min" : "274716902", "Max" : "318208230"}
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
