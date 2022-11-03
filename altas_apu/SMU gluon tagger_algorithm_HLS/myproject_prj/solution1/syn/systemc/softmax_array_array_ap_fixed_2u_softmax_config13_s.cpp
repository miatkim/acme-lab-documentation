// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "softmax_array_array_ap_fixed_2u_softmax_config13_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state1 = "1";
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state2 = "10";
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state3 = "100";
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state4 = "1000";
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state5 = "10000";
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state6 = "100000";
const sc_lv<7> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_const_lv32_5 = "101";
const sc_lv<32> softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_const_lv32_6 = "110";
const bool softmax_array_array_ap_fixed_2u_softmax_config13_s::ap_const_boolean_1 = true;

softmax_array_array_ap_fixed_2u_softmax_config13_s::softmax_array_array_ap_fixed_2u_softmax_config13_s(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_softmax_latency_array_array_softmax_config13_s_fu_56 = new softmax_latency_array_array_softmax_config13_s("grp_softmax_latency_array_array_softmax_config13_s_fu_56");
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->ap_clk(ap_clk);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->ap_rst(ap_rst);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->ap_start(grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->ap_done(grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_done);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->ap_idle(grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_idle);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->ap_ready(grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_ready);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_0_V_dout(data_V_data_0_V_dout);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_0_V_empty_n(data_V_data_0_V_empty_n);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_0_V_read(grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_read);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_1_V_dout(data_V_data_1_V_dout);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_1_V_empty_n(data_V_data_1_V_empty_n);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_1_V_read(grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_read);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_0_V_TREADY(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TREADY);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_0_V_TDATA(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_0_V_TVALID(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TVALID);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_1_V_TDATA(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_1_V_TVALID(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TVALID);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_1_V_TREADY(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TREADY);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_0_V_blk_n(grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->data_V_data_1_V_blk_n(grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_0_V_TDATA_blk_n(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n);
    grp_softmax_latency_array_array_softmax_config13_s_fu_56->res_V_data_1_V_TDATA_blk_n(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n);
    regslice_both_res_V_data_0_V_U = new regslice_both<16>("regslice_both_res_V_data_0_V_U");
    regslice_both_res_V_data_0_V_U->ap_clk(ap_clk);
    regslice_both_res_V_data_0_V_U->ap_rst(ap_rst);
    regslice_both_res_V_data_0_V_U->data_in(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA);
    regslice_both_res_V_data_0_V_U->vld_in(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TVALID);
    regslice_both_res_V_data_0_V_U->ack_in(res_V_data_0_V_TREADY_int);
    regslice_both_res_V_data_0_V_U->data_out(res_V_data_0_V_TDATA);
    regslice_both_res_V_data_0_V_U->vld_out(regslice_both_res_V_data_0_V_U_vld_out);
    regslice_both_res_V_data_0_V_U->ack_out(res_V_data_0_V_TREADY);
    regslice_both_res_V_data_0_V_U->apdone_blk(regslice_both_res_V_data_0_V_U_apdone_blk);
    regslice_both_res_V_data_1_V_U = new regslice_both<16>("regslice_both_res_V_data_1_V_U");
    regslice_both_res_V_data_1_V_U->ap_clk(ap_clk);
    regslice_both_res_V_data_1_V_U->ap_rst(ap_rst);
    regslice_both_res_V_data_1_V_U->data_in(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA);
    regslice_both_res_V_data_1_V_U->vld_in(grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TVALID);
    regslice_both_res_V_data_1_V_U->ack_in(res_V_data_1_V_TREADY_int);
    regslice_both_res_V_data_1_V_U->data_out(res_V_data_1_V_TDATA);
    regslice_both_res_V_data_1_V_U->vld_out(regslice_both_res_V_data_1_V_U_vld_out);
    regslice_both_res_V_data_1_V_U->ack_out(res_V_data_1_V_TREADY);
    regslice_both_res_V_data_1_V_U->apdone_blk(regslice_both_res_V_data_1_V_U_apdone_blk);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n );

    SC_METHOD(thread_ap_block_state1_ignore_call4);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_block_state6);
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n );

    SC_METHOD(thread_ap_block_state7);
    sensitive << ( regslice_both_res_V_data_0_V_U_apdone_blk );
    sensitive << ( regslice_both_res_V_data_1_V_U_apdone_blk );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( regslice_both_res_V_data_0_V_U_apdone_blk );
    sensitive << ( regslice_both_res_V_data_1_V_U_apdone_blk );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( regslice_both_res_V_data_0_V_U_apdone_blk );
    sensitive << ( regslice_both_res_V_data_1_V_U_apdone_blk );

    SC_METHOD(thread_data_V_data_0_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_data_V_data_0_V_read);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_read );

    SC_METHOD(thread_data_V_data_1_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n );

    SC_METHOD(thread_data_V_data_1_V_read);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_read );

    SC_METHOD(thread_grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TREADY);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( res_V_data_0_V_TREADY_int );

    SC_METHOD(thread_grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TREADY);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( res_V_data_1_V_TREADY_int );

    SC_METHOD(thread_res_V_data_0_V_TDATA_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n );

    SC_METHOD(thread_res_V_data_0_V_TVALID);
    sensitive << ( regslice_both_res_V_data_0_V_U_vld_out );

    SC_METHOD(thread_res_V_data_1_V_TDATA_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n );

    SC_METHOD(thread_res_V_data_1_V_TVALID);
    sensitive << ( regslice_both_res_V_data_1_V_U_vld_out );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n );
    sensitive << ( grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( regslice_both_res_V_data_0_V_U_apdone_blk );
    sensitive << ( regslice_both_res_V_data_1_V_U_apdone_blk );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "softmax_array_array_ap_fixed_2u_softmax_config13_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_V_data_0_V_dout, "(port)data_V_data_0_V_dout");
    sc_trace(mVcdFile, data_V_data_0_V_empty_n, "(port)data_V_data_0_V_empty_n");
    sc_trace(mVcdFile, data_V_data_0_V_read, "(port)data_V_data_0_V_read");
    sc_trace(mVcdFile, data_V_data_1_V_dout, "(port)data_V_data_1_V_dout");
    sc_trace(mVcdFile, data_V_data_1_V_empty_n, "(port)data_V_data_1_V_empty_n");
    sc_trace(mVcdFile, data_V_data_1_V_read, "(port)data_V_data_1_V_read");
    sc_trace(mVcdFile, res_V_data_0_V_TDATA, "(port)res_V_data_0_V_TDATA");
    sc_trace(mVcdFile, res_V_data_0_V_TVALID, "(port)res_V_data_0_V_TVALID");
    sc_trace(mVcdFile, res_V_data_0_V_TREADY, "(port)res_V_data_0_V_TREADY");
    sc_trace(mVcdFile, res_V_data_1_V_TDATA, "(port)res_V_data_1_V_TDATA");
    sc_trace(mVcdFile, res_V_data_1_V_TVALID, "(port)res_V_data_1_V_TVALID");
    sc_trace(mVcdFile, res_V_data_1_V_TREADY, "(port)res_V_data_1_V_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n");
    sc_trace(mVcdFile, data_V_data_0_V_blk_n, "data_V_data_0_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n");
    sc_trace(mVcdFile, data_V_data_1_V_blk_n, "data_V_data_1_V_blk_n");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n");
    sc_trace(mVcdFile, res_V_data_0_V_TDATA_blk_n, "res_V_data_0_V_TDATA_blk_n");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n");
    sc_trace(mVcdFile, res_V_data_1_V_TDATA_blk_n, "res_V_data_1_V_TDATA_blk_n");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_done, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_done");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_idle, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_idle");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_ready, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_ready");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_read, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_read");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_read, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_read");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TREADY, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TREADY");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TVALID, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TVALID");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TVALID, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TVALID");
    sc_trace(mVcdFile, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TREADY, "grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TREADY");
    sc_trace(mVcdFile, ap_block_state1_ignore_call4, "ap_block_state1_ignore_call4");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, regslice_both_res_V_data_0_V_U_apdone_blk, "regslice_both_res_V_data_0_V_U_apdone_blk");
    sc_trace(mVcdFile, regslice_both_res_V_data_1_V_U_apdone_blk, "regslice_both_res_V_data_1_V_U_apdone_blk");
    sc_trace(mVcdFile, ap_block_state7, "ap_block_state7");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_block_state6, "ap_block_state6");
    sc_trace(mVcdFile, res_V_data_0_V_TREADY_int, "res_V_data_0_V_TREADY_int");
    sc_trace(mVcdFile, regslice_both_res_V_data_0_V_U_vld_out, "regslice_both_res_V_data_0_V_U_vld_out");
    sc_trace(mVcdFile, res_V_data_1_V_TREADY_int, "res_V_data_1_V_TREADY_int");
    sc_trace(mVcdFile, regslice_both_res_V_data_1_V_U_vld_out, "regslice_both_res_V_data_1_V_U_vld_out");
#endif

    }
}

softmax_array_array_ap_fixed_2u_softmax_config13_s::~softmax_array_array_ap_fixed_2u_softmax_config13_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete grp_softmax_latency_array_array_softmax_config13_s_fu_56;
    delete regslice_both_res_V_data_0_V_U;
    delete regslice_both_res_V_data_1_V_U;
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_1_V_U_apdone_blk.read())))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n.read()));
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_block_state1_ignore_call4() {
    ap_block_state1_ignore_call4 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_block_state6() {
    ap_block_state6 = (esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n.read()));
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_block_state7() {
    ap_block_state7 = (esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_1_V_U_apdone_blk.read()));
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_1_V_U_apdone_blk.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_1_V_U_apdone_blk.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_data_V_data_0_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        data_V_data_0_V_blk_n = grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_data_V_data_0_V_read() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        data_V_data_0_V_read = grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_read.read();
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_data_V_data_1_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        data_V_data_1_V_blk_n = grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_data_V_data_1_V_read() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        data_V_data_1_V_read = grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_read.read();
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start = ap_const_logic_1;
    } else {
        grp_softmax_latency_array_array_softmax_config13_s_fu_56_ap_start = ap_const_logic_0;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TREADY() {
    grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TREADY = (ap_CS_fsm_state6.read() & res_V_data_0_V_TREADY_int.read());
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TREADY() {
    grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TREADY = (ap_CS_fsm_state6.read() & res_V_data_1_V_TREADY_int.read());
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_res_V_data_0_V_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_V_data_0_V_TDATA_blk_n = grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n.read();
    } else {
        res_V_data_0_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_res_V_data_0_V_TVALID() {
    res_V_data_0_V_TVALID = regslice_both_res_V_data_0_V_U_vld_out.read();
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_res_V_data_1_V_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        res_V_data_1_V_TDATA_blk_n = grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n.read();
    } else {
        res_V_data_1_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_res_V_data_1_V_TVALID() {
    res_V_data_1_V_TVALID = regslice_both_res_V_data_1_V_U_vld_out.read();
}

void softmax_array_array_ap_fixed_2u_softmax_config13_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_0_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_data_V_data_1_V_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_0_V_TDATA_blk_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_softmax_latency_array_array_softmax_config13_s_fu_56_res_V_data_1_V_TDATA_blk_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_0_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_res_V_data_1_V_U_apdone_blk.read())))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

}

