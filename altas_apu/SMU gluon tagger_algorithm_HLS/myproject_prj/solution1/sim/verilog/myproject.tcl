
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set const_size_out_1_group [add_wave_group const_size_out_1(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_out_1_ap_vld -into $const_size_out_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_out_1 -into $const_size_out_1_group -radix hex
set const_size_in_1_group [add_wave_group const_size_in_1(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_1_ap_vld -into $const_size_in_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/const_size_in_1 -into $const_size_in_1_group -radix hex
set layer13_out_group [add_wave_group layer13_out(axis) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/layer13_out_V_data_1_V_TREADY -into $layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer13_out_V_data_1_V_TVALID -into $layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer13_out_V_data_0_V_TREADY -into $layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer13_out_V_data_0_V_TVALID -into $layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer13_out_V_data_1_V_TDATA -into $layer13_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer13_out_V_data_0_V_TDATA -into $layer13_out_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set conv2d_input_group [add_wave_group conv2d_input(axis) -into $cinputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/conv2d_input_V_data_0_V_TREADY -into $conv2d_input_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/conv2d_input_V_data_0_V_TVALID -into $conv2d_input_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/conv2d_input_V_data_0_V_TDATA -into $conv2d_input_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_start -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_done -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_ready -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_idle -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_rst_n -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_myproject_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/LENGTH_conv2d_input_V_data_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer13_out_V_data_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer13_out_V_data_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_const_size_in_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_const_size_out_1 -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_const_size_out_1_group [add_wave_group const_size_out_1(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/const_size_out_1_ap_vld -into $tb_const_size_out_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/const_size_out_1 -into $tb_const_size_out_1_group -radix hex
set tb_const_size_in_1_group [add_wave_group const_size_in_1(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/const_size_in_1_ap_vld -into $tb_const_size_in_1_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/const_size_in_1 -into $tb_const_size_in_1_group -radix hex
set tb_layer13_out_group [add_wave_group layer13_out(axis) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/layer13_out_V_data_1_V_TREADY -into $tb_layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer13_out_V_data_1_V_TVALID -into $tb_layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer13_out_V_data_0_V_TREADY -into $tb_layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer13_out_V_data_0_V_TVALID -into $tb_layer13_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer13_out_V_data_1_V_TDATA -into $tb_layer13_out_group -radix hex
add_wave /apatb_myproject_top/layer13_out_V_data_0_V_TDATA -into $tb_layer13_out_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_conv2d_input_group [add_wave_group conv2d_input(axis) -into $tbcinputgroup]
add_wave /apatb_myproject_top/conv2d_input_V_data_0_V_TREADY -into $tb_conv2d_input_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/conv2d_input_V_data_0_V_TVALID -into $tb_conv2d_input_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/conv2d_input_V_data_0_V_TDATA -into $tb_conv2d_input_group -radix hex
save_wave_config myproject.wcfg
run all
quit

