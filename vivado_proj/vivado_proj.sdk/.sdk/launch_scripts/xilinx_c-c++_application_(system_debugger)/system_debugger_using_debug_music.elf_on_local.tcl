connect -url tcp:127.0.0.1:3121
source C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/vivado_proj/vivado_proj.sdk/music_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
loadhw -hw C:/Users/zhangqx/workspace/Xilinx_Intern/summer/project/DOA_Estimation_Based_on_MUSIC_HLS/vivado_proj/vivado_proj.sdk/music_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx TUL 1234-tulA"} -index 0
stop
ps7_init
ps7_post_config
configparams force-mem-access 0
