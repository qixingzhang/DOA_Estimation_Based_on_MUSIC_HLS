############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_proj
set_top music
add_files src/music.cpp
add_files -tb src/main.cpp -cflags "-Wno-unknown-pragmas"
add_files -tb src/test_audio -cflags "-Wno-unknown-pragmas"
open_solution "solution7"
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
config_sdx -target none
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
config_schedule -effort medium -enable_dsp_full_reg=0 -relax_ii_for_timing=0 -verbose=0
config_bind -effort medium
set_clock_uncertainty 12.5%
source "./hls_proj/solution7/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
