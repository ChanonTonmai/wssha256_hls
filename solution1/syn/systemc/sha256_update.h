// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sha256_update_HH_
#define _sha256_update_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sha256_transform.h"

namespace ap_rtl {

struct sha256_update : public sc_module {
    // Port declarations 40
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > ctx_data_address0;
    sc_out< sc_logic > ctx_data_ce0;
    sc_out< sc_logic > ctx_data_we0;
    sc_out< sc_lv<8> > ctx_data_d0;
    sc_in< sc_lv<8> > ctx_data_q0;
    sc_out< sc_lv<6> > ctx_data_address1;
    sc_out< sc_logic > ctx_data_ce1;
    sc_in< sc_lv<8> > ctx_data_q1;
    sc_in< sc_lv<32> > ctx_datalen_read;
    sc_in< sc_lv<32> > p_read1;
    sc_in< sc_lv<32> > p_read2;
    sc_in< sc_lv<32> > p_read3;
    sc_in< sc_lv<32> > p_read4;
    sc_in< sc_lv<32> > p_read5;
    sc_in< sc_lv<32> > p_read6;
    sc_in< sc_lv<32> > p_read7;
    sc_in< sc_lv<32> > p_read8;
    sc_in< sc_lv<32> > p_read9;
    sc_in< sc_lv<32> > p_read10;
    sc_out< sc_lv<6> > data_address0;
    sc_out< sc_logic > data_ce0;
    sc_in< sc_lv<8> > data_q0;
    sc_in< sc_lv<32> > len;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_out< sc_lv<32> > ap_return_3;
    sc_out< sc_lv<32> > ap_return_4;
    sc_out< sc_lv<32> > ap_return_5;
    sc_out< sc_lv<32> > ap_return_6;
    sc_out< sc_lv<32> > ap_return_7;
    sc_out< sc_lv<32> > ap_return_8;
    sc_out< sc_lv<32> > ap_return_9;
    sc_out< sc_lv<32> > ap_return_10;


    // Module declarations
    sha256_update(sc_module_name name);
    SC_HAS_PROCESS(sha256_update);

    ~sha256_update();

    sc_trace_file* mVcdFile;

    sha256_transform* grp_sha256_transform_fu_208;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > tmp_7_fu_265_p1;
    sc_signal< sc_lv<8> > tmp_7_reg_623;
    sc_signal< sc_lv<7> > i_1_fu_333_p2;
    sc_signal< sc_lv<7> > i_1_reg_631;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_328_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_421_p2;
    sc_signal< sc_lv<1> > tmp_3_reg_641;
    sc_signal< sc_lv<1> > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > ctx_state_7_load_1_reg_645;
    sc_signal< sc_lv<1> > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > ctx_state_6_load_1_reg_650;
    sc_signal< sc_lv<32> > ctx_state_5_load_1_reg_655;
    sc_signal< sc_lv<32> > ctx_state_4_load_1_reg_660;
    sc_signal< sc_lv<32> > ctx_state_3_load_1_reg_665;
    sc_signal< sc_lv<32> > ctx_state_2_load_1_reg_670;
    sc_signal< sc_lv<32> > ctx_state_1_load_1_reg_675;
    sc_signal< sc_lv<32> > ctx_state_load_1_reg_680;
    sc_signal< sc_logic > grp_sha256_transform_fu_208_ap_start;
    sc_signal< sc_logic > grp_sha256_transform_fu_208_ap_done;
    sc_signal< sc_logic > grp_sha256_transform_fu_208_ap_idle;
    sc_signal< sc_logic > grp_sha256_transform_fu_208_ap_ready;
    sc_signal< sc_lv<6> > grp_sha256_transform_fu_208_data_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_208_data_ce0;
    sc_signal< sc_lv<6> > grp_sha256_transform_fu_208_data_address1;
    sc_signal< sc_logic > grp_sha256_transform_fu_208_data_ce1;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_0;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_1;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_2;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_3;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_4;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_5;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_6;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_208_ap_return_7;
    sc_signal< sc_lv<7> > i_reg_197;
    sc_signal< sc_lv<1> > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_reg_grp_sha256_transform_fu_208_ap_start;
    sc_signal< sc_lv<64> > tmp_fu_339_p1;
    sc_signal< sc_lv<64> > tmp_1_fu_410_p1;
    sc_signal< sc_lv<32> > ctx_datalen_fu_56;
    sc_signal< sc_lv<32> > tmp_2_fu_415_p2;
    sc_signal< sc_lv<32> > ctx_state_7_fu_60;
    sc_signal< sc_lv<32> > ctx_state_6_fu_64;
    sc_signal< sc_lv<32> > ctx_state_5_fu_68;
    sc_signal< sc_lv<32> > ctx_state_4_fu_72;
    sc_signal< sc_lv<32> > ctx_state_3_fu_76;
    sc_signal< sc_lv<32> > ctx_state_2_fu_80;
    sc_signal< sc_lv<32> > ctx_state_1_fu_84;
    sc_signal< sc_lv<32> > ctx_state_fu_88;
    sc_signal< sc_lv<32> > ctx_bitlen_1_fu_92;
    sc_signal< sc_lv<32> > tmp_5_ctx_bitlen_1_fu_481_p3;
    sc_signal< sc_lv<32> > ctx_bitlen_fu_96;
    sc_signal< sc_lv<32> > tmp_6_fu_489_p2;
    sc_signal< sc_lv<8> > i_cast_fu_324_p1;
    sc_signal< sc_lv<1> > tmp_4_fu_469_p2;
    sc_signal< sc_lv<32> > tmp_5_fu_475_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_FFFFFDFF;
    static const sc_lv<32> ap_const_lv32_200;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_ctx_data_address0();
    void thread_ctx_data_address1();
    void thread_ctx_data_ce0();
    void thread_ctx_data_ce1();
    void thread_ctx_data_d0();
    void thread_ctx_data_we0();
    void thread_data_address0();
    void thread_data_ce0();
    void thread_exitcond_fu_328_p2();
    void thread_grp_sha256_transform_fu_208_ap_start();
    void thread_i_1_fu_333_p2();
    void thread_i_cast_fu_324_p1();
    void thread_tmp_1_fu_410_p1();
    void thread_tmp_2_fu_415_p2();
    void thread_tmp_3_fu_421_p2();
    void thread_tmp_4_fu_469_p2();
    void thread_tmp_5_ctx_bitlen_1_fu_481_p3();
    void thread_tmp_5_fu_475_p2();
    void thread_tmp_6_fu_489_p2();
    void thread_tmp_7_fu_265_p1();
    void thread_tmp_fu_339_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
