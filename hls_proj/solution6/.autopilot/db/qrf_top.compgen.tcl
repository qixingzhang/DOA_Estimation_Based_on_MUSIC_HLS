# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 200
set hasByteEnable 0
set MemName qrf_top_Qi_M_real_memcore
set CoreName ap_simcore_mem
set PortList { 2 2 }
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
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
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

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName qrf_top_Qi_M_real
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 201 \
    name A_M_real \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real \
    op interface \
    ports { A_M_real_address0 { O 4 vector } A_M_real_ce0 { O 1 bit } A_M_real_d0 { O 32 vector } A_M_real_q0 { I 32 vector } A_M_real_we0 { O 1 bit } A_M_real_address1 { O 4 vector } A_M_real_ce1 { O 1 bit } A_M_real_d1 { O 32 vector } A_M_real_q1 { I 32 vector } A_M_real_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 202 \
    name A_M_imag \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag \
    op interface \
    ports { A_M_imag_address0 { O 4 vector } A_M_imag_ce0 { O 1 bit } A_M_imag_d0 { O 32 vector } A_M_imag_q0 { I 32 vector } A_M_imag_we0 { O 1 bit } A_M_imag_address1 { O 4 vector } A_M_imag_ce1 { O 1 bit } A_M_imag_d1 { O 32 vector } A_M_imag_q1 { I 32 vector } A_M_imag_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 203 \
    name Q_M_real \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_M_real \
    op interface \
    ports { Q_M_real_address0 { O 4 vector } Q_M_real_ce0 { O 1 bit } Q_M_real_d0 { O 32 vector } Q_M_real_q0 { I 32 vector } Q_M_real_we0 { O 1 bit } Q_M_real_address1 { O 4 vector } Q_M_real_ce1 { O 1 bit } Q_M_real_d1 { O 32 vector } Q_M_real_q1 { I 32 vector } Q_M_real_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 204 \
    name Q_M_imag \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_M_imag \
    op interface \
    ports { Q_M_imag_address0 { O 4 vector } Q_M_imag_ce0 { O 1 bit } Q_M_imag_d0 { O 32 vector } Q_M_imag_q0 { I 32 vector } Q_M_imag_we0 { O 1 bit } Q_M_imag_address1 { O 4 vector } Q_M_imag_ce1 { O 1 bit } Q_M_imag_d1 { O 32 vector } Q_M_imag_q1 { I 32 vector } Q_M_imag_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_M_imag'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 205 \
    name R_M_real \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename R_M_real \
    op interface \
    ports { R_M_real_address0 { O 4 vector } R_M_real_ce0 { O 1 bit } R_M_real_d0 { O 32 vector } R_M_real_q0 { I 32 vector } R_M_real_we0 { O 1 bit } R_M_real_address1 { O 4 vector } R_M_real_ce1 { O 1 bit } R_M_real_d1 { O 32 vector } R_M_real_q1 { I 32 vector } R_M_real_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'R_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 206 \
    name R_M_imag \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename R_M_imag \
    op interface \
    ports { R_M_imag_address0 { O 4 vector } R_M_imag_ce0 { O 1 bit } R_M_imag_d0 { O 32 vector } R_M_imag_q0 { I 32 vector } R_M_imag_we0 { O 1 bit } R_M_imag_address1 { O 4 vector } R_M_imag_ce1 { O 1 bit } R_M_imag_d1 { O 32 vector } R_M_imag_q1 { I 32 vector } R_M_imag_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'R_M_imag'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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
    reset_level 1 \
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
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
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


