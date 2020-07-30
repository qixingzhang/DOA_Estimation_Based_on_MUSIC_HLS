############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project DOA_Estimation_proj
set_top music
add_files src/music.cpp
add_files -tb src/main.cpp
add_files -tb src/test.cpp
add_files -tb src/test_audio
open_solution "solution2"
set_part {xc7z020-clg400-1}
create_clock -period 20 -name default
config_sdx -target none
config_export -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
source "./DOA_Estimation_proj/solution2/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
