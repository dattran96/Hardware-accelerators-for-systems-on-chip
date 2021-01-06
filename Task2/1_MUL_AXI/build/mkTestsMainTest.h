/*
 * Generated by Bluespec Compiler (build e76ca21)
 * 
 * On Wed Dec 30 13:27:02 CET 2020
 * 
 */

/* Generation options: */
#ifndef __mkTestsMainTest_h__
#define __mkTestsMainTest_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkTestsMainTest module */
class MOD_mkTestsMainTest : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt64> INST_dut_product;
  MOD_Wire<tUInt32> INST_dut_readHandler_araddrIn;
  MOD_Wire<tUInt8> INST_dut_readHandler_arprotIn;
  MOD_Wire<tUInt8> INST_dut_readHandler_arvalidIn;
  MOD_Fifo<tUInt64> INST_dut_readHandler_in;
  MOD_Reg<tUInt8> INST_dut_readHandler_isRst_isInReset;
  MOD_Fifo<tUWide> INST_dut_readHandler_out;
  MOD_Wire<tUInt64> INST_dut_readHandler_rdataOut;
  MOD_Wire<tUInt8> INST_dut_readHandler_rreadyIn;
  MOD_Wire<tUInt8> INST_dut_readHandler_rrespOut;
  MOD_Reg<tUInt64> INST_dut_reg1;
  MOD_Reg<tUInt64> INST_dut_reg2;
  MOD_CReg<tUInt64> INST_dut_writeHandler_addrIn_rv;
  MOD_Wire<tUInt32> INST_dut_writeHandler_awaddrIn;
  MOD_Wire<tUInt8> INST_dut_writeHandler_awprotIn;
  MOD_Wire<tUInt8> INST_dut_writeHandler_awvalidIn;
  MOD_Wire<tUInt8> INST_dut_writeHandler_breadyIn;
  MOD_Wire<tUInt8> INST_dut_writeHandler_brespOut;
  MOD_CReg<tUWide> INST_dut_writeHandler_dataIn_rv;
  MOD_Fifo<tUWide> INST_dut_writeHandler_in;
  MOD_Reg<tUInt8> INST_dut_writeHandler_isRst_isInReset;
  MOD_Fifo<tUInt8> INST_dut_writeHandler_out;
  MOD_Wire<tUInt64> INST_dut_writeHandler_wdataIn;
  MOD_Wire<tUInt8> INST_dut_writeHandler_wstrbIn;
  MOD_Wire<tUInt8> INST_dut_writeHandler_wvalidIn;
  MOD_Wire<tUInt32> INST_rd_araddrOut;
  MOD_Wire<tUInt8> INST_rd_arprotOut;
  MOD_Wire<tUInt8> INST_rd_arreadyIn;
  MOD_Fifo<tUInt64> INST_rd_in;
  MOD_Reg<tUInt8> INST_rd_isRst_isInReset;
  MOD_Fifo<tUWide> INST_rd_out;
  MOD_Wire<tUInt64> INST_rd_rdataIn;
  MOD_Wire<tUInt8> INST_rd_rrespIn;
  MOD_Wire<tUInt8> INST_rd_rvalidIn;
  MOD_Wire<tUInt8> INST_testFSM_abort;
  MOD_Reg<tUInt8> INST_testFSM_start_reg;
  MOD_Reg<tUInt8> INST_testFSM_start_reg_1;
  MOD_Wire<tUInt8> INST_testFSM_start_reg_2;
  MOD_Wire<tUInt8> INST_testFSM_start_wire;
  MOD_Reg<tUInt8> INST_testFSM_state_can_overlap;
  MOD_Reg<tUInt8> INST_testFSM_state_fired;
  MOD_Wire<tUInt8> INST_testFSM_state_fired_1;
  MOD_ConfigReg<tUInt8> INST_testFSM_state_mkFSMstate;
  MOD_Wire<tUInt8> INST_testFSM_state_overlap_pw;
  MOD_Wire<tUInt8> INST_testFSM_state_set_pw;
  MOD_CReg<tUInt64> INST_wr_addrOut_rv;
  MOD_Wire<tUInt32> INST_wr_awaddrOut;
  MOD_Wire<tUInt8> INST_wr_awprotOut;
  MOD_Wire<tUInt8> INST_wr_awreadyIn;
  MOD_Wire<tUInt8> INST_wr_brespIn;
  MOD_Wire<tUInt8> INST_wr_bvalidIn;
  MOD_CReg<tUWide> INST_wr_dataOut_rv;
  MOD_Fifo<tUWide> INST_wr_in;
  MOD_Reg<tUInt8> INST_wr_isRst_isInReset;
  MOD_Fifo<tUInt8> INST_wr_out;
  MOD_Wire<tUInt64> INST_wr_wdataOut;
  MOD_Wire<tUInt8> INST_wr_wreadyIn;
  MOD_Wire<tUInt8> INST_wr_wstrbOut;
 
 /* Constructor */
 public:
  MOD_mkTestsMainTest(tSimStateHdl simHdl,
		      char const *name,
		      Module *parent,
		      tUInt64 ARG_opA,
		      tUInt64 ARG_opB,
		      tUInt64 ARG_expectedResult);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt64 PORT_opA;
  tUInt64 PORT_opB;
  tUInt64 PORT_expectedResult;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_RL_testFSM_action_l36c13;
  tUInt8 DEF_WILL_FIRE_RL_testFSM_action_l30c13;
  tUInt8 DEF_WILL_FIRE_RL_testFSM_action_l24c13;
  tUInt8 DEF_WILL_FIRE_RL_testFSM_action_l21c13;
  tUInt8 DEF_testFSM_abort_whas__86_AND_testFSM_abort_wget__ETC___d254;
  tUInt8 DEF_wr_dataOut_rv_port1__read__32_BIT_72___d133;
  tUInt8 DEF_wr_addrOut_rv_port1__read__24_BIT_35___d125;
  tUInt8 DEF_wr_isRst_isInReset__h3990;
  tUInt8 DEF_rd_isRst_isInReset__h3214;
  tUInt8 DEF_dut_readHandler_isRst_isInReset__h1864;
  tUInt8 DEF_dut_writeHandler_isRst_isInReset__h102;
  tUWide DEF_wr_dataOut_rv_port1__read____d132;
  tUWide DEF_wr_dataOut_rv_port0__read____d113;
  tUWide DEF_dut_writeHandler_dataIn_rv_port1__read____d4;
  tUWide DEF_dut_writeHandler_dataIn_rv_port0__read____d25;
  tUInt64 DEF_wr_addrOut_rv_port1__read____d124;
  tUInt64 DEF_dut_writeHandler_addrIn_rv_port1__read____d2;
  tUInt8 DEF_testFSM_state_mkFSMstate_read____d214;
  tUInt8 DEF_testFSM_state_fired__h14613;
  tUInt8 DEF_testFSM_abort_whas____d186;
  tUInt8 DEF_testFSM_abort_wget____d187;
  tUInt8 DEF_testFSM_start_reg_1__h14611;
  tUInt8 DEF_testFSM_start_reg__h16251;
  tUInt8 DEF_wr_out_notFull____d142;
  tUInt8 DEF_rd_out_notFull____d102;
  tUInt8 DEF_rd_in_notEmpty____d93;
  tUInt8 DEF_dut_readHandler_out_notEmpty____d55;
  tUInt8 DEF_dut_readHandler_in_notFull____d46;
  tUInt8 DEF_dut_writeHandler_out_notEmpty____d37;
  tUInt8 DEF_testFSM_state_mkFSMstate_read__14_EQ_4___d217;
  tUInt8 DEF_wr_out_first__23_EQ_0___d224;
  tUInt8 DEF_testFSM_abort_whas__86_AND_testFSM_abort_wget__ETC___d218;
  tUInt8 DEF_testFSM_abort_whas__86_AND_testFSM_abort_wget__87___d188;
  tUInt8 DEF_testFSM_abort_whas__86_AND_testFSM_abort_wget__ETC___d250;
  tUInt8 DEF_NOT_wr_isRst_isInReset_08___d126;
  tUInt8 DEF_NOT_rd_isRst_isInReset_8___d90;
  tUInt8 DEF_NOT_dut_readHandler_isRst_isInReset_1___d43;
  tUInt8 DEF_NOT_dut_writeHandler_dataIn_rv_port0__read__5__ETC___d27;
  tUInt8 DEF_NOT_dut_writeHandler_addrIn_rv_port0__read__5__ETC___d17;
  tUInt8 DEF_NOT_dut_writeHandler_isRst_isInReset___d18;
 
 /* Local definitions */
 private:
  tUWide DEF_wr_in_first____d118;
  tUWide DEF_dut_writeHandler_in_first____d80;
  tUWide DEF_rd_out_first____d242;
  tUWide DEF_dut_readHandler_out_first____d58;
  tUInt64 DEF_x_data__h2888;
  tUInt64 DEF_x_data__h2858;
  tUWide DEF_wr_in_first__18_BITS_74_TO_3___d122;
  tUWide DEF_dut_writeHandler_dataIn_rv_port1__read_BITS_71_ETC___d12;
  tUWide DEF_dut_reg1_1_MUL_dut_reg2_2___d86;
  tUWide DEF__8_CONCAT_opB_CONCAT_2040___d231;
  tUWide DEF__0_CONCAT_opA_CONCAT_2040___d221;
  tUWide DEF_dut_writeHandler_addrIn_rv_port1__read_BITS_34_ETC___d14;
  tUWide DEF__1_CONCAT_wr_in_first__18_BITS_74_TO_3_22___d123;
  tUWide DEF__1_CONCAT_dut_writeHandler_wdataIn_wget__1_CONC_ETC___d33;
  tUWide DEF__0_CONCAT_DONTCARE___d10;
  tUWide DEF_IF_dut_readHandler_in_first__4_BITS_9_TO_3_5_E_ETC___d76;
  tUWide DEF_rd_rdataIn_wget__05_CONCAT_rd_rrespIn_wget__06___d107;
  tUInt64 DEF__0_CONCAT_DONTCARE___d9;
 
 /* Rules */
 public:
  void RL_dut_writeHandler_isRst_isResetAssertedUpdate();
  void RL_dut_writeHandler_mergeAddrData();
  void RL_dut_writeHandler_addrInWrite();
  void RL_dut_writeHandler_dataInWrite();
  void RL_dut_writeHandler_outWrite();
  void RL_dut_writeHandler_outForward();
  void RL_dut_readHandler_isRst_isResetAssertedUpdate();
  void RL_dut_readHandler_addrInWrite();
  void RL_dut_readHandler_deqOut();
  void RL_dut_readHandler_putOutData();
  void RL_dut_read_AXI();
  void RL_dut_write_AXI();
  void RL_dut_product_operation();
  void RL_rd_isRst_isResetAssertedUpdate();
  void RL_rd_deqIn();
  void RL_rd_forwardIn();
  void RL_rd_enqOut();
  void RL_wr_isRst_isResetAssertedUpdate();
  void RL_wr_splitAddrData();
  void RL_wr_deqAddr();
  void RL_wr_forwardAddr();
  void RL_wr_deqData();
  void RL_wr_forwardData();
  void RL_wr_forwardResp();
  void RL_forward1();
  void RL_forward2();
  void RL_forward3();
  void RL_forward4();
  void RL_forward5();
  void RL_forward6();
  void RL_forward7();
  void RL_forward8();
  void RL_forward1_1();
  void RL_forward2_1();
  void RL_forward3_1();
  void RL_forward4_1();
  void RL_forward5_1();
  void RL_forward6_1();
  void RL_forward7_1();
  void RL_forward8_1();
  void RL_forward9();
  void RL_forward10();
  void RL_forward11();
  void RL_testFSM_start_reg__dreg_update();
  void RL_testFSM_state_handle_abort();
  void RL_testFSM_state_fired__dreg_update();
  void RL_testFSM_state_every();
  void RL_testFSM_restart();
  void RL_testFSM_action_l21c13();
  void RL_testFSM_action_l24c13();
  void RL_testFSM_action_l30c13();
  void RL_testFSM_action_l36c13();
  void RL_testFSM_idle_l20c11();
  void RL_testFSM_fsm_start();
  void __me_check_48();
  void __me_check_49();
  void __me_check_50();
 
 /* Methods */
 public:
  void METH_go();
  tUInt8 METH_RDY_go();
  tUInt8 METH_done();
  tUInt8 METH_RDY_done();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTestsMainTest &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTestsMainTest &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTestsMainTest &backing);
};

#endif /* ifndef __mkTestsMainTest_h__ */
