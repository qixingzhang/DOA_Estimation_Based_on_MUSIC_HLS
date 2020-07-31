# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
ap_return { 
	dir o
	width 32
	depth 1
	mode ap_ctrl_hs
	offset 16
	offset_end 0
}
data_re { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
data_im { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
P_sm { 
	dir O
	width 32
	depth 361
	mode ap_memory
	offset 2048
	offset_end 4095
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


