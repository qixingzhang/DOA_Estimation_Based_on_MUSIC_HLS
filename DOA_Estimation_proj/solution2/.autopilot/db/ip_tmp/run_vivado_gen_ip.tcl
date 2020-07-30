create_project prj -part xc7z020-clg400-1 -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_ddiv_15_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_ddiv_15_no_dsp_64]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_dmul_2_max_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_dmul_2_max_dsp_64]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_faddfsub_2_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_faddfsub_2_full_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fadd_2_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fadd_2_full_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fcmp_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fcmp_0_no_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fdiv_6_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fdiv_6_no_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fmul_0_max_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fmul_0_max_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fpext_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fpext_0_no_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fptrunc_0_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fptrunc_0_no_dsp_64]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fsqrt_5_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fsqrt_5_no_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_fsub_2_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_fsub_2_full_dsp_32]]
}
source "C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/DOA_Estimation_proj/solution2/syn/verilog/music_ap_sitodp_1_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips music_ap_sitodp_1_no_dsp_32]]
}
