# This script segment is generated automatically by AutoPilot

set id 244
set name music_fptrunc_64nbil
set corename simcore_fptrunc
set op fptrunc
set stage_num 2
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fptrunc] == "ap_gen_simcore_fptrunc"} {
eval "ap_gen_simcore_fptrunc { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fptrunc, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fptrunc
set corename Double2Float
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 245
set name music_fpext_32ns_bjl
set corename simcore_fpext
set op fpext
set stage_num 2
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fpext] == "ap_gen_simcore_fpext"} {
eval "ap_gen_simcore_fpext { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fpext, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fpext
set corename Float2Double
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 248
set name music_dmul_64ns_6bkl
set corename simcore_dmul
set op dmul
set stage_num 6
set max_latency -1
set registered_input 1
set impl_style max_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_dmul] == "ap_gen_simcore_dmul"} {
eval "ap_gen_simcore_dmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_dmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op dmul
set corename DMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 249
set name music_ddiv_64ns_6bll
set corename simcore_ddiv
set op ddiv
set stage_num 31
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_ddiv] == "ap_gen_simcore_ddiv"} {
eval "ap_gen_simcore_ddiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_ddiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op ddiv
set corename DDiv
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 250
set name music_mul_170ns_5bml
set corename simcore_mul
set op mul
set stage_num 5
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 170
set in0_signed 0
set in1_width 53
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 223
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 251
set name music_mul_49ns_49bnm
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 49
set in0_signed 0
set in1_width 49
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 98
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 255
set name music_mul_56ns_52bom
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 56
set in0_signed 0
set in1_width 52
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 108
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 256
set name music_mul_49ns_44bpm
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 49
set in0_signed 0
set in1_width 44
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 93
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 257
set name music_mul_42ns_33bqm
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 42
set in0_signed 0
set in1_width 33
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 75
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 258
set name music_mul_64s_63nbrm
set corename simcore_mul
set op mul
set stage_num 5
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 1
set in1_width 63
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 126
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 271
set hasByteEnable 0
set MemName music_fc
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 1024
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "00000000000000000000000000000000" "01000001011110100000000000000000" "01000001111110100000000000000000" "01000010001110111000000000000000" "01000010011110100000000000000000" "01000010100111000100000000000000" "01000010101110111000000000000000" "01000010110110101100000000000000" "01000010111110100000000000000000" "01000011000011001010000000000000" "01000011000111000100000000000000" "01000011001010111110000000000000" "01000011001110111000000000000000" "01000011010010110010000000000000" "01000011010110101100000000000000" "01000011011010100110000000000000" "01000011011110100000000000000000" "01000011100001001101000000000000" "01000011100011001010000000000000" "01000011100101000111000000000000" "01000011100111000100000000000000" "01000011101001000001000000000000" "01000011101010111110000000000000" "01000011101100111011000000000000" "01000011101110111000000000000000" "01000011110000110101000000000000" "01000011110010110010000000000000" "01000011110100101111000000000000" "01000011110110101100000000000000" "01000011111000101001000000000000" "01000011111010100110000000000000" "01000011111100100011000000000000" "01000011111110100000000000000000" "01000100000000001110100000000000" "01000100000001001101000000000000" "01000100000010001011100000000000" "01000100000011001010000000000000" "01000100000100001000100000000000" "01000100000101000111000000000000" "01000100000110000101100000000000" "01000100000111000100000000000000" "01000100001000000010100000000000" "01000100001001000001000000000000" "01000100001001111111100000000000" "01000100001010111110000000000000" "01000100001011111100100000000000" "01000100001100111011000000000000" "01000100001101111001100000000000" "01000100001110111000000000000000" "01000100001111110110100000000000" "01000100010000110101000000000000" "01000100010001110011100000000000" "01000100010010110010000000000000" "01000100010011110000100000000000" "01000100010100101111000000000000" "01000100010101101101100000000000" "01000100010110101100000000000000" "01000100010111101010100000000000" "01000100011000101001000000000000" "01000100011001100111100000000000" "01000100011010100110000000000000" "01000100011011100100100000000000" "01000100011100100011000000000000" "01000100011101100001100000000000" "01000100011110100000000000000000" "01000100011111011110011110101110" "01000100100000001110100000000000" "01000100100000101101110000101001" "01000100100001001101000000000000" "01000100100001101100001111010111" "01000100100010001011100000000000" "01000100100010101010110000101001" "01000100100011001010000000000000" "01000100100011101001001111010111" "01000100100100001000100000000000" "01000100100100100111110000101001" "01000100100101000111000000000000" "01000100100101100110001111010111" "01000100100110000101100000000000" "01000100100110100100110000101001" "01000100100111000100000000000000" "01000100100111100011001111010111" "01000100101000000010100000000000" "01000100101000100001110000101001" "01000100101001000001000000000000" "01000100101001100000001111010111" "01000100101001111111100000000000" "01000100101010011110110000101001" "01000100101010111110000000000000" "01000100101011011101001111010111" "01000100101011111100100000000000" "01000100101100011011110000101001" "01000100101100111011000000000000" "01000100101101011010001111010111" "01000100101101111001100000000000" "01000100101110011000110000101001" "01000100101110111000000000000000" "01000100101111010111001111010111" "01000100101111110110100000000000" "01000100110000010101110000101001" "01000100110000110101000000000000" "01000100110001010100001111010111" "01000100110001110011100000000000" "01000100110010010010110000101001" "01000100110010110010000000000000" "01000100110011010001001111010111" "01000100110011110000100000000000" "01000100110100001111110000101001" "01000100110100101111000000000000" "01000100110101001110001111010111" "01000100110101101101100000000000" "01000100110110001100110000101001" "01000100110110101100000000000000" "01000100110111001011001111010111" "01000100110111101010100000000000" "01000100111000001001110000101001" "01000100111000101001000000000000" "01000100111001001000001111010111" "01000100111001100111100000000000" "01000100111010000110110000101001" "01000100111010100110000000000000" "01000100111011000101001111010111" "01000100111011100100100000000000" "01000100111100000011110000101001" "01000100111100100011000000000000" "01000100111101000010001111010111" "01000100111101100001100000000000" "01000100111110000000110000101001" "01000100111110100000000000000000" "01000100111110111111001111010111" "01000100111111011110100000000000" "01000100111111111101110000101001" "01000101000000001110100000000000" "01000101000000011110000111101100" "01000101000000101101110000000000" "01000101000000111101011000010100" "01000101000001001101000000000000" "01000101000001011100100111101100" "01000101000001101100010000000000" "01000101000001111011111000010100" "01000101000010001011100000000000" "01000101000010011011000111101100" "01000101000010101010110000000000" "01000101000010111010011000010100" "01000101000011001010000000000000" "01000101000011011001100111101100" "01000101000011101001010000000000" "01000101000011111000111000010100" "01000101000100001000100000000000" "01000101000100011000000111101100" "01000101000100100111110000000000" "01000101000100110111011000010100" "01000101000101000111000000000000" "01000101000101010110100111101100" "01000101000101100110010000000000" "01000101000101110101111000010100" "01000101000110000101100000000000" "01000101000110010101000111101100" "01000101000110100100110000000000" "01000101000110110100011000010100" "01000101000111000100000000000000" "01000101000111010011100111101100" "01000101000111100011010000000000" "01000101000111110010111000010100" "01000101001000000010100000000000" "01000101001000010010000111101100" "01000101001000100001110000000000" "01000101001000110001011000010100" "01000101001001000001000000000000" "01000101001001010000100111101100" "01000101001001100000010000000000" "01000101001001101111111000010100" "01000101001001111111100000000000" "01000101001010001111000111101100" "01000101001010011110110000000000" "01000101001010101110011000010100" "01000101001010111110000000000000" "01000101001011001101100111101100" "01000101001011011101010000000000" "01000101001011101100111000010100" "01000101001011111100100000000000" "01000101001100001100000111101100" "01000101001100011011110000000000" "01000101001100101011011000010100" "01000101001100111011000000000000" "01000101001101001010100111101100" "01000101001101011010010000000000" "01000101001101101001111000010100" "01000101001101111001100000000000" "01000101001110001001000111101100" "01000101001110011000110000000000" "01000101001110101000011000010100" "01000101001110111000000000000000" "01000101001111000111100111101100" "01000101001111010111010000000000" "01000101001111100110111000010100" "01000101001111110110100000000000" "01000101010000000110000111101100" "01000101010000010101110000000000" "01000101010000100101011000010100" "01000101010000110101000000000000" "01000101010001000100100111101100" "01000101010001010100010000000000" "01000101010001100011111000010100" "01000101010001110011100000000000" "01000101010010000011000111101100" "01000101010010010010110000000000" "01000101010010100010011000010100" "01000101010010110010000000000000" "01000101010011000001100111101100" "01000101010011010001010000000000" "01000101010011100000111000010100" "01000101010011110000100000000000" "01000101010100000000000111101100" "01000101010100001111110000000000" "01000101010100011111011000010100" "01000101010100101111000000000000" "01000101010100111110100111101100" "01000101010101001110010000000000" "01000101010101011101111000010100" "01000101010101101101100000000000" "01000101010101111101000111101100" "01000101010110001100110000000000" "01000101010110011100011000010100" "01000101010110101100000000000000" "01000101010110111011100111101100" "01000101010111001011010000000000" "01000101010111011010111000010100" "01000101010111101010100000000000" "01000101010111111010000111101100" "01000101011000001001110000000000" "01000101011000011001011000010100" "01000101011000101001000000000000" "01000101011000111000100111101100" "01000101011001001000010000000000" "01000101011001010111111000010100" "01000101011001100111100000000000" "01000101011001110111000111101100" "01000101011010000110110000000000" "01000101011010010110011000010100" "01000101011010100110000000000000" "01000101011010110101100111101100" "01000101011011000101010000000000" "01000101011011010100111000010100" "01000101011011100100100000000000" "01000101011011110100000111101100" "01000101011100000011110000000000" "01000101011100010011011000010100" "01000101011100100011000000000000" "01000101011100110010100111101100" "01000101011101000010010000000000" "01000101011101010001111000010100" "01000101011101100001100000000000" "01000101011101110001000111101100" "01000101011110000000110000000000" "01000101011110010000011000010100" "01000101011110100000000000000000" "01000101011110101111100111101100" "01000101011110111111010000000000" "01000101011111001110111000010100" "01000101011111011110100000000000" "01000101011111101110000111101100" "01000101011111111101110000000000" "01000101100000000110101100001010" "01000101100000001110100000000000" "01000101100000010110010011110110" "01000101100000011110001000000000" "01000101100000100101111100001010" "01000101100000101101110000000000" "01000101100000110101100011110110" "01000101100000111101011000000000" "01000101100001000101001100001010" "01000101100001001101000000000000" "01000101100001010100110011110110" "01000101100001011100101000000000" "01000101100001100100011100001010" "01000101100001101100010000000000" "01000101100001110100000011110110" "01000101100001111011111000000000" "01000101100010000011101100001010" "01000101100010001011100000000000" "01000101100010010011010011110110" "01000101100010011011001000000000" "01000101100010100010111100001010" "01000101100010101010110000000000" "01000101100010110010100011110110" "01000101100010111010011000000000" "01000101100011000010001100001010" "01000101100011001010000000000000" "01000101100011010001110011110110" "01000101100011011001101000000000" "01000101100011100001011100001010" "01000101100011101001010000000000" "01000101100011110001000011110110" "01000101100011111000111000000000" "01000101100100000000101100001010" "01000101100100001000100000000000" "01000101100100010000010011110110" "01000101100100011000001000000000" "01000101100100011111111100001010" "01000101100100100111110000000000" "01000101100100101111100011110110" "01000101100100110111011000000000" "01000101100100111111001100001010" "01000101100101000111000000000000" "01000101100101001110110011110110" "01000101100101010110101000000000" "01000101100101011110011100001010" "01000101100101100110010000000000" "01000101100101101110000011110110" "01000101100101110101111000000000" "01000101100101111101101100001010" "01000101100110000101100000000000" "01000101100110001101010011110110" "01000101100110010101001000000000" "01000101100110011100111100001010" "01000101100110100100110000000000" "01000101100110101100100011110110" "01000101100110110100011000000000" "01000101100110111100001100001010" "01000101100111000100000000000000" "01000101100111001011110011110110" "01000101100111010011101000000000" "01000101100111011011011100001010" "01000101100111100011010000000000" "01000101100111101011000011110110" "01000101100111110010111000000000" "01000101100111111010101100001010" "01000101101000000010100000000000" "01000101101000001010010011110110" "01000101101000010010001000000000" "01000101101000011001111100001010" "01000101101000100001110000000000" "01000101101000101001100011110110" "01000101101000110001011000000000" "01000101101000111001001100001010" "01000101101001000001000000000000" "01000101101001001000110011110110" "01000101101001010000101000000000" "01000101101001011000011100001010" "01000101101001100000010000000000" "01000101101001101000000011110110" "01000101101001101111111000000000" "01000101101001110111101100001010" "01000101101001111111100000000000" "01000101101010000111010011110110" "01000101101010001111001000000000" "01000101101010010110111100001010" "01000101101010011110110000000000" "01000101101010100110100011110110" "01000101101010101110011000000000" "01000101101010110110001100001010" "01000101101010111110000000000000" "01000101101011000101110011110110" "01000101101011001101101000000000" "01000101101011010101011100001010" "01000101101011011101010000000000" "01000101101011100101000011110110" "01000101101011101100111000000000" "01000101101011110100101100001010" "01000101101011111100100000000000" "01000101101100000100010011110110" "01000101101100001100001000000000" "01000101101100010011111100001010" "01000101101100011011110000000000" "01000101101100100011100011110110" "01000101101100101011011000000000" "01000101101100110011001100001010" "01000101101100111011000000000000" "01000101101101000010110011110110" "01000101101101001010101000000000" "01000101101101010010011100001010" "01000101101101011010010000000000" "01000101101101100010000011110110" "01000101101101101001111000000000" "01000101101101110001101100001010" "01000101101101111001100000000000" "01000101101110000001010011110110" "01000101101110001001001000000000" "01000101101110010000111100001010" "01000101101110011000110000000000" "01000101101110100000100011110110" "01000101101110101000011000000000" "01000101101110110000001100001010" "01000101101110111000000000000000" "01000101101110111111110011110110" "01000101101111000111101000000000" "01000101101111001111011100001010" "01000101101111010111010000000000" "01000101101111011111000011110110" "01000101101111100110111000000000" "01000101101111101110101100001010" "01000101101111110110100000000000" "01000101101111111110010011110110" "01000101110000000110001000000000" "01000101110000001101111100001010" "01000101110000010101110000000000" "01000101110000011101100011110110" "01000101110000100101011000000000" "01000101110000101101001100001010" "01000101110000110101000000000000" "01000101110000111100110011110110" "01000101110001000100101000000000" "01000101110001001100011100001010" "01000101110001010100010000000000" "01000101110001011100000011110110" "01000101110001100011111000000000" "01000101110001101011101100001010" "01000101110001110011100000000000" "01000101110001111011010011110110" "01000101110010000011001000000000" "01000101110010001010111100001010" "01000101110010010010110000000000" "01000101110010011010100011110110" "01000101110010100010011000000000" "01000101110010101010001100001010" "01000101110010110010000000000000" "01000101110010111001110011110110" "01000101110011000001101000000000" "01000101110011001001011100001010" "01000101110011010001010000000000" "01000101110011011001000011110110" "01000101110011100000111000000000" "01000101110011101000101100001010" "01000101110011110000100000000000" "01000101110011111000010011110110" "01000101110100000000001000000000" "01000101110100000111111100001010" "01000101110100001111110000000000" "01000101110100010111100011110110" "01000101110100011111011000000000" "01000101110100100111001100001010" "01000101110100101111000000000000" "01000101110100110110110011110110" "01000101110100111110101000000000" "01000101110101000110011100001010" "01000101110101001110010000000000" "01000101110101010110000011110110" "01000101110101011101111000000000" "01000101110101100101101100001010" "01000101110101101101100000000000" "01000101110101110101010011110110" "01000101110101111101001000000000" "01000101110110000100111100001010" "01000101110110001100110000000000" "01000101110110010100100011110110" "01000101110110011100011000000000" "01000101110110100100001100001010" "01000101110110101100000000000000" "01000101110110110011110011110110" "01000101110110111011101000000000" "01000101110111000011011100001010" "01000101110111001011010000000000" "01000101110111010011000011110110" "01000101110111011010111000000000" "01000101110111100010101100001010" "01000101110111101010100000000000" "01000101110111110010010011110110" "01000101110111111010001000000000" "01000101111000000001111100001010" "01000101111000001001110000000000" "01000101111000010001100011110110" "01000101111000011001011000000000" "01000101111000100001001100001010" "01000101111000101001000000000000" "01000101111000110000110011110110" "01000101111000111000101000000000" "01000101111001000000011100001010" "01000101111001001000010000000000" "01000101111001010000000011110110" "01000101111001010111111000000000" "01000101111001011111101100001010" "01000101111001100111100000000000" "01000101111001101111010011110110" "01000101111001110111001000000000" "01000101111001111110111100001010" "01000101111010000110110000000000" "01000101111010001110100011110110" "01000101111010010110011000000000" "01000101111010011110001100001010" "01000101111010100110000000000000" "01000101111010101101110011110110" "01000101111010110101101000000000" "01000101111010111101011100001010" "01000101111011000101010000000000" "01000101111011001101000011110110" "01000101111011010100111000000000" "01000101111011011100101100001010" "01000101111011100100100000000000" "01000101111011101100010011110110" "01000101111011110100001000000000" "01000101111011111011111100001010" "01000101111100000011110000000000" "01000101111100001011100011110110" "01000101111100010011011000000000" "01000101111100011011001100001010" "01000101111100100011000000000000" "01000101111100101010110011110110" "01000101111100110010101000000000" "01000101111100111010011100001010" "01000101111101000010010000000000" "01000101111101001010000011110110" "01000101111101010001111000000000" "01000101111101011001101100001010" "01000101111101100001100000000000" "01000101111101101001010011110110" "01000101111101110001001000000000" "01000101111101111000111100001010" "01000101111110000000110000000000" "01000101111110001000100011110110" "01000101111110010000011000000000" "01000101111110011000001100001010" "11000101111110100000000000000000" "11000101111110011000001100001010" "11000101111110010000011000000000" "11000101111110001000100011110110" "11000101111110000000110000000000" "11000101111101111000111100001010" "11000101111101110001001000000000" "11000101111101101001010011110110" "11000101111101100001100000000000" "11000101111101011001101100001010" "11000101111101010001111000000000" "11000101111101001010000011110110" "11000101111101000010010000000000" "11000101111100111010011100001010" "11000101111100110010101000000000" "11000101111100101010110011110110" "11000101111100100011000000000000" "11000101111100011011001100001010" "11000101111100010011011000000000" "11000101111100001011100011110110" "11000101111100000011110000000000" "11000101111011111011111100001010" "11000101111011110100001000000000" "11000101111011101100010011110110" "11000101111011100100100000000000" "11000101111011011100101100001010" "11000101111011010100111000000000" "11000101111011001101000011110110" "11000101111011000101010000000000" "11000101111010111101011100001010" "11000101111010110101101000000000" "11000101111010101101110011110110" "11000101111010100110000000000000" "11000101111010011110001100001010" "11000101111010010110011000000000" "11000101111010001110100011110110" "11000101111010000110110000000000" "11000101111001111110111100001010" "11000101111001110111001000000000" "11000101111001101111010011110110" "11000101111001100111100000000000" "11000101111001011111101100001010" "11000101111001010111111000000000" "11000101111001010000000011110110" "11000101111001001000010000000000" "11000101111001000000011100001010" "11000101111000111000101000000000" "11000101111000110000110011110110" "11000101111000101001000000000000" "11000101111000100001001100001010" "11000101111000011001011000000000" "11000101111000010001100011110110" "11000101111000001001110000000000" "11000101111000000001111100001010" "11000101110111111010001000000000" "11000101110111110010010011110110" "11000101110111101010100000000000" "11000101110111100010101100001010" "11000101110111011010111000000000" "11000101110111010011000011110110" "11000101110111001011010000000000" "11000101110111000011011100001010" "11000101110110111011101000000000" "11000101110110110011110011110110" "11000101110110101100000000000000" "11000101110110100100001100001010" "11000101110110011100011000000000" "11000101110110010100100011110110" "11000101110110001100110000000000" "11000101110110000100111100001010" "11000101110101111101001000000000" "11000101110101110101010011110110" "11000101110101101101100000000000" "11000101110101100101101100001010" "11000101110101011101111000000000" "11000101110101010110000011110110" "11000101110101001110010000000000" "11000101110101000110011100001010" "11000101110100111110101000000000" "11000101110100110110110011110110" "11000101110100101111000000000000" "11000101110100100111001100001010" "11000101110100011111011000000000" "11000101110100010111100011110110" "11000101110100001111110000000000" "11000101110100000111111100001010" "11000101110100000000001000000000" "11000101110011111000010011110110" "11000101110011110000100000000000" "11000101110011101000101100001010" "11000101110011100000111000000000" "11000101110011011001000011110110" "11000101110011010001010000000000" "11000101110011001001011100001010" "11000101110011000001101000000000" "11000101110010111001110011110110" "11000101110010110010000000000000" "11000101110010101010001100001010" "11000101110010100010011000000000" "11000101110010011010100011110110" "11000101110010010010110000000000" "11000101110010001010111100001010" "11000101110010000011001000000000" "11000101110001111011010011110110" "11000101110001110011100000000000" "11000101110001101011101100001010" "11000101110001100011111000000000" "11000101110001011100000011110110" "11000101110001010100010000000000" "11000101110001001100011100001010" "11000101110001000100101000000000" "11000101110000111100110011110110" "11000101110000110101000000000000" "11000101110000101101001100001010" "11000101110000100101011000000000" "11000101110000011101100011110110" "11000101110000010101110000000000" "11000101110000001101111100001010" "11000101110000000110001000000000" "11000101101111111110010011110110" "11000101101111110110100000000000" "11000101101111101110101100001010" "11000101101111100110111000000000" "11000101101111011111000011110110" "11000101101111010111010000000000" "11000101101111001111011100001010" "11000101101111000111101000000000" "11000101101110111111110011110110" "11000101101110111000000000000000" "11000101101110110000001100001010" "11000101101110101000011000000000" "11000101101110100000100011110110" "11000101101110011000110000000000" "11000101101110010000111100001010" "11000101101110001001001000000000" "11000101101110000001010011110110" "11000101101101111001100000000000" "11000101101101110001101100001010" "11000101101101101001111000000000" "11000101101101100010000011110110" "11000101101101011010010000000000" "11000101101101010010011100001010" "11000101101101001010101000000000" "11000101101101000010110011110110" "11000101101100111011000000000000" "11000101101100110011001100001010" "11000101101100101011011000000000" "11000101101100100011100011110110" "11000101101100011011110000000000" "11000101101100010011111100001010" "11000101101100001100001000000000" "11000101101100000100010011110110" "11000101101011111100100000000000" "11000101101011110100101100001010" "11000101101011101100111000000000" "11000101101011100101000011110110" "11000101101011011101010000000000" "11000101101011010101011100001010" "11000101101011001101101000000000" "11000101101011000101110011110110" "11000101101010111110000000000000" "11000101101010110110001100001010" "11000101101010101110011000000000" "11000101101010100110100011110110" "11000101101010011110110000000000" "11000101101010010110111100001010" "11000101101010001111001000000000" "11000101101010000111010011110110" "11000101101001111111100000000000" "11000101101001110111101100001010" "11000101101001101111111000000000" "11000101101001101000000011110110" "11000101101001100000010000000000" "11000101101001011000011100001010" "11000101101001010000101000000000" "11000101101001001000110011110110" "11000101101001000001000000000000" "11000101101000111001001100001010" "11000101101000110001011000000000" "11000101101000101001100011110110" "11000101101000100001110000000000" "11000101101000011001111100001010" "11000101101000010010001000000000" "11000101101000001010010011110110" "11000101101000000010100000000000" "11000101100111111010101100001010" "11000101100111110010111000000000" "11000101100111101011000011110110" "11000101100111100011010000000000" "11000101100111011011011100001010" "11000101100111010011101000000000" "11000101100111001011110011110110" "11000101100111000100000000000000" "11000101100110111100001100001010" "11000101100110110100011000000000" "11000101100110101100100011110110" "11000101100110100100110000000000" "11000101100110011100111100001010" "11000101100110010101001000000000" "11000101100110001101010011110110" "11000101100110000101100000000000" "11000101100101111101101100001010" "11000101100101110101111000000000" "11000101100101101110000011110110" "11000101100101100110010000000000" "11000101100101011110011100001010" "11000101100101010110101000000000" "11000101100101001110110011110110" "11000101100101000111000000000000" "11000101100100111111001100001010" "11000101100100110111011000000000" "11000101100100101111100011110110" "11000101100100100111110000000000" "11000101100100011111111100001010" "11000101100100011000001000000000" "11000101100100010000010011110110" "11000101100100001000100000000000" "11000101100100000000101100001010" "11000101100011111000111000000000" "11000101100011110001000011110110" "11000101100011101001010000000000" "11000101100011100001011100001010" "11000101100011011001101000000000" "11000101100011010001110011110110" "11000101100011001010000000000000" "11000101100011000010001100001010" "11000101100010111010011000000000" "11000101100010110010100011110110" "11000101100010101010110000000000" "11000101100010100010111100001010" "11000101100010011011001000000000" "11000101100010010011010011110110" "11000101100010001011100000000000" "11000101100010000011101100001010" "11000101100001111011111000000000" "11000101100001110100000011110110" "11000101100001101100010000000000" "11000101100001100100011100001010" "11000101100001011100101000000000" "11000101100001010100110011110110" "11000101100001001101000000000000" "11000101100001000101001100001010" "11000101100000111101011000000000" "11000101100000110101100011110110" "11000101100000101101110000000000" "11000101100000100101111100001010" "11000101100000011110001000000000" "11000101100000010110010011110110" "11000101100000001110100000000000" "11000101100000000110101100001010" "11000101011111111101110000000000" "11000101011111101110000111101100" "11000101011111011110100000000000" "11000101011111001110111000010100" "11000101011110111111010000000000" "11000101011110101111100111101100" "11000101011110100000000000000000" "11000101011110010000011000010100" "11000101011110000000110000000000" "11000101011101110001000111101100" "11000101011101100001100000000000" "11000101011101010001111000010100" "11000101011101000010010000000000" "11000101011100110010100111101100" "11000101011100100011000000000000" "11000101011100010011011000010100" "11000101011100000011110000000000" "11000101011011110100000111101100" "11000101011011100100100000000000" "11000101011011010100111000010100" "11000101011011000101010000000000" "11000101011010110101100111101100" "11000101011010100110000000000000" "11000101011010010110011000010100" "11000101011010000110110000000000" "11000101011001110111000111101100" "11000101011001100111100000000000" "11000101011001010111111000010100" "11000101011001001000010000000000" "11000101011000111000100111101100" "11000101011000101001000000000000" "11000101011000011001011000010100" "11000101011000001001110000000000" "11000101010111111010000111101100" "11000101010111101010100000000000" "11000101010111011010111000010100" "11000101010111001011010000000000" "11000101010110111011100111101100" "11000101010110101100000000000000" "11000101010110011100011000010100" "11000101010110001100110000000000" "11000101010101111101000111101100" "11000101010101101101100000000000" "11000101010101011101111000010100" "11000101010101001110010000000000" "11000101010100111110100111101100" "11000101010100101111000000000000" "11000101010100011111011000010100" "11000101010100001111110000000000" "11000101010100000000000111101100" "11000101010011110000100000000000" "11000101010011100000111000010100" "11000101010011010001010000000000" "11000101010011000001100111101100" "11000101010010110010000000000000" "11000101010010100010011000010100" "11000101010010010010110000000000" "11000101010010000011000111101100" "11000101010001110011100000000000" "11000101010001100011111000010100" "11000101010001010100010000000000" "11000101010001000100100111101100" "11000101010000110101000000000000" "11000101010000100101011000010100" "11000101010000010101110000000000" "11000101010000000110000111101100" "11000101001111110110100000000000" "11000101001111100110111000010100" "11000101001111010111010000000000" "11000101001111000111100111101100" "11000101001110111000000000000000" "11000101001110101000011000010100" "11000101001110011000110000000000" "11000101001110001001000111101100" "11000101001101111001100000000000" "11000101001101101001111000010100" "11000101001101011010010000000000" "11000101001101001010100111101100" "11000101001100111011000000000000" "11000101001100101011011000010100" "11000101001100011011110000000000" "11000101001100001100000111101100" "11000101001011111100100000000000" "11000101001011101100111000010100" "11000101001011011101010000000000" "11000101001011001101100111101100" "11000101001010111110000000000000" "11000101001010101110011000010100" "11000101001010011110110000000000" "11000101001010001111000111101100" "11000101001001111111100000000000" "11000101001001101111111000010100" "11000101001001100000010000000000" "11000101001001010000100111101100" "11000101001001000001000000000000" "11000101001000110001011000010100" "11000101001000100001110000000000" "11000101001000010010000111101100" "11000101001000000010100000000000" "11000101000111110010111000010100" "11000101000111100011010000000000" "11000101000111010011100111101100" "11000101000111000100000000000000" "11000101000110110100011000010100" "11000101000110100100110000000000" "11000101000110010101000111101100" "11000101000110000101100000000000" "11000101000101110101111000010100" "11000101000101100110010000000000" "11000101000101010110100111101100" "11000101000101000111000000000000" "11000101000100110111011000010100" "11000101000100100111110000000000" "11000101000100011000000111101100" "11000101000100001000100000000000" "11000101000011111000111000010100" "11000101000011101001010000000000" "11000101000011011001100111101100" "11000101000011001010000000000000" "11000101000010111010011000010100" "11000101000010101010110000000000" "11000101000010011011000111101100" "11000101000010001011100000000000" "11000101000001111011111000010100" "11000101000001101100010000000000" "11000101000001011100100111101100" "11000101000001001101000000000000" "11000101000000111101011000010100" "11000101000000101101110000000000" "11000101000000011110000111101100" "11000101000000001110100000000000" "11000100111111111101110000101001" "11000100111111011110100000000000" "11000100111110111111001111010111" "11000100111110100000000000000000" "11000100111110000000110000101001" "11000100111101100001100000000000" "11000100111101000010001111010111" "11000100111100100011000000000000" "11000100111100000011110000101001" "11000100111011100100100000000000" "11000100111011000101001111010111" "11000100111010100110000000000000" "11000100111010000110110000101001" "11000100111001100111100000000000" "11000100111001001000001111010111" "11000100111000101001000000000000" "11000100111000001001110000101001" "11000100110111101010100000000000" "11000100110111001011001111010111" "11000100110110101100000000000000" "11000100110110001100110000101001" "11000100110101101101100000000000" "11000100110101001110001111010111" "11000100110100101111000000000000" "11000100110100001111110000101001" "11000100110011110000100000000000" "11000100110011010001001111010111" "11000100110010110010000000000000" "11000100110010010010110000101001" "11000100110001110011100000000000" "11000100110001010100001111010111" "11000100110000110101000000000000" "11000100110000010101110000101001" "11000100101111110110100000000000" "11000100101111010111001111010111" "11000100101110111000000000000000" "11000100101110011000110000101001" "11000100101101111001100000000000" "11000100101101011010001111010111" "11000100101100111011000000000000" "11000100101100011011110000101001" "11000100101011111100100000000000" "11000100101011011101001111010111" "11000100101010111110000000000000" "11000100101010011110110000101001" "11000100101001111111100000000000" "11000100101001100000001111010111" "11000100101001000001000000000000" "11000100101000100001110000101001" "11000100101000000010100000000000" "11000100100111100011001111010111" "11000100100111000100000000000000" "11000100100110100100110000101001" "11000100100110000101100000000000" "11000100100101100110001111010111" "11000100100101000111000000000000" "11000100100100100111110000101001" "11000100100100001000100000000000" "11000100100011101001001111010111" "11000100100011001010000000000000" "11000100100010101010110000101001" "11000100100010001011100000000000" "11000100100001101100001111010111" "11000100100001001101000000000000" "11000100100000101101110000101001" "11000100100000001110100000000000" "11000100011111011110011110101110" "11000100011110100000000000000000" "11000100011101100001100000000000" "11000100011100100011000000000000" "11000100011011100100100000000000" "11000100011010100110000000000000" "11000100011001100111100000000000" "11000100011000101001000000000000" "11000100010111101010100000000000" "11000100010110101100000000000000" "11000100010101101101100000000000" "11000100010100101111000000000000" "11000100010011110000100000000000" "11000100010010110010000000000000" "11000100010001110011100000000000" "11000100010000110101000000000000" "11000100001111110110100000000000" "11000100001110111000000000000000" "11000100001101111001100000000000" "11000100001100111011000000000000" "11000100001011111100100000000000" "11000100001010111110000000000000" "11000100001001111111100000000000" "11000100001001000001000000000000" "11000100001000000010100000000000" "11000100000111000100000000000000" "11000100000110000101100000000000" "11000100000101000111000000000000" "11000100000100001000100000000000" "11000100000011001010000000000000" "11000100000010001011100000000000" "11000100000001001101000000000000" "11000100000000001110100000000000" "11000011111110100000000000000000" "11000011111100100011000000000000" "11000011111010100110000000000000" "11000011111000101001000000000000" "11000011110110101100000000000000" "11000011110100101111000000000000" "11000011110010110010000000000000" "11000011110000110101000000000000" "11000011101110111000000000000000" "11000011101100111011000000000000" "11000011101010111110000000000000" "11000011101001000001000000000000" "11000011100111000100000000000000" "11000011100101000111000000000000" "11000011100011001010000000000000" "11000011100001001101000000000000" "11000011011110100000000000000000" "11000011011010100110000000000000" "11000011010110101100000000000000" "11000011010010110010000000000000" "11000011001110111000000000000000" "11000011001010111110000000000000" "11000011000111000100000000000000" "11000011000011001010000000000000" "11000010111110100000000000000000" "11000010110110101100000000000000" "11000010101110111000000000000000" "11000010100111000100000000000000" "11000010011110100000000000000000" "11000010001110111000000000000000" "11000001111110100000000000000000" "11000001011110100000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 272
set hasByteEnable 0
set MemName music_p
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 4
set AddrWd 2
set TrueReset 0
set IsROM 1
set ROMData { "10111110110000000000000000000000" "10111110000000000000000000000000" "00111110000000000000000000000000" "00111110110000000000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 273
set hasByteEnable 0
set MemName music_theta
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 361
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "11000010101101000000000000000000" "11000010101100110000000000000000" "11000010101100100000000000000000" "11000010101100010000000000000000" "11000010101100000000000000000000" "11000010101011110000000000000000" "11000010101011100000000000000000" "11000010101011010000000000000000" "11000010101011000000000000000000" "11000010101010110000000000000000" "11000010101010100000000000000000" "11000010101010010000000000000000" "11000010101010000000000000000000" "11000010101001110000000000000000" "11000010101001100000000000000000" "11000010101001010000000000000000" "11000010101001000000000000000000" "11000010101000110000000000000000" "11000010101000100000000000000000" "11000010101000010000000000000000" "11000010101000000000000000000000" "11000010100111110000000000000000" "11000010100111100000000000000000" "11000010100111010000000000000000" "11000010100111000000000000000000" "11000010100110110000000000000000" "11000010100110100000000000000000" "11000010100110010000000000000000" "11000010100110000000000000000000" "11000010100101110000000000000000" "11000010100101100000000000000000" "11000010100101010000000000000000" "11000010100101000000000000000000" "11000010100100110000000000000000" "11000010100100100000000000000000" "11000010100100010000000000000000" "11000010100100000000000000000000" "11000010100011110000000000000000" "11000010100011100000000000000000" "11000010100011010000000000000000" "11000010100011000000000000000000" "11000010100010110000000000000000" "11000010100010100000000000000000" "11000010100010010000000000000000" "11000010100010000000000000000000" "11000010100001110000000000000000" "11000010100001100000000000000000" "11000010100001010000000000000000" "11000010100001000000000000000000" "11000010100000110000000000000000" "11000010100000100000000000000000" "11000010100000010000000000000000" "11000010100000000000000000000000" "11000010011111100000000000000000" "11000010011111000000000000000000" "11000010011110100000000000000000" "11000010011110000000000000000000" "11000010011101100000000000000000" "11000010011101000000000000000000" "11000010011100100000000000000000" "11000010011100000000000000000000" "11000010011011100000000000000000" "11000010011011000000000000000000" "11000010011010100000000000000000" "11000010011010000000000000000000" "11000010011001100000000000000000" "11000010011001000000000000000000" "11000010011000100000000000000000" "11000010011000000000000000000000" "11000010010111100000000000000000" "11000010010111000000000000000000" "11000010010110100000000000000000" "11000010010110000000000000000000" "11000010010101100000000000000000" "11000010010101000000000000000000" "11000010010100100000000000000000" "11000010010100000000000000000000" "11000010010011100000000000000000" "11000010010011000000000000000000" "11000010010010100000000000000000" "11000010010010000000000000000000" "11000010010001100000000000000000" "11000010010001000000000000000000" "11000010010000100000000000000000" "11000010010000000000000000000000" "11000010001111100000000000000000" "11000010001111000000000000000000" "11000010001110100000000000000000" "11000010001110000000000000000000" "11000010001101100000000000000000" "11000010001101000000000000000000" "11000010001100100000000000000000" "11000010001100000000000000000000" "11000010001011100000000000000000" "11000010001011000000000000000000" "11000010001010100000000000000000" "11000010001010000000000000000000" "11000010001001100000000000000000" "11000010001001000000000000000000" "11000010001000100000000000000000" "11000010001000000000000000000000" "11000010000111100000000000000000" "11000010000111000000000000000000" "11000010000110100000000000000000" "11000010000110000000000000000000" "11000010000101100000000000000000" "11000010000101000000000000000000" "11000010000100100000000000000000" "11000010000100000000000000000000" "11000010000011100000000000000000" "11000010000011000000000000000000" "11000010000010100000000000000000" "11000010000010000000000000000000" "11000010000001100000000000000000" "11000010000001000000000000000000" "11000010000000100000000000000000" "11000010000000000000000000000000" "11000001111111000000000000000000" "11000001111110000000000000000000" "11000001111101000000000000000000" "11000001111100000000000000000000" "11000001111011000000000000000000" "11000001111010000000000000000000" "11000001111001000000000000000000" "11000001111000000000000000000000" "11000001110111000000000000000000" "11000001110110000000000000000000" "11000001110101000000000000000000" "11000001110100000000000000000000" "11000001110011000000000000000000" "11000001110010000000000000000000" "11000001110001000000000000000000" "11000001110000000000000000000000" "11000001101111000000000000000000" "11000001101110000000000000000000" "11000001101101000000000000000000" "11000001101100000000000000000000" "11000001101011000000000000000000" "11000001101010000000000000000000" "11000001101001000000000000000000" "11000001101000000000000000000000" "11000001100111000000000000000000" "11000001100110000000000000000000" "11000001100101000000000000000000" "11000001100100000000000000000000" "11000001100011000000000000000000" "11000001100010000000000000000000" "11000001100001000000000000000000" "11000001100000000000000000000000" "11000001011110000000000000000000" "11000001011100000000000000000000" "11000001011010000000000000000000" "11000001011000000000000000000000" "11000001010110000000000000000000" "11000001010100000000000000000000" "11000001010010000000000000000000" "11000001010000000000000000000000" "11000001001110000000000000000000" "11000001001100000000000000000000" "11000001001010000000000000000000" "11000001001000000000000000000000" "11000001000110000000000000000000" "11000001000100000000000000000000" "11000001000010000000000000000000" "11000001000000000000000000000000" "11000000111100000000000000000000" "11000000111000000000000000000000" "11000000110100000000000000000000" "11000000110000000000000000000000" "11000000101100000000000000000000" "11000000101000000000000000000000" "11000000100100000000000000000000" "11000000100000000000000000000000" "11000000011000000000000000000000" "11000000010000000000000000000000" "11000000001000000000000000000000" "11000000000000000000000000000000" "10111111110000000000000000000000" "10111111100000000000000000000000" "10111111000000000000000000000000" "00000000000000000000000000000000" "00111111000000000000000000000000" "00111111100000000000000000000000" "00111111110000000000000000000000" "01000000000000000000000000000000" "01000000001000000000000000000000" "01000000010000000000000000000000" "01000000011000000000000000000000" "01000000100000000000000000000000" "01000000100100000000000000000000" "01000000101000000000000000000000" "01000000101100000000000000000000" "01000000110000000000000000000000" "01000000110100000000000000000000" "01000000111000000000000000000000" "01000000111100000000000000000000" "01000001000000000000000000000000" "01000001000010000000000000000000" "01000001000100000000000000000000" "01000001000110000000000000000000" "01000001001000000000000000000000" "01000001001010000000000000000000" "01000001001100000000000000000000" "01000001001110000000000000000000" "01000001010000000000000000000000" "01000001010010000000000000000000" "01000001010100000000000000000000" "01000001010110000000000000000000" "01000001011000000000000000000000" "01000001011010000000000000000000" "01000001011100000000000000000000" "01000001011110000000000000000000" "01000001100000000000000000000000" "01000001100001000000000000000000" "01000001100010000000000000000000" "01000001100011000000000000000000" "01000001100100000000000000000000" "01000001100101000000000000000000" "01000001100110000000000000000000" "01000001100111000000000000000000" "01000001101000000000000000000000" "01000001101001000000000000000000" "01000001101010000000000000000000" "01000001101011000000000000000000" "01000001101100000000000000000000" "01000001101101000000000000000000" "01000001101110000000000000000000" "01000001101111000000000000000000" "01000001110000000000000000000000" "01000001110001000000000000000000" "01000001110010000000000000000000" "01000001110011000000000000000000" "01000001110100000000000000000000" "01000001110101000000000000000000" "01000001110110000000000000000000" "01000001110111000000000000000000" "01000001111000000000000000000000" "01000001111001000000000000000000" "01000001111010000000000000000000" "01000001111011000000000000000000" "01000001111100000000000000000000" "01000001111101000000000000000000" "01000001111110000000000000000000" "01000001111111000000000000000000" "01000010000000000000000000000000" "01000010000000100000000000000000" "01000010000001000000000000000000" "01000010000001100000000000000000" "01000010000010000000000000000000" "01000010000010100000000000000000" "01000010000011000000000000000000" "01000010000011100000000000000000" "01000010000100000000000000000000" "01000010000100100000000000000000" "01000010000101000000000000000000" "01000010000101100000000000000000" "01000010000110000000000000000000" "01000010000110100000000000000000" "01000010000111000000000000000000" "01000010000111100000000000000000" "01000010001000000000000000000000" "01000010001000100000000000000000" "01000010001001000000000000000000" "01000010001001100000000000000000" "01000010001010000000000000000000" "01000010001010100000000000000000" "01000010001011000000000000000000" "01000010001011100000000000000000" "01000010001100000000000000000000" "01000010001100100000000000000000" "01000010001101000000000000000000" "01000010001101100000000000000000" "01000010001110000000000000000000" "01000010001110100000000000000000" "01000010001111000000000000000000" "01000010001111100000000000000000" "01000010010000000000000000000000" "01000010010000100000000000000000" "01000010010001000000000000000000" "01000010010001100000000000000000" "01000010010010000000000000000000" "01000010010010100000000000000000" "01000010010011000000000000000000" "01000010010011100000000000000000" "01000010010100000000000000000000" "01000010010100100000000000000000" "01000010010101000000000000000000" "01000010010101100000000000000000" "01000010010110000000000000000000" "01000010010110100000000000000000" "01000010010111000000000000000000" "01000010010111100000000000000000" "01000010011000000000000000000000" "01000010011000100000000000000000" "01000010011001000000000000000000" "01000010011001100000000000000000" "01000010011010000000000000000000" "01000010011010100000000000000000" "01000010011011000000000000000000" "01000010011011100000000000000000" "01000010011100000000000000000000" "01000010011100100000000000000000" "01000010011101000000000000000000" "01000010011101100000000000000000" "01000010011110000000000000000000" "01000010011110100000000000000000" "01000010011111000000000000000000" "01000010011111100000000000000000" "01000010100000000000000000000000" "01000010100000010000000000000000" "01000010100000100000000000000000" "01000010100000110000000000000000" "01000010100001000000000000000000" "01000010100001010000000000000000" "01000010100001100000000000000000" "01000010100001110000000000000000" "01000010100010000000000000000000" "01000010100010010000000000000000" "01000010100010100000000000000000" "01000010100010110000000000000000" "01000010100011000000000000000000" "01000010100011010000000000000000" "01000010100011100000000000000000" "01000010100011110000000000000000" "01000010100100000000000000000000" "01000010100100010000000000000000" "01000010100100100000000000000000" "01000010100100110000000000000000" "01000010100101000000000000000000" "01000010100101010000000000000000" "01000010100101100000000000000000" "01000010100101110000000000000000" "01000010100110000000000000000000" "01000010100110010000000000000000" "01000010100110100000000000000000" "01000010100110110000000000000000" "01000010100111000000000000000000" "01000010100111010000000000000000" "01000010100111100000000000000000" "01000010100111110000000000000000" "01000010101000000000000000000000" "01000010101000010000000000000000" "01000010101000100000000000000000" "01000010101000110000000000000000" "01000010101001000000000000000000" "01000010101001010000000000000000" "01000010101001100000000000000000" "01000010101001110000000000000000" "01000010101010000000000000000000" "01000010101010010000000000000000" "01000010101010100000000000000000" "01000010101010110000000000000000" "01000010101011000000000000000000" "01000010101011010000000000000000" "01000010101011100000000000000000" "01000010101011110000000000000000" "01000010101100000000000000000000" "01000010101100010000000000000000" "01000010101100100000000000000000" "01000010101100110000000000000000" "01000010101101000000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 274
set hasByteEnable 0
set MemName music_ref_4oPi_ta2iS
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 256
set AddrRange 10
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000101000101111100110000011011011100100111001000100000101010010100111111100001001110101011111010001111101010011010011011101110000" "0010100010111110011000001101101110010011100100010000010101001010011111110000100111010101111101000111110101001101001101110111000000110110110110001010010101100110010011110001000011100100000100000111111110010100010110001110101011110111101011101111000101011000" "0011011011011000101001010110011001001111000100001110010000010000011111111001010001011000111010101111011110101110111100010101100001101101110010010001101110001110100100001001001101110100101110000000000110010010010010111011101010000010011101000110010010000111" "0110110111001001000110111000111010010000100100110111010010111000000000011001001001001011101110101000001001110100011001001000011100111111100001110111101011000111001011000100101001101001110011111011101000100000100011010111110101001011101011101101000100100001" "0011111110000111011110101100011100101100010010100110100111001111101110100010000010001101011111010100101110101110110100010010000100111010011001110001110000001001101011010001011111011111100100000100111001100100011101011000111001100000110101001100111001111101" "0011101001100111000111000000100110101101000101111101111110010000010011100110010001110101100011100110000011010100110011100111110100100111001000010001011111100010111011110111111001001010000011101100011111111110001001011111111111110111100000010110011000000011" "0010011100100001000101111110001011101111011111100100101000001110110001111111111000100101111111111111011110000001011001100000001111111011110010111100010001100010110101101000001010011011010001111101101101001101100111111011001111001001111100101100001001101101" "1111101111001011110001000110001011010110100000101001101101000111110110110100110110011111101100111100100111110010110000100110110111010011110100011000111111011001101001111001011111111010100010110101110101001001111011101011000111111010111110010111110001011110" "1101001111010001100011111101100110100111100101111111101010001011010111010100100111101110101100011111101011111001011111000101111011001111010000011100111001111101111000101001010010100100101110101001101011111110110101111110110001000111111000110101011101000010" "1100111101000001110011100111110111100010100101001010010010111010100110101111111011010111111011000100011111100011010101110100001000010101100000001100110000010001101111110001111011011010111010101111110000110011111011110000100000100110101111010000110110000111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 275
set hasByteEnable 0
set MemName music_fourth_orde3i2
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 59
set AddrRange 256
set AddrWd 8
set impl_style distributed
set TrueReset 0
set IsROM 1
set ROMData { "10000000000000000000000000000000000000000000000000000000000" "01111111111111110110001000010110001110100010101001001001001" "01111111111111011000100001011010011011100100101101101101010" "01111111111110100111001011010001001011010100011010000100101" "01111111111101100010000110000010000100110011010000110010110" "01111111111100001001010001110111110001110100111111100000101" "01111111111010011100101110111111111110111101110101110010010" "01111111111000011100011101101011011011100000011101111100100" "01111111110110001000011110001101111001011011010111110111010" "01111111110011100000110000111110001101010101110101101110111" "01111111110000100101010110010110001110011100011010110100101" "01111111101101010110001110110010110110011100111100001110110" "01111111101001110011011010110100000001100010000011101000000" "01111111100101111100111010111100101110001110010100000001010" "01111111100001110010101111110010111101010110110000100100000" "01111111011101010100111001111111110001111101000101010110101" "01111111011000100011011010001111010001001001010010010110000" "01111111010011011110010001010000100010000010111000010000110" "01111111001110000101011111110101101101101001100111101010110" "01111111001000011001000110110011111110101101110010000100101" "01111111000010011001000111000011100001100111111101001100100" "01111110111100000101100001011111100100010000011000010111010" "01111110110101011110010111000110010101110101110100000011111" "01111110101110100011101000111001000110110011111011101010101" "01111110100111010101010111111100001000101001010001011001110" "01111110011111110011100101010110101101101100101100100000001" "01111110010111111110010010010011001001000010011001101001010" "01111110001111110101011111111110101110010000011101101010011" "01111110000111011001001111101001110001010010111010100100000" "01111101111110101001100010100111100110001111010110111000110" "01111101110101100110011010001110100001001000000111011100101" "01111101101100001111110111110111110101101110111011011011110" "01111101100010100101111100111111110111010111001010111111101" "01111101011000101000101011000101111000100111101000001111100" "01111101001110011000000011101100001011001011110010110010001" "01111101000011110100001000010111111111100100101101110001011" "01111100111000111100111010110001100100111001011000100010000" "01111100101101110010011100100100001000100110101001110010111" "01111100100010010100101111011101110110001110101101100101101" "01111100010110100011110101001111110111001000000101110010100" "01111100001010011111101111101110010010001100001101011011011" "01111011111110001000100000110000001011100101011110110000100" "01111011110001011110001010001111100100011100111100001000001" "01111011100100100000101110001001011010100111011011101101110" "01111011010111010000001110011101101000010010010110001011101" "01111011001001101100101101001111000011101111111000001111001" "01111010111011110110001100100011011111000010110111001111100" "01111010101101101100101110100011100111101010001000110101000" "01111010011111010000010101011011000110001011011101101000000" "01111010010000100001000011011000011101111101111111001000010" "01111010000001011110111010101101001100110100010000110001100" "01111001110010001001111101101101101010100101110100001111100" "01111001100010100010001110110001001000111000010001000110001" "01111001010010100111110000010001110010100111111111101111111" "01111001000010011010100100101100101011110000010111111000000" "01111000110001111010101110100001110000110011100010010001011" "01111000100001001000010000010011110110100001101110010001010" "01111000010000000011001100101000101001100000001010101110000" "01110111111110101011100110001000101101101111100010101000111" "01110111101101000001011111011111011110010001111101100101000" "01110111011011000100111011011011001100110000100011101111101" "01110111001000110101111100101101000001000000100101111110111" "01110110110110010100100110001000111000101000001001101001010" "01110110100011100000111010100101100110100010011000011100110" "01110110010000011010111100111100110010100011010100010110101" "01110101111101000010110000001010111000111011001111100011100" "01110101101001011000010111001111001001111001101000101001000" "01110101010101011011110101001011101001001111101011000000100" "01110101000001001101001101000101001101110010010011100100101" "01110100101100101100100010000011100000111011111001111000111" "01110100010111111001110111010000111110001101011101101101110" "01110100000010110101001111111010110010101111011001000110111" "01110011101101011110101111010000111100110001110111001001101" "01110011010111110110011000100110001011001100101111010101010" "01110011000001111100001111001111111100111111000101101110110" "01110010101011110000010110100110100000101110001111111111100" "01110010010101010010110010000100110100000100011111010001100" "01110001111110100011100101001000100011001111001111001010001" "01110001100111100010110011010010001000011100111001101010001" "01110001010000010000100000000100101011011010010000011001010" "01110000111000101100101111000110000000101111011011000000111" "01110000100000110111100011111110101001011100011010111011111" "01110000001000110001000010011001110010010101010100100001110" "01101111110000011001001110000101010011011101111101110001110" "01101111010111110000001010110001101111100101010010100100000" "01101110111110110101111100010010010011100000001110100101100" "01101110100101101010100110011100110101100100001101000110111" "01101110001100001110001101001001110101000001001110100000010" "01101101110010100000110100010100011001011011100011110011101" "01101101011000100010011111111010010010000101000000010000111" "01101100111110010011010011111011110101010101110001000011011" "01101100100011110011010100011100000000000100111011001110000" "01101100001001000010100101100000010101000000011111111011101" "01101011101110000001001011010000111100000101000111001100000" "01101011010010101111001001111000100001110101010000111111111" "01101010110111001100100101100100010110110000001101001110111" "01101010011011011001100010100100001110101000011010001001010" "01101001111111010110000101001010011111111001101001101111100" "01101001100011000010010001101100000010111110101110000100001" "01101001000110011110001100100000010001100110101100011110001" "01101000101001101001111010000001000110001001111000000100100" "01101000001100100101011110101010111010111110010011010111001" "01100111101111010000111110111100101001101011111001001101111" "01100111010001101100011111010111101010100000001101010010110" "01100110110011111000000100011111110011100001110011111111110" "01100110010101110011110010111011011000000011010010000101101" "01100101110111011111101111010011000111110101110100000011110" "01100101011000111011111110010010001110011011011101010111100" "01100100111010001000100100100110010010011000111111101010001" "01100100011011000101100110111111010100100111011010000100100" "01100011111011110011001010001111101111100101000000110000011" "01100011011100010001010011001100010110100110001100101101000" "01100010111100100000000110101100010101000101110011111111101" "01100010011100011111101001101001001101110101001010100110101" "01100001111100010000000000111110111010001011101011110111100" "01100001011011110001010001101011101001010110001100101110000" "01100000111011000011100000101111111111100101110110110011111" "01100000011010000110110011001110110101011110101100101011010" "01011111111000111011001110001101010111000101110110111111000" "01011111010111100000110110110011000011001111011011000101001" "01011110110101110111110010001001101010101011111010111000000" "01011110010100000000000101011101001111010101011110001111100" "01011101110001111001110101111100000011011100100110000001010" "01011101001111100101001000110110101000110100101000110000100" "01011100101101000010000011011111101111111111111001010101100" "01011100001010010000101011001100010111011011010111100011100" "01011011100111010001000101010011101010101010001010110110100" "01011011000100000011010111001111000001100000100111010000101" "01100100100001111110110101010001000100001011010001100001001" "01100100100001111100001111111001100111000000000111000100011" "01100100100001110100011111110011011110110001111000010001101" "01100100100001100111100100111111011001011010010101000110100" "01100100100001010101011111011110100011011001100111110111111" "01100100100000111110001111010010100111110110001100110110011" "01100100100000100001110100011101110000011100100110011011001" "01100100100000000000001111000010100101011111001101111101010" "01100100011111011001011111000100001101110110000001001111101" "01100100011110101101100100100110001110111110001100100110011" "01100100011101111100011111101100101100111001110001100110001" "01100100011101000110010000011100001010001111001010011010001" "01100100011100001010110110111001101000001000101001110100010" "01100100011011001010010011001010100110010011110111110100100" "01100100011010000100100101010101000011000001001010111010010" "01100100011000111001101101011111011011000010111101111101001" "01100100010111101001101011110000101001101101000010101111100" "01100100010110010100100000010000001000110011110001001001010" "01100100010100111010001011000101110000101011010010111100010" "01100100010011011010101100011001111000000110101100010001000" "01100100010001110110000100010101010100010111000000101101011" "01100100010000001100010011000001011001001010010101000011110" "01100100001110011101011000100111111000101010101101101100100" "01100100001100101001010101010011000011011101001001101000001" "01100100001010110000001001001101101000100000011010001011010" "01100100001000110001110100100010110101001011110111010101100" "01100100000110101110010111011110010101001110010000110000011" "01100100000100100101110010001100010010101100011011011001111" "01100100000010011000000100111001010101111111111011111000010" "01100100000000000101001111110010100101110101101101011001010" "01100011111101101101010011000101100111001100100101011010101" "01100011111011010000001111000000011101010011110011111110110" "01100011111000101110000011110001101001101001100000101010110" "01100011110110000110110001101000001011111001000100010000111" "01100011110011011010011000110011100001111001011111000110000" "01100011110000101000111001100011100111101011101100000001100" "01100011101101110010010100001000110111011000110000001010100" "01100011101010110110101000110100001001010000000111001111111" "01100011100111110101110111110110110011100101101100101100111" "01100011100100110000000001100010101010110000000001011001100" "01100011100001100101000110001010000001000110001110001000100" "01100011011110010101000101111111100110111110000010110000111" "01100011011011000000000001010110101010101001110010000101111" "01100011010111100101111000100010111000010110001010011011001" "01100011010100000110101011111000011010001000001010110110011" "01100011010000100010011011101011110111111010110101010000010" "01100011001100111001001000010010010111011100111101000001101" "01100011001001001010110010000001011100001110110010100000000" "01100011000101010111011001001111000111011111101011001000101" "01100011000001011110111110010001111000001011100110011010101" "01100010111101100001100001100000101010111000101111011111100" "01100010111001011111000011010010111001110100111011100100001" "01100010110101010111100100000000011100110011000101000001001" "01100010110001001011000100000001101001001000100011010011001" "01100010101100111001100011101111010001101010011111100100000" "01100010101000100011000011100010100110101011000110000100100" "01100010100100000111100011110101010101110110110100010110101" "01100010011111100111000101000001101010010001100100001010011" "01100010011011000001100111100010001100010011110011001011001" "01100010010110010111001011110010000001100111100111100000001" "01100010010001100111110010001100101101000101110000111110100" "01100010001100110011011011001110001110110010100111001110101" "01100010000111111010000111010011000011111011000100100101000" "01100010000010111011110110111000000110110001011101101101010" "01100001111101111000101010011010101110101010010110001011000" "01100001111000110000100010011000101111111001010001101101011" "01100001110011100011011111010000011011101101100010010111110" "01100001101110010001100001100000100000001110110011100000001" "01100001101000111010101001101000001000011001110001100010011" "01100001100011011110111000000110111011111100101110101000110" "01100001011101111110001101011100111111010100000100001100110" "01100001011000011000101010001010110011100110110001001011110" "01100001010010101110001110110001010110100010110101010101110" "01100001001100111110111011110010000010011001101001010001001" "01100001000111001010110001101110101101111100010011011000011" "01100001000001010001110001001001101100010111111001101110111" "01100000111011010011111010100101101101010001110000101111010" "01100000110101010001001110100101111100100011100110110010100" "01100000101111001001101101101110000010010111101100110010000" "01100000101000111101011000100010000011000100111011100010011" "01100000100010101100001111100110011111001010110110001001110" "01100000011100010110010011100000010011001101101001010001010" "01100000010101111011100100110100110111110010000111010010100" "01100000001111011100000100001010000001011001100001100000001" "01100000001000110111110010000110000000011101011110001011111" "01100000000010001110101111001111100001001011101011101001110" "01011111111011100000111100001101101011100001110000010000101" "01011111110100101110011001101000000011001000110111011001000" "01011111101101110111001000000110100111010001011011011010011" "01011111100110111011001000010001110010101110101100101000000" "01011111011111111010011010110010011011110010010101001101001" "01011111011000110101000000010001110100000111111010001001111" "01011111010001101010111001011001101000110000011001010000100" "01011111001010011100000110110100000001111101100100000011110" "01011111000011001000101001001011100011001101010111111000010" "01011110111011110000100001001011001011000101010010110110100" "01011110110100010011101111011110010011001101100110000010000" "01011110101100110010010100110000110000001100100100100001101" "01011110100101001100010001101110110001100001101111101110011" "01011110011101100001100111000101000001100001000000100101000" "01011110010101110010010101100000100101001101101101111101111" "01011110001101111110011101101110111100010101110000001010101" "01011110000110000110000000011110000001001100100001011001111" "01011101111110001000111110011100001000100101111011100010010" "01011101110110000111011000011000000001110001010010110101010" "01011101101110000001001111000000110110010100001101111010000" "01011101100101110110100011000110001010000101011010110001000" "01011101011101100111010101010111111011000111100001000001101" "01011101010101010011100110100110100001100011110001010001011" "01011101001100111011010111100010101111100100110001100101110" "01011101000100011110101000111101110001010001000111010010100" "01011100111011111101011011101001001100100101111101110010011" "01011100110011010111110000010111000001010001101010101101110" "01011100101010101101100111111001101000101110001111001110010" "01011100100001111111000011000011110101111011110110100000000" "01011100011001001100000010101000110101011011010001100001110" "01011100010000010100100111011100001101001000010000000100011" "01011100000111011000110010010001111100010011110110111010011" "01011011111110011000100011111110011011011110110011010111101" "01011011110101010011111101010110011100010011101100000011001" "01011011101100001010111111001111001001100001001110111001110" "01011011100010111101101010011110000110110100011100100101000" "01011011011001101011111111111001010000110010110001000011111" "01011011010000010110000000010110111100110100001001101000101" "01011011000110111011101100101101111000111101001000001011011" "01011010111101011101000101110101001011111000110011110001100" "01011010110011111010001100100100010100110010110110101100000" "01011010101010010011000001110011001011010001011001101100100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_1P_LUTRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 276
set hasByteEnable 0
set MemName music_fourth_orde4jc
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 52
set AddrRange 256
set AddrWd 8
set impl_style distributed
set TrueReset 0
set IsROM 1
set ROMData { "0000000000000000000000000000000000000000000000000100" "1111111101100010000101100101101010100010100000110110" "1111111011000100001011100011101011100110111111101000" "1111111000100110010010010010011001101011101010001000" "1111110110001000011010001010001011000111001101110110" "1111110011101010100011100011010110000101000110010011" "1111110001001100101110110110010000100001101110110101" "1111101110101110111100011011010000000110110000011010" "1111101100010001001100101010101010000111010010011111" "1111101001110011011111111100110011011100001010110010" "1111100111010101110110101010000000100000001100111000" "1111100100111000010001001010100101001100011010001001" "1111100010011010101111110110110100110100010010101011" "1111011111111101010011000111000010000010000100001101" "1111011101011111111011010011011110110010111010101101" "1111011011000010101000110100011100010011010001110001" "1111011000100101011100000010001010111011000011010000" "1111010110001000010101010100111010001001111010000110" "1111010011101011010101000100111000100011100000110001" "1111010001001110011011101010010011101011110011111100" "1111001110110001101001011101011000000011010010110010" "1111001100010100111110110110010001000011001111111101" "1111001001111000011100001101001000111010000011011100" "1111000111011100000001111010001000100111011100000010" "1111000100111111110000010101010111111000110000100111" "1111000010100011100111110110111101000101010010110111" "1111000000000111101000110110111101001010100000100100" "1110111101101011110011101101011011101000010110101000" "1110111011010000001000110010011010011101100011100101" "1110111000110100101000011101111010000011111010010010" "1110110110011001010011000111111001001100100100001000" "1110110011111110001001001000010100111100010110101011" "1110110001100011001010110111001000101000000100011000" "1110101111001000011000101100001101110000110010100111" "1110101100101101110010111111011100000000001100110010" "1110101010010011011010001000101001000100111000111000" "1110100111111001001110011111101000101110101100100000" "1110100101011111010000011100001100101011000001110001" "1110100011000101100000010110000100100001001011111010" "1110100000101011111110100100111101101110101110000000" "1110011110010010101011100000100011100011110000110011" "1110011011111001100111100000011110111111011000001000" "1110011001100000110010111100010110101011111010101000" "1110010111001000001110001011101110111011011000101001" "1110010100101111111001100110001001100011110010010101" "1110010010010111110101100011000101111011100001110011" "1110010000000000000010011010000000110101110000110000" "1110001101101000100000100010010100011110110011001110" "1110001011010001010000010011011000011000011110111001" "1110001000111010010010000100100001010110100101011011" "1110000110100011100110001101000001011011001101110010" "1110000100001101001101000100000111110011001110101100" "1110000001110111000111000001000000110010101001001010" "1101111111100001010100011010110101110001000100000000" "1101111101001011110101101000101101000110000110011001" "1101111010110110101011000001101010000101110101001100" "1101111000100001110100111100101100111101001110001011" "1101110110001101010011110000110010101110100110000000" "1101110011111001000111110100110101001110000101001111" "1101110001100101010001011111101010111110000110000000" "1101101111010001110001001000000111001011110011001111" "1101101100111110100111000100111001101011100110100010" "1101101010101011110011101100101110110101101001001110" "1101101000011001010111010110001111100010010010100010" "1101100110000111010010011000000001000110101001111011" "1101100011110101100101001000100101010001000110100110" "1101100001100100001111111110011010000101110010100010" "1101011111010011010011001111111001111011001011101101" "1101011101000010101111010011011011010110100111110111" "1101011010110010100100011111010001001000110110110110" "1101011000100010110011001001101010001010100111000100" "1101010110010011011011101000110001011001001010101100" "1101010100000100011110010010101101110010111011001110" "1101010001110101111011011101100010010100000001101011" "1101001111100111110011011111001101110010111010000100" "1101001101011010000110101101101010111100111101010111" "1101001011001100110101011110110000010011000111000011" "1101001001000000000000001000010000000110011110001001" "1101000110110011100110111111111000010100111110110111" "1101000100100111101010011011010010100110000011010011" "1101000010011100001010110000000100000111001101111010" "1101000000010001001000010011101101101000110101001100" "1100111110000110100011011011101011011010101110101011" "1100111011111100011100011101010101001000111011100001" "1100111001110010110011101101111101111000010101011100" "1100110111101001101001100010110100000011011101010100" "1100110101100000111110010001000001010111001000001001" "1100110011011000110010001101101010101111001111111110" "1100110001010001000101101101110000010011100010101011" "1100101111001001111001000110001101010100010011010111" "1100101101000011001100101011111000000111001011100100" "1100101010111101000000110011100010000011111101001111" "1100101000110111010101110001110111100001010110100110" "1100100110110010001011111011011111110001110100010111" "1100100100101101100011100100111101000000011000010010" "1100100010101001011101000010101100001101011100100110" "1100100000100101111000101001000101001011101011101011" "1100011110100010110110101100011010011100110110000101" "1100011100100000010111100000111001001110101010000110" "1100011010011110011011011010101001010111101101011010" "1100011000011101000010101101101101010100010101010010" "1100010110011100001101101110000010000011100001110101" "1100010100011011111100101111011111000011111000001110" "1100010010011100010000000101110110010000011111001111" "1100010000011101001000000100110011111101111011101010" "1100001110011110100100111111111110110111001110000010" "1100001100100000100111001010110111111010110001010010" "1100001010100011001110111000111010010111011001110110" "1100001000100110011100011101011011101001010110010010" "1100000110101010010000001011101011010111010000100111" "1100000100101110101010010110110011001111001111011001" "1100000010110011101011010001110111000011111001101111" "1100000000111001010011001111110100101001011010101001" "1011111110111111100010100011100011110010100110100011" "1011111101000110011001011111110110001110000000000111" "1011111011001101111000010111010111100010111110111010" "1011111001010101111111011100101101001110111000100010" "1011110111011110101111000010010110100010000110111000" "1011110101101000000111011010101100011101010011110001" "1011110011110010001000111000000001101110100010001011" "1011110001111100110011101100100010101110011010001110" "1011110000001000001000001010010101011101010101001100" "1011101110010100000110100011011001100000101011100000" "1011101100100000101111001001101000000000000010111011" "1011101010101110000010001110110011100010011101011110" "1011101000111100000000000100101000001011101010100110" "1011100111001010101000111100101011011001011000000110" "1011100101011001111101001000011100000000100100110001" "1111111111111111111111111111111111111111111111111111" "1111111111010110101010001001000001100111000100100010" "1111111110101101010100010101111000000010001111011101" "1111111110000011111110101010011000000101001100101011" "1111111101011010101001001010010110100010110001101111" "1111111100110001010011111001101000001100100011010101" "1111111100000111111110111100000001110010011010011000" "1111111011011110101010010101011000000010001001000111" "1111111010110101010110001001011111100110111111100011" "1111111010001100000010011100001101001001010001101110" "1111111001100010101111010001010101001101111011001011" "1111111000111001011100101100101100010110000101011101" "1111111000010000001010110010000110111110101100000110" "1111110111100110111001100101011001100000000010110010" "1111110110111101101001001010011000001101011001001101" "1111110110010100011001100100110111010100100001000110" "1111110101101011001010111000101010111101010010111100" "1111110101000001111101001001100111001001010011010100" "1111110100011000110000011011011111110011010111100100" "1111110011101111100100110010001000101111001011100101" "1111110011000110011010010001010101101000110110001111" "1111110010011101010000111100111010000100011111011010" "1111110001110100001000111000101001011101110100001101" "1111110001001011000010001000010111000111101100110101" "1111110000100001111100101111110110001011110010001011" "1111101111111000111000110010111001101010000001011101" "1111101111001111110110010101010100011000010011010010" "1111101110100110110101011010111001000001111111101010" "1111101101111101110110000111011010000111100100011010" "1111101101010100111000011110101001111110001001001011" "1111101100101011111100100100011010101111000101110101" "1111101100000011000010011100011110010111100111000010" "1111101011011010001010001010100110101000010100011111" "1111101010110001010011110010100101000100110101100011" "1111101010001000011111011000001011000011010110101011" "1111101001011111101100111111001001101100001111110100" "1111101000110110111100101011010001111001101000101111" "1111101000001110001110100000010100010110111111001010" "1111100111100101100010100010000001100000101011110010" "1111100110111100111000110100001001100011101000101110" "1111100110010100010001011010011100011100110110001010" "1111100101101011101100011000101001111001000000110011" "1111100101000011001001110010100001010100000110101001" "1111100100011010101001101011110001111000111100111110" "1111100011110010001100001000001010100000110110111110" "1111100011001001110001001011011001110011001001111010" "1111100010100001011000111001001110000100110011111000" "1111100001111001000011010101010101011000000001101011" "1111100001010000110000100011011101011011110100011001" "1111100000101000100000100111010011101011100110110011" "1111100000000000010011100100100101001110110100010001" "1111011111011000001001011110111110111000011110000110" "1111011110110000000010011010001101000110110001100001" "1111011110000111111110011001111100000010101110000110" "1111011101011111111101100001110111011111101011010010" "1111011100110111111111110101101010111010111110110010" "1111011100010000000101011001000001011011100011000100" "1111011011101000001110001111100101110001011100110111" "1111011011000000011010011101000010010101100010000011" "1111011010011000101010000101000001001000111111010101" "1111011001110000111101001011001011110100111111001001" "1111011001001001010011110011001011101010001111111101" "1111011000100001101110000000101001100000101001101100" "1111010111111010001011110111001101110110110110000110" "1111010111010010101101011010100000110001110101010000" "1111010110101011010010101110001001111100100101010101" "1111010110000011111011110101110000100111101001010100" "1111010101011100101000110100111011101000101110111000" "1111010100110101011001101111010001011010010101001001" "1111010100001110001110101000010111111011010100110001" "1111010011100111000111100011110100101110100100011001" "1111010011000000000100100101001100111010100010010011" "1111010010011001000101110000000101001000111000101011" "1111010001110010001011001000000001100110000110110101" "1111010001001011010100110000100110000001000110011011" "1111010000100100100010101101010101101010110011100110" "1111001111111101110101000001110011010101110011110111" "1111001111010111001011110001100001010101111101011111" "1111001110110000100111000000000001011111111110000110" "1111001110001010000110110000110101001001000010011110" "1111001101100011101011000111011101000110011110001100" "1111001100111101010100000111011001101101010010110000" "1111001100010111000001110100001010110001110110011100" "1111001011110000110100010001001111100111011100110110" "1111001011001010101011100010000110111111111110010010" "1111001010100100100111101010001111001011011111001110" "1111001001111110101000101101000101110111110111110100" "1111001001011000101110101110001000010000011100000100" "1111001000110010111001110000110010111101100011101100" "1111001000001101001001111000100010000100010001111101" "1111000111100111011111001000110001000101111101110010" "1111000111000001111001100100111010111111111001011100" "1111000110011100011001010000011010001010111010111110" "1111000101110110111110001110101000011011000100101111" "1111000101010001101000100010111110111111001100101110" "1111000100101100011000010000110110100000100110001011" "1111000100000111001101011011100111000010101000100000" "1111000011100010001000000110101000000010011001011000" "1111000010111101001000010101010000010110010011101111" "1111000010011000001110001010110110001101110001011111" "1111000001110011011001101010101111010000110011111011" "1111000001001110101010111000010000011111101100001011" "1111000000101010000001110110101110010010100100011000" "1111000000000101011110101001011100011001001000101100" "1110111111100001000001010011101101111010001111111001" "1110111110111100101001111000110101010011100100101101" "1110111110011000011000011100000100011001001111000101" "1110111101110100001101000000101100010101011100111100" "1110111101010000000111101001111101101000001011111001" "1110111100101100001000011011001000000110110010110110" "1110111100001000001111010111011010111011101010100011" "1110111011100100011100100010000100100101111000001110" "1110111011000000101111111110010010111000110110100110" "1110111010011101001001101111010010111011111111011010" "1110111001111001101001111000010001001010010101101001" "1110111001010110010000011100011001010010001111011010" "1110111000110010111101011110110110010100111111101000" "1110111000001111110001000010110010100110100000000001" "1110110111101100101011001011010111101100111011101100" "1110110111001001101011111011101110100000011000011011" "1110110110100110110011010110111111001010100010011100" "1110110110000100000001100000010001000110010101000100" "1110110101100001010110011010101010111111100110101000" "1110110100111110110010001001010010110010110010011011" "1110110100011100010100101111001101101100100010111010" "1110110011111001111110001111100000001001011101010010" "1110110011010111101110101101001101110101101011110010" "1110110010110101100110001011011001101100101000110010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_1P_LUTRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 277
set hasByteEnable 0
set MemName music_fourth_orde5jm
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 44
set AddrRange 256
set AddrWd 8
set impl_style distributed
set TrueReset 0
set IsROM 1
set ROMData { "10110001000010110000110011011001000001001011" "10110001000010110110111001000001101000101110" "10110001000011001001001001111010100111101110" "10110001000011100111100110000001001001111010" "10110001000100010010001101010000100001100000" "10110001000101001000111111100010001011110110" "10110001000110001011111100101101101010010100" "10110001000111011011000100101000101001000001" "10110001001000110110010111000110111011011101" "10110001001010011101110011111010011011111010" "10110001001100010001011010110011001101110100" "10110001001110010001001011011111011100110101" "10110001010000011101000101101011011010010010" "10110001010010110101001001000001100001111011" "10110001010101011001010101001010011000000111" "10110001011000001001101001101100100110111001" "10110001011011000110000110001101000011110110" "10110001011110001110101010001110101000111100" "10110001100001100011010101010010011100100000" "10110001100101000100000110110111101010111100" "10110001101000110000111110011011101001001110" "10110001101100101001111011011001110110011101" "10110001110000101110111101001011111001001111" "10110001110101000000000011001001100000110110" "10110001111001011101001100101000100110110111" "10110001111110000110011000111101001100000110" "10110010000010111011100111011001011100010010" "10110010000111111100110111001101101011100001" "10110010001101001010000111101000010110010101" "10110010010010100011010111110110000011001100" "10110010011000001000100111000001100101001011" "10110010011101111001110100010011110011001101" "10110010100011110110111110110011110011110100" "10110010101010000000000101100110110011111100" "10110010110000010101000111110000001100000110" "10110010110110110110000100010001011111000010" "10110010111101100010111010001010011001011111" "10110011000100011011101000011000110001110010" "10110011001011100000001101111000101011111100" "10110011010010110000101001100100010100111101" "10110011011010001100111010010100000011110110" "10110011100001110100111110111110011101010110" "10110011101001101000110110011000010000001010" "10110011110001101000011111010100010101001111" "10110011111001110011111000100011110101101011" "10110100000010001011000000110110000001010100" "10110100001010101101110110111000011000101100" "10110100010011011100011001010110100100110110" "10110100011100010110100110111010011110001111" "10110100100101011100011110001100001000111000" "10110100101110101101111101110001110101111111" "10110100111000001011000100010000000100011001" "10110101000001110011110000001001100000001000" "10110101001011100111111111111111000001110000" "10110101010101100111110010001111110001111101" "10110101011111110011000101011001000101011001" "10110101101010001001110111110110100000100111" "10110101110100101100001000000001110101111110" "10110101111111011001110100010011000110010111" "10110110001010010010111011000000100011010001" "10110110010101010111011010011110101011010110" "10110110100000100111010001000000001111111101" "10110110101100000010011100110110001110011001" "10110110110111101000111100001111110111111011" "10110111000011011010101101011010101010110001" "10110111001111010111101110100010011000111011" "10110111011011011111111101110001000011011100" "10110111100111110011011001001110111101110010" "10110111110100010001111111000010101011001100" "10111000000000111011101101010001000010011110" "10111000001101110000100001111101001100101011" "10111000011010110000011011001000100011001010" "10111000100111111011010110110010110101111011" "10111000110101010001010010111010000010010110" "10111001000010110010001101011010011111100011" "10111001010000011110000100001110110010111101" "10111001011110010100110101001111111000110111" "10111001101100010110011110010101000010001001" "10111001111010100010111101010011110010011101" "10111010001000111010010000000000000011010110" "10111010010111011100010100001100000100111111" "10111010100110001001000111101000011010110111" "10111010110101000000101000000011111111111011" "10111011000100000010110011001100000101001111" "10111011010011001111100110101100010011001010" "10111011100010100111000000001110100111000001" "10111011110010001000111101011011011000111010" "10111100000001110101011011111001010101101110" "10111100010001101100011001001101100100010001" "10111100100001101101110010111011100011001110" "10111100110001111001100110100101001001110111" "10111101000010001111110001101010101001111101" "10111101010010110000010001101010101100111001" "10111101100011011011000100000010011001011111" "10111101110100010000000110001101001101010000" "10111110000101001111010101100101000011100100" "10111110010110011000101111100010010000111100" "10111110100111101100010001011011100110000110" "10111110111001001001111000100110010001101010" "10111111001010110001100010010101111100000010" "10111111011100100011001011111100101100110011" "10111111101110011110110010101011000110110111" "11000000000000100100010011110000001100010010" "11000000010010110011101100011001011100110110" "11000000100101001100111001110010110110100110" "11000000110111101111111001000110110111100000" "11000001001010011100100111011110011100001000" "11000001011101010011000010000001000001111010" "11000001110000010011000101110100100101111011" "11000010000011011100101111111101100100110011" "11000010010110101111111101011110111111011001" "11000010101010001100101011011010010110000110" "11000010111101110010110110101111101101000010" "11000011010001100010011100011101101000011101" "11000011100101011011011001100001010001010011" "11000011111001011101101010110110010110000010" "11000100001101101001001101010111000100100101" "11000100100001111101111101111100010100000111" "11000100110110011011111001011101011101101000" "11000101001011000010111100110000100001001000" "11000101011111110011000100101010000011100101" "11000101110100101100001101111101010001110000" "11000110001001101110010101011011111110001111" "11000110011110111001010111110110100010101011" "11000110110100001101010001111100000010100101" "11000111001001101010000000011010000111111010" "11000111011111001111011111111101000111001100" "11000111110100111101101101001111111101010000" "11101011010101000100001100011001110110100010" "11101011010101000101001001100110111000111110" "11101011010101001000000001001101111010101110" "11101011010101001100110011001110100110100000" "11101011010101010011011111101000011011001001" "11101011010101011100000110011010101001100101" "11101011010101100110100111100100010101010011" "11101011010101110011000011000100010011010010" "11101011010110000001011000111001001101010011" "11101011010110010001101001000001011100100011" "11101011010110100011110011011011001111110100" "11101011010110110111111000000100100110001110" "11101011010111001101110110111011010011011101" "11101011010111100101101111111100111010111110" "11101011010111111111100011000110110101011011" "11101011011000011011010000010110001100110011" "11101011011000111000110111100111111101101001" "11101011011001011000011000111000110110111101" "11101011011001111001110100000101011010111110" "11101011011010011101001001001001111101101010" "11101011011011000010011000000010100110110000" "11101011011011101001100000101011001110110100" "11101011011100010010100010111111100010110100" "11101011011100111101011110111011000001110011" "11101011011101101010010100011000111011010001" "11101011011110011001000011010100010101001011" "11101011011111001001101011101000000101001001" "11101011011111111100001101001110110101101101" "11101011100000110000101000000011000000111110" "11101011100001100110111011111110110110100000" "11101011100010011111001000111100010111010011" "11101011100011011001001110110101010111111001" "11101011100100010101001101100011011101111010" "11101011100101010011000101000000000011001101" "11101011100110010010110101000100010100011111" "11101011100111010100011101101001001111010001" "11101011101000010111111110100111100101100111" "11101011101001011101010111110111111011010011" "11101011101010100100101001010010101000100111" "11101011101011101101110010101111110110101011" "11101011101100111000110100000111100010010010" "11101011101110000101101101010001011010010001" "11101011101111010100011110000101000001001000" "11101011110000100101000110011001101101010100" "11101011110001110111100110000110100100110010" "11101011110011001011111101000010100011011001" "11101011110100100010001011000100010111011110" "11101011110101111010010000000010100001000101" "11101011110111010100001011110011010011001010" "11101011111000101111111110001100110101100011" "11101011111010001101100111000101000001010000" "11101011111011101101000110010001100010101101" "11101011111101001110011011100111111001100111" "11101011111110110001100110111101011000000010" "11101100000000010110101000000111000100000110" "11101100000001111101011110111001110110101001" "11101100000011100110001011001010011010111011" "11101100000101010000101100101101010000000010" "11101100000110111101000011010110100111110001" "11101100001000101011001110111010100111110010" "11101100001010011011001111001101001000001000" "11101100001100001101000100000001110011010001" "11101100001110000000101101001100001010001010" "11101100001111110110001010011111011100100110" "11101100010001101101011011101110110001001011" "11101100010011100110100000101101000000110000" "11101100010101100001011001001100110110000101" "11101100010111011110000101000000110000010100" "11101100011001011100100011111011000011100010" "11101100011011011100110101101101110011011010" "11101100011101011110111010001010111100001001" "11101100011111100010110001000100000111110100" "11101100100001101000011010001010111001000001" "11101100100011101111110101010000100001011111" "11101100100101111001000010000110001001110011" "11101100101000000100000000011100101100111101" "11101100101010010000110000000100111001000000" "11101100101100011111010000101111001111101111" "11101100101110101111100010001100000111000101" "11101100110001000001100100001011101001010001" "11101100110011010101010110011101110010100011" "11101100110101101010111000110010010011000010" "11101100111000000010001010111000110000011101" "11101100111010011011001100100000100011011110" "11101100111100110101111101011000110111101000" "11101100111111010010011101010000101100010000" "11101101000001110000101011110110110110000101" "11101101000100010000101000111001111101001000" "11101101000110110010010100001000011101000100" "11101101001001010101101101010000100101011101" "11101101001011111010110100000000011001101111" "11101101001110100001101000000101110010010100" "11101101010001001010001001001110011011001111" "11101101010011110100010111000111110011110111" "11101101010110100000010001011111010001001110" "11101101011001001101111000000001111010101000" "11101101011011111101001010011100101101110010" "11101101011110101110001000011100011010010110" "11101101100001100000110001101101100110100000" "11101101100100010101000101111100101011101001" "11101101100111001011000100110101110110111100" "11101101101010000010101110000101001011000101" "11101101101100111100000001010110011111000000" "11101101101111110110111110010101011101010101" "11101101110010110011100100101101100101111110" "11101101110101110001110100001010001101010100" "11101101111000110001101100010110011011100000" "11101101111011110011001100111101001110110010" "11101101111110110110010101101001011001001111" "11101110000001111011000110000101100001000101" "11101110000101000001011101111100000010110100" "11101110001000001001011100110111001110001010" "11101110001011010011000010100001001000000101" "11101110001110011110001110100011101011010111" "11101110010001101011000000101000100111001001" "11101110010100111001011000011001011110101111" "11101110011000001001010101011111101011001010" "11101110011011011010110111100100011010110101" "11101110011110101101111110010000101111110101" "11101110100010000010101001001101100100010011" "11101110100101011000111000000011100011011100" "11101110101000110000101010011011010001101001" "11101110101100001001111111111101000101111011" "11101110101111100100111000010001001100101011" "11101110110011000001010010111111101001011110" "11101110110110011111001111110000010011110010" "11101110111001111110101110001010111001001010" "11101110111101011111101101110110111100001010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_1P_LUTRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 278
set hasByteEnable 0
set MemName music_fourth_orde6jw
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 33
set AddrRange 256
set AddrWd 8
set impl_style distributed
set TrueReset 0
set IsROM 1
set ROMData { "000000000000000000000000001011110" "000000100000011110000011110110111" "000001000000111100000010011011101" "000001100001011001110110111011100" "000010000001110111011100100010110" "000010100010010100101101111110000" "000011000010110001100110100000101" "000011100011001110000001000001101" "000100000011101001111000011001101" "000100100100000101000111110100001" "000101000100011111101010001000100" "000101100100111001011010010001101" "000110000101010010010011100011010" "000110100101101010010000110101101" "000111000110000001001100111111101" "000111100110010111000011001111001" "001000000110101011101110010100011" "001000100110111111001001100110100" "001001000111010001001111110011010" "001001100111100001111100000001110" "001010000111110001001001011100001" "001010100111111110110010110111010" "001011001000001010110011011011110" "001011101000010101000110010001001" "001100001000011101100110001110111" "001100101000100100001110100011001" "001101001000101000111010000101111" "001101101000101011100011111001101" "001110001000101100000111001111010" "001110101000101010011111001101011" "001111001000100110100110011010101" "001111101000100000011000100011010" "010000001000010111110000001110010" "010000101000001100101000110001001" "010001000111111110111101001011101" "010001100111101110101000100010110" "010010000111011011100101111100101" "010010100111000101110000110001010" "010011000110101101000011110010010" "010011100110010001011010001010000" "010100000101110010101111001111000" "010100100101010000111101111100010" "010101000100101100000001011100100" "010101100100000011110101001110000" "010110000011011000010011111010011" "010110100010101001011001000111110" "010111000001110110111111101011100" "010111100001000001000011000111011" "011000000000000111011110011010111" "011000011111001010001100110101010" "011000111110001001001001100111101" "011001011101000100001111111001011" "011001111011111011011010111001000" "011010011010101110100110000000101" "011010111001011101101100010011100" "011011011000001000101001001010011" "011011110110101111010111110100000" "011100010101010001110011100001100" "011100110011101111110111101100111" "011101010010001001011111011101000" "011101110000011110100110010110000" "011110001110101111000111010100110" "011110101100111010111110000111000" "011111001011000010000101101101110" "011111101001000100011001110101101" "100000000111000001110101100111000" "100000100100111010010100011101101" "100001000010101101110001101101110" "100001100000011100001000111101010" "100001111110000101010101100001010" "100010011011101001010010101110011" "100010111001000111111100010000110" "100011010110100001001101001000100" "100011110011110101000001011010111" "100100010001000011010100000001001" "100100101110001100000000110100010" "100101001011001111000011001110000" "100101101000001100010110100111101" "100110000101000011110110101011010" "100110100001110101011110111111101" "100110111110100001001010111001001" "100111011011000110110110001101000" "100111110111100110011100011010111" "101000010011111111111001001010010" "101000110000010011000111111101010" "101001001100100000000100101011110" "101001101000100110101010101011000" "101010000100100110110101110100001" "101010100000100000100001101100101" "101010111100010011101010000000011" "101011011000000000001010100011101" "101011110011100101111110111101010" "101100001111000101000011001001111" "101100101010011101010010100101001" "101101000101101110101001010011100" "101101100000111001000010111100000" "101101111011111100011011011010001" "101110010110111000101110100111101" "101110110001101101111000001001110" "101111001100011011110100000110010" "101111100111000010011110001001010" "110000000001100001110010011000001" "110000011011111001101100101001011" "110000110110001010001000110101001" "110001010000010011000011000000110" "110001101010010100010111000000110" "110010000100001110000000111010110" "110010011101111111111100100111010" "110010110111101010000110001001110" "110011010001001100011001110101100" "110011101010100110110011011001001" "110100000011111001001111000101010" "110100011101000011101000110010001" "110100110110000101111100111010001" "110101001111000000000111100111000" "110101100111110010000100101001101" "110110000000011011110000101100111" "110110011000111101000111100110110" "110110110001010110000101101111111" "110111001001100110100111010001000" "110111100001101110101000100011001" "110111111001101110000101101110111" "111000010001100100111011001011000" "111000101001010011000101010101101" "111001000000111000100000010100111" "111001011000010101001000101110001" "111001101111101000111010101100010" "111010000110110011110010110010000" "000000000000000000000000000001101" "000000000101000110011010111100100" "000000001010001100110101001111010" "000000001111010011001110100000000" "000000010100011001100110000100000" "000000011001011111111011010111001" "000000011110100110001101110010000" "000000100011101100011100111101100" "000000101000110010101000000011100" "000000101101111000101110110011101" "000000110010111110110000011100000" "000000111000000100101100100001111" "000000111101001010100010010001110" "000001000010010000010001011011111" "000001000111010101111001001111111" "000001001100011011011001001010110" "000001010001100000110000101100010" "000001010110100101111111010001000" "000001011011101011000100010010110" "000001100000101111111111010000010" "000001100101110100101111011110000" "000001101010111001010100100011111" "000001101111111101101101110101101" "000001110101000001111010101011100" "000001111010000101111010110110011" "000001111111001001101101011101100" "000010000100001101010010001000111" "000010001001010000101000000100000" "000010001110010011101111000010000" "000010010011010110100110010100110" "000010011000011001001101011000100" "000010011101011011100011100101110" "000010100010011101101000100100011" "000010100111011111011011100111000" "000010101100100000111100000111100" "000010110001100010001001101111000" "000010110110100011000011110010011" "000010111011100011101001110111001" "000011000000100011111011001010011" "000011000101100011110111001111001" "000011001010100011011101100100100" "000011001111100010101101101001110" "000011010100100001100110111101001" "000011011001100000001000101010011" "000011011110011110010010100110101" "000011100011011100000100000100101" "000011101000011001011100011001000" "000011101101010110011011001000011" "000011110010010010111111111000001" "000011110111001111001001110111100" "000011111100001010111000101001011" "000100000001000110001011101011100" "000100000110000001000010011010111" "000100001010111011011100011001010" "000100001111110101011000111101001" "000100010100101110110111100100111" "000100011001100111110111110001000" "000100011110100000011000111111100" "000100100011011000011010101101011" "000100101000001111111100010100011" "000100101101000110111101010101011" "000100110001111101011101011010100" "000100110110110011011011100111110" "000100111011101000110111110100011" "000101000000011101110001010000001" "000101000101010010000111010101001" "000101001010000101111001101100100" "000101001110111001000111110111100" "000101010011101011110001000010111" "000101011000011101110101000110001" "000101011101001111010011000000010" "000101100010000000001010110000001" "000101100110110000011011011000010" "000101101011100000000100110000110" "000101110000001111000110001001001" "000101110100111101011110111110010" "000101111001101011001110110111011" "000101111110011000010101010000111" "000110000011000100110001101101000" "000110000111110000100011011110000" "000110001100011011101010001101111" "000110010001000110000101100010101" "000110010101101111110100110001010" "000110011010011000110111010011010" "000110011111000001001100101111000" "000110100011101000110100101111000" "000110101000001111101110100111101" "000110101100110101111001110111010" "000110110001011011010101111111001" "000110110110000000000010100010110" "000110111010100011111111000100100" "000110111111000111001010111101100" "000111000011101001100101101111011" "000111001000001011001110111110100" "000111001100101100000110000101111" "000111010001001100001010101101011" "000111010101101011011100001110001" "000111011010001001111010010010010" "000111011110100111100100010000011" "000111100011000100011001101001010" "000111100111100000011010000111011" "000111101011111011100101000111010" "000111110000010101111010000101100" "000111110100101111011000101001101" "000111111001001000000000010010101" "000111111101011111110000100000000" "001000000001110110101000111100100" "001000000110001100101000111111001" "001000001010100001110000001101011" "001000001110110101111110001100000" "001000010011001001010010010101111" "001000010111011011101100010100101" "001000011011101101001011101011100" "001000011111111101101111110101111" "001000100100001101011000010100110" "001000101000011100000100110011001" "001000101100101001110100110001011" "001000110000110110100111101101101" "001000110101000010011101011000100" "001000111001001101010100111011100" "001000111101010111001110010110011" "001001000001100000001000110100111" "001001000101101000000100000100100" "001001001001101110111111110010000" "001001001101110100111011010100101" "001001010001111001110110010100101" "001001010101111101110000010010100" "001001011010000000101000110110100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_1P_LUTRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 279
set hasByteEnable 0
set MemName music_fourth_orde7jG
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 25
set AddrRange 256
set AddrWd 8
set impl_style distributed
set TrueReset 0
set IsROM 1
set ROMData { "1000000111100000110011101" "1000000111011111100000111" "1000000111011101000001001" "1000000111011001010010101" "1000000111010100010000101" "1000000111001110000010111" "1000000111000110100001000" "1000000110111101101110010" "1000000110110011101111001" "1000000110101000011100110" "1000000110011011111100110" "1000000110001110010000101" "1000000101111111001111010" "1000000101101110111101000" "1000000101011101011101100" "1000000101001010101100000" "1000000100110110101110110" "1000000100100001011100011" "1000000100001010111101101" "1000000011110011010000011" "1000000011011010001111111" "1000000011000000000011100" "1000000010100100100111001" "1000000010000111111000100" "1000000001101001111101011" "1000000001001010110000000" "1000000000101010010110001" "1000000000001000110000101" "0111111111100101111000001" "0111111111000001101100100" "0111111110011100011100001" "0111111101110101110011101" "0111111101001110000010010" "0111111100100100111111010" "0111111011111010101110110" "0111111011001111010000110" "0111111010100010100110110" "0111111001110100100111100" "0111111001000101011110010" "0111111000010101001001110" "0111110111100011100011100" "0111110110110000110010001" "0111110101111100110101101" "0111110101000111100011100" "0111110100010001001011111" "0111110011011001100010100" "0111110010100000110001011" "0111110001100110101110000" "0111110000101011011111011" "0111101111101111000100110" "0111101110110001011011011" "0111101101110010100111110" "0111101100110010101001110" "0111101011110001011100110" "0111101010101111000110100" "0111101001101011100100011" "0111101000100110110110000" "0111100111100000111101010" "0111100110011001110110001" "0111100101010001100111010" "0111100100001000001000010" "0111100010111101100101100" "0111100001110001110011011" "0111100000100100111100100" "0111011111010110110101110" "0111011110000111100110011" "0111011100110111001110001" "0111011011100101101110101" "0111011010010011000010111" "0111011000111111001101011" "0111010111101010010001010" "0111010110010100000111100" "0111010100111100111110100" "0111010011100100100010111" "0111010010001011000111010" "0111010000110000011111111" "0111001111010100110000000" "0111001101110111111010110" "0111001100011001111110001" "0111001010111010110111101" "0111001001011010101111101" "0111000111111001011101011" "0111000110010111000101011" "0111000100110011100111000" "0111000011001111000100101" "0111000001101001011000001" "0111000000000010101011010" "0110111110011010110111000" "0110111100110001111110011" "0110111011001000000010111" "0110111001011101000001000" "0110110111110000111100011" "0110110110000011110000001" "0110110100010101100101101" "0110110010100110010100111" "0110110000110110000010110" "0110101111000100101101000" "0110101101010010010001011" "0110101011011110111000001" "0110101001101010011010100" "0110100111110100111110110" "0110100101111110011111001" "0110100100000110111101100" "0110100010001110011101011" "0110100000010100111001010" "0110011110011010010111011" "0110011100011110110100000" "0110011010100010010011101" "0110011000100100110101011" "0110010110100110010001100" "0110010100100110110011110" "0110010010100110010101001" "0110010000100100111110000" "0110001110100010100101011" "0110001100011111001010110" "0110001010011010111011100" "0110001000010101101000011" "0110000110001111011011111" "0110000100001000010001111" "0110000010000000001110011" "0101111111110111001100111" "0101111101101101010010010" "0101111011100010011101011" "0101111001010110101001101" "0101110111001001111111111" "0101110100111100011000000" "0101110010101101111010111" "0101110000011110100011001" "0001010001100110101101100" "0001010001100110100100110" "0001010001100110010100010" "0001010001100101111000000" "0001010001100101010011100" "0001010001100100100110011" "0001010001100011110010111" "0001010001100010110001110" "0001010001100001101100101" "0001010001100000011010001" "0001010001011111000000010" "0001010001011101011010111" "0001010001011011110010010" "0001010001011001111100000" "0001010001010111111110001" "0001010001010101111000101" "0001010001010011101001000" "0001010001010001010000000" "0001010001001110101101111" "0001010001001100000010011" "0001010001001001010000110" "0001010001000110010011011" "0001010001000011001110000" "0001010001000000000010111" "0001010000111100101000101" "0001010000111001001000101" "0001010000110101011101011" "0001010000110001101111110" "0001010000101101110100010" "0001010000101001101111100" "0001010000100101100010111" "0001010000100001001111001" "0001010000011100101110111" "0001010000011000001000011" "0001010000010011011011000" "0001010000001110100001101" "0001010000001001100000101" "0001010000000100010010100" "0001001111111110111111011" "0001001111111001100101000" "0001001111110100000000101" "0001001111101110010011001" "0001001111101000011010010" "0001001111100010011111000" "0001001111011100010101101" "0001001111010110000010101" "0001001111001111101010111" "0001001111001001001010101" "0001001111000010011101111" "0001001110111011101011000" "0001001110110100101111100" "0001001110101101101011100" "0001001110100110011110100" "0001001110011111000111000" "0001001110010111101000110" "0001001110010000000010010" "0001001110001000010011010" "0001001110000000011010100" "0001001101111000011001100" "0001001101110000010001100" "0001001101101000000001001" "0001001101011111100010100" "0001001101010111000010010" "0001001101001110010100011" "0001001101000101011111010" "0001001100111100100101000" "0001001100110011100001010" "0001001100101010010001101" "0001001100100000111110101" "0001001100010111011100111" "0001001100001101111011000" "0001001100000100001001011" "0001001011111010010110001" "0001001011110000010100100" "0001001011100110001100001" "0001001011011011111110010" "0001001011010001100101100" "0001001011000111000101100" "0001001010111100011010100" "0001001010110001101100000" "0001001010100110110100011" "0001001010011011110001000" "0001001010010000100101110" "0001001010000101010110100" "0001001001111010000000010" "0001001001101110011100110" "0001001001100010110010010" "0001001001010111000001010" "0001001001001011001001001" "0001001000111111000111110" "0001001000110010111100110" "0001001000100110101011110" "0001001000011010010010111" "0001001000001101110001111" "0001001000000001001001100" "0001000111110100011000011" "0001000111100111011111111" "0001000111011010011101011" "0001000111001101010101000" "0001000111000000000111011" "0001000110110010101111010" "0001000110100101001110101" "0001000110010111101000100" "0001000110001001111001111" "0001000101111100000011111" "0001000101101110000111101" "0001000101100000000000010" "0001000101010001110011101" "0001000101000011011110110" "0001000100110101000010001" "0001000100100110011111111" "0001000100010111110100100" "0001000100001001000000011" "0001000011111010000110100" "0001000011101011000111100" "0001000011011011111111001" "0001000011001100101111001" "0001000010111101011001110" "0001000010101101110111101" "0001000010011110010110010" "0001000010001110100110101" "0001000001111110110101001" "0001000001101110111100110" "0001000001011110111000111" "0001000001001110101111011" "0001000000111110011110010" "0001000000101110000111011" "0001000000011101101000001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_1P_LUTRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 280
set hasByteEnable 0
set MemName music_Q_temp_M_real
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 16
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 281
set hasByteEnable 0
set MemName music_FFT_Buffer_re
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 1024
set AddrWd 10
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 282
set hasByteEnable 0
set MemName music_FFT_out_re
set CoreName ap_simcore_mem
set PortList { 2 0 }
set DataWd 32
set AddrRange 1024
set AddrWd 10
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 283
set hasByteEnable 0
set MemName music_Autocorr_Bubck
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 32
set AddrRange 40
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 284
set hasByteEnable 0
set MemName music_Un_M_real
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 8
set AddrWd 3
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 285
set hasByteEnable 0
set MemName music_AUU_M_real
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 1444
set AddrWd 11
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 286
set hasByteEnable 0
set MemName music_eigval
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 32
set AddrRange 4
set AddrWd 2
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 287
set hasByteEnable 0
set MemName music_sort_index
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 3
set AddrRange 4
set AddrWd 2
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 288
set hasByteEnable 0
set MemName music_w
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 361
set AddrWd 9
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

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
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


# Native S_AXILite:
if {${::AESL::PGuard_simmodel_gen}} {
	if {[info proc ::AESL_LIB_XILADAPTER::s_axilite_gen] == "::AESL_LIB_XILADAPTER::s_axilite_gen"} {
		eval "::AESL_LIB_XILADAPTER::s_axilite_gen { \
			id 289 \
			corename music_AXILiteS_axilite \
			name music_AXILiteS_s_axi \
			ports {$port_AXILiteS} \
			op interface \
			is_flushable 0 \ 
		} "
	} else {
		puts "@W \[IMPL-110\] Cannot find AXI Lite interface model in the library. Ignored generation of AXI Lite  interface for 'AXILiteS'"
	}
}

if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler music_AXILiteS_s_axi
}

# Native M_AXI:
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::m_axi_gen] == "::AESL_LIB_XILADAPTER::m_axi_gen"} {
eval "::AESL_LIB_XILADAPTER::m_axi_gen { \
    id 290 \
    corename {m_axi} \
    op interface \
    max_latency -1 \ 
    delay_budget 8.75 \ 
    is_flushable 0 \ 
    name {music_data_m_axi} \
} "
} else {
puts "@W \[IMPL-110\] Cannot find AXI interface model in the library. Ignored generation of AXI interface for 'data'"
}
}

if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler music_data_m_axi
}

# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 291 \
    name P_sm_data \
    reset_level 0 \
    sync_rst true \
    corename {P_sm} \
    metadata {  } \
    op interface \
    ports { P_sm_TDATA { O 32 vector } P_sm_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'P_sm_data'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 292 \
    name P_sm_user_V \
    reset_level 0 \
    sync_rst true \
    corename {P_sm} \
    metadata {  } \
    op interface \
    ports { P_sm_TUSER { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'P_sm_user_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 293 \
    name P_sm_last_V \
    reset_level 0 \
    sync_rst true \
    corename {P_sm} \
    metadata {  } \
    op interface \
    ports { P_sm_TVALID { O 1 bit } P_sm_TLAST { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'P_sm_last_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_return \
    type ap_return \
    reset_level 0 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 32 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst_n
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_rst_n \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


