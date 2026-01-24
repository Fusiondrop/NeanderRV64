// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_controlunit.h for the primary calling header

#include "Vtb_controlunit__pch.h"
#include "Vtb_controlunit__Syms.h"
#include "Vtb_controlunit___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_controlunit___024root___eval_initial__TOP__Vtiming__0(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__1__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__1__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__2__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__3__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__3__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__4__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__5__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__5__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__6__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__7__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__7__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__8__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__9__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__9__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__10__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__11__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__11__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__12__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__13__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__13__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__14__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__15__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__15__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__16__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__17__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__17__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__18__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__19__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__19__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__20__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__21__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__21__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__22__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__23__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__23__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__24__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__25__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__25__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__26__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__27__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__27__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__28__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__29__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__29__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__30__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__31__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__31__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__32__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__33__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__33__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__34__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__35__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__35__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__36__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__37__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__37__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__38__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__39__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__39__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__40__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__41__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__41__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__42__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__42__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__42__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__42__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__42__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__42__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__42__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__43__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__44__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__44__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__45__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__45__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__45__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__45__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__45__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__45__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__45__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__46__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__47__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__47__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__48__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__48__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__48__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__48__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__48__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__48__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__48__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__49__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__50__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__50__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__51__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__51__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__51__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__51__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__51__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__51__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__51__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__52__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__53__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__53__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__54__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__54__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__54__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__54__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__54__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__54__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__54__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__55__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__56__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__56__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__57__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__57__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__57__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__57__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__57__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__57__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__57__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__58__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__59__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__59__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__60__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__60__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__60__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__60__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__60__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__60__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__60__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__61__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__62__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__62__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__63__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__63__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__63__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__63__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__63__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__63__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__63__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__64__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__65__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__65__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__66__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__66__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__66__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__66__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__66__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__66__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__66__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__67__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__68__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__68__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__69__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__69__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__69__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__69__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__69__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__69__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__69__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__70__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__71__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__71__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__72__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__72__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__72__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__72__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__72__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__72__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__72__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__73__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__74__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__74__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0;
    std::string __Vtask_tb_controlunit__DOT__run_branch_case__75__name;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__75__funct3_i;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__75__Z;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__75__N;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__75__C;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__75__V;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__V = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__run_branch_case__75__exp_take;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__exp_take = 0;
    CData/*6:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__opcode_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__opcode_i = 0;
    CData/*2:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__funct3_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__funct7b30_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__funct7b30_i = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__Z = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__N = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__C = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__apply_inputs__76__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__V = 0;
    std::string __Vtask_tb_controlunit__DOT__expect_outputs__77__name;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_regWriteEnable;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_regWriteEnable = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_load;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_load = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_store;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_store = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_word;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_word = 0;
    CData/*3:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_ALUControl;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_ALUControl = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_JALR;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_JALR = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_pcnext;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_pcnext = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcB;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcB = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcA;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcA = 0;
    CData/*1:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_writeback;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_writeback = 0;
    CData/*0:0*/ __Vtask_tb_controlunit__DOT__expect_outputs__77__ok;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0;
    // Body
    vlSelfRef.tb_controlunit__DOT__opcode = 0U;
    vlSelfRef.tb_controlunit__DOT__funct3 = 0U;
    vlSelfRef.tb_controlunit__DOT__funct7 = 0U;
    vlSelfRef.tb_controlunit__DOT__Zero = 0U;
    vlSelfRef.tb_controlunit__DOT__Negative = 0U;
    vlSelfRef.tb_controlunit__DOT__Carry = 0U;
    vlSelfRef.tb_controlunit__DOT__Overflow = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__name = 
        std::string{"DEFAULT/UNKNOWN opcode"};
    __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__1__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__1__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__1__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__1__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__1__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__2__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__2__opcode_i = 0x33U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__2__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__2__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__2__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__2__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__2__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__2__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__2__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__name = 
        std::string{"OP ADD"};
    __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__3__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__3__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__3__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__3__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__3__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__4__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__funct7b30_i = 1U;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__4__opcode_i = 0x33U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__4__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__4__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__4__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__4__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__4__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__4__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__4__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__name = 
        std::string{"OP SUB"};
    __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__5__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__5__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__5__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__5__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__5__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__6__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__apply_inputs__6__opcode_i = 0x33U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__6__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__6__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__6__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__6__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__6__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__6__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__6__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_ALUControl = 5U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__name = 
        std::string{"OP SRL"};
    __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__7__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__7__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__7__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__7__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__7__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__8__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__funct7b30_i = 1U;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__apply_inputs__8__opcode_i = 0x33U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__8__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__8__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__8__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__8__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__8__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__8__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__8__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_ALUControl = 0xdU;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__name = 
        std::string{"OP SRA"};
    __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__9__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__9__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__9__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__9__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__9__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__10__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__funct3_i = 2U;
    __Vtask_tb_controlunit__DOT__apply_inputs__10__opcode_i = 0x33U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__10__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__10__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__10__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__10__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__10__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__10__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__10__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_ALUControl = 2U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__name = 
        std::string{"OP SLT"};
    __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__11__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__11__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__11__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__11__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__11__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__12__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__funct3_i = 3U;
    __Vtask_tb_controlunit__DOT__apply_inputs__12__opcode_i = 0x33U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__12__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__12__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__12__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__12__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__12__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__12__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__12__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_ALUControl = 3U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__name = 
        std::string{"OP SLTU"};
    __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__13__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__13__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__13__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__13__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__13__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__14__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__14__opcode_i = 0x13U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__14__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__14__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__14__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__14__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__14__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__14__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__14__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__name = 
        std::string{"OP-IMM ADDI"};
    __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__15__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__15__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__15__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__15__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__15__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__16__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__apply_inputs__16__opcode_i = 0x13U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__16__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__16__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__16__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__16__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__16__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__16__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__16__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_ALUControl = 5U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__name = 
        std::string{"OP-IMM SRLI"};
    __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__17__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__17__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__17__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__17__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__17__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__18__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__funct7b30_i = 1U;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__apply_inputs__18__opcode_i = 0x13U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__18__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__18__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__18__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__18__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__18__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__18__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__18__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_ALUControl = 0xdU;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__name = 
        std::string{"OP-IMM SRAI"};
    __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__19__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__19__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__19__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__19__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__19__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__20__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__funct3_i = 2U;
    __Vtask_tb_controlunit__DOT__apply_inputs__20__opcode_i = 3U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__20__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__20__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__20__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__20__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__20__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__20__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__20__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_writeback = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_load = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__name = 
        std::string{"LOAD"};
    __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__21__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__21__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__21__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__21__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__21__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__22__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__funct3_i = 2U;
    __Vtask_tb_controlunit__DOT__apply_inputs__22__opcode_i = 0x23U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__22__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__22__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__22__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__22__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__22__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__22__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__22__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_store = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__name = 
        std::string{"STORE"};
    __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__23__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__23__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__23__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__23__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__23__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__24__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__24__opcode_i = 0x37U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__24__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__24__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__24__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__24__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__24__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__24__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__24__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcA = 2U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__name = 
        std::string{"LUI"};
    __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__25__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__25__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__25__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__25__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__25__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__26__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__26__opcode_i = 0x17U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__26__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__26__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__26__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__26__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__26__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__26__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__26__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcA = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__name = 
        std::string{"AUIPC"};
    __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__27__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__27__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__27__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__27__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__27__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__28__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__28__opcode_i = 0x6fU;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__28__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__28__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__28__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__28__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__28__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__28__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__28__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_writeback = 2U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcA = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_pcnext = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__name = 
        std::string{"JAL"};
    __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__29__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__29__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__29__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__29__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__29__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__30__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__30__opcode_i = 0x67U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__30__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__30__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__30__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__30__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__30__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__30__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__30__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_writeback = 2U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_pcnext = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_JALR = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__name = 
        std::string{"JALR"};
    __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__31__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__31__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__31__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__31__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__31__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__32__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__32__opcode_i = 0x3bU;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__32__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__32__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__32__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__32__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__32__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__32__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__32__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_word = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__name = 
        std::string{"OP-32 ADDW"};
    __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__33__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__33__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__33__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__33__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__33__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__34__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__funct7b30_i = 1U;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__34__opcode_i = 0x3bU;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__34__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__34__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__34__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__34__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__34__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__34__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__34__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_word = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__name = 
        std::string{"OP-32 SUBW"};
    __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__35__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__35__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__35__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__35__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__35__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__36__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__36__opcode_i = 0x1bU;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__36__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__36__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__36__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__36__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__36__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__36__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__36__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_ALUControl = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_word = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__name = 
        std::string{"OP-IMM-32 ADDIW"};
    __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__37__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__37__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__37__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__37__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__37__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__38__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__apply_inputs__38__opcode_i = 0x1bU;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__38__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__38__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__38__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__38__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__38__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__38__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__38__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_ALUControl = 5U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_word = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__name = 
        std::string{"OP-IMM-32 SRLIW"};
    __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__39__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__39__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__39__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__39__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__39__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__apply_inputs__40__V = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__C = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__N = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__Z = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__funct7b30_i = 1U;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__apply_inputs__40__opcode_i = 0x1bU;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__40__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__40__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__40__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__40__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__40__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__40__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__40__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcB = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_pcnext = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_ALUControl = 0xdU;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_word = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__exp_regWriteEnable = 1U;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__name = 
        std::string{"OP-IMM-32 SRAIW"};
    __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__41__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__41__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__41__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__41__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__41__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__42__exp_take = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__Z = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__42__name = 
        std::string{"BEQ taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__43__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__43__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__43__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__43__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__43__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__43__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__43__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__43__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__43__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__42__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__44__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__44__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__44__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__44__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__44__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__45__exp_take = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__funct3_i = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__45__name = 
        std::string{"BEQ not taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__46__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__46__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__46__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__46__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__46__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__46__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__46__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__46__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__46__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__45__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__47__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__47__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__47__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__47__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__47__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__48__exp_take = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__funct3_i = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__48__name = 
        std::string{"BNE taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__49__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__49__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__49__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__49__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__49__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__49__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__49__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__49__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__49__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__48__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__50__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__50__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__50__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__50__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__50__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__51__exp_take = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__Z = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__funct3_i = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__51__name = 
        std::string{"BNE not taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__52__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__52__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__52__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__52__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__52__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__52__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__52__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__52__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__52__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__51__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__53__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__53__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__53__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__53__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__53__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__54__exp_take = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__N = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__funct3_i = 4U;
    __Vtask_tb_controlunit__DOT__run_branch_case__54__name = 
        std::string{"BLT taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__55__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__55__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__55__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__55__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__55__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__55__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__55__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__55__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__55__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__54__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__56__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__56__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__56__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__56__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__56__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__57__exp_take = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__funct3_i = 4U;
    __Vtask_tb_controlunit__DOT__run_branch_case__57__name = 
        std::string{"BLT not taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__58__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__58__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__58__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__58__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__58__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__58__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__58__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__58__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__58__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__57__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__59__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__59__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__59__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__59__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__59__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__60__exp_take = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__run_branch_case__60__name = 
        std::string{"BGE taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__61__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__61__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__61__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__61__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__61__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__61__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__61__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__61__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__61__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__60__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__62__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__62__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__62__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__62__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__62__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__63__exp_take = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__N = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__funct3_i = 5U;
    __Vtask_tb_controlunit__DOT__run_branch_case__63__name = 
        std::string{"BGE not taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__64__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__64__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__64__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__64__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__64__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__64__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__64__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__64__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__64__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__63__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__65__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__65__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__65__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__65__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__65__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__66__exp_take = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__C = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__funct3_i = 6U;
    __Vtask_tb_controlunit__DOT__run_branch_case__66__name = 
        std::string{"BLTU taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__67__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__67__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__67__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__67__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__67__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__67__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__67__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__67__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__67__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__66__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__68__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__68__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__68__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__68__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__68__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__69__exp_take = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__funct3_i = 6U;
    __Vtask_tb_controlunit__DOT__run_branch_case__69__name = 
        std::string{"BLTU not taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__70__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__70__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__70__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__70__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__70__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__70__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__70__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__70__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__70__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__69__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__71__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__71__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__71__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__71__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__71__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__72__exp_take = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__C = 1U;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__funct3_i = 7U;
    __Vtask_tb_controlunit__DOT__run_branch_case__72__name = 
        std::string{"BGEU taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__73__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__73__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__73__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__73__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__73__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__73__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__73__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__73__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__73__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__72__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__74__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__74__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__74__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__74__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__74__exp_sel_mux_writeback);
    }
    __Vtask_tb_controlunit__DOT__run_branch_case__75__exp_take = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__V = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__C = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__N = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__Z = 0U;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__funct3_i = 7U;
    __Vtask_tb_controlunit__DOT__run_branch_case__75__name = 
        std::string{"BGEU not taken"};
    __Vtask_tb_controlunit__DOT__apply_inputs__76__V 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__V;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__C 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__C;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__N 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__N;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__Z 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__Z;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__funct7b30_i = 0U;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__funct3_i 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__funct3_i;
    __Vtask_tb_controlunit__DOT__apply_inputs__76__opcode_i = 0x63U;
    vlSelfRef.tb_controlunit__DOT__opcode = __Vtask_tb_controlunit__DOT__apply_inputs__76__opcode_i;
    vlSelfRef.tb_controlunit__DOT__funct3 = __Vtask_tb_controlunit__DOT__apply_inputs__76__funct3_i;
    vlSelfRef.tb_controlunit__DOT__funct7 = __Vtask_tb_controlunit__DOT__apply_inputs__76__funct7b30_i;
    vlSelfRef.tb_controlunit__DOT__Zero = __Vtask_tb_controlunit__DOT__apply_inputs__76__Z;
    vlSelfRef.tb_controlunit__DOT__Negative = __Vtask_tb_controlunit__DOT__apply_inputs__76__N;
    vlSelfRef.tb_controlunit__DOT__Carry = __Vtask_tb_controlunit__DOT__apply_inputs__76__C;
    vlSelfRef.tb_controlunit__DOT__Overflow = __Vtask_tb_controlunit__DOT__apply_inputs__76__V;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_controlunit.sv", 
                                         83);
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_writeback = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcA = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcB = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_pcnext 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__exp_take;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_JALR = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_ALUControl = 8U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_word = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_store = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_load = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__exp_regWriteEnable = 0U;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__name 
        = __Vtask_tb_controlunit__DOT__run_branch_case__75__name;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0;
    __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 1U;
    if (((IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_regWriteEnable))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__load) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_load))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__store) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_store))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__word) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_word))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__ALUControl) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_ALUControl))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__JALR) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_JALR))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_pcnext))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcB) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcB))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcA))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (((IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_writeback) 
         != (IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_writeback))) {
        __Vtask_tb_controlunit__DOT__expect_outputs__77__ok = 0U;
    }
    if (__Vtask_tb_controlunit__DOT__expect_outputs__77__ok) {
        VL_WRITEF_NX("[ OK ] %@\n",0,-1,&(__Vtask_tb_controlunit__DOT__expect_outputs__77__name));
    } else {
        vlSelfRef.tb_controlunit__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_controlunit__DOT__errors);
        VL_WRITEF_NX("[FAIL] %@\n  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b\n",0,
                     -1,&(__Vtask_tb_controlunit__DOT__expect_outputs__77__name),
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__regWriteEnable),
                     1,vlSelfRef.tb_controlunit__DOT__load,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__store),
                     1,vlSelfRef.tb_controlunit__DOT__word,
                     4,(IData)(vlSelfRef.tb_controlunit__DOT__ALUControl),
                     1,vlSelfRef.tb_controlunit__DOT__JALR,
                     1,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext),
                     1,vlSelfRef.tb_controlunit__DOT__sel_mux_srcB,
                     2,(IData)(vlSelfRef.tb_controlunit__DOT__sel_mux_srcA),
                     2,vlSelfRef.tb_controlunit__DOT__sel_mux_writeback,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_regWriteEnable),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_load,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_store),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_word,
                     4,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_ALUControl),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_JALR,
                     1,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_pcnext),
                     1,__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcB,
                     2,(IData)(__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_srcA),
                     2,__Vtask_tb_controlunit__DOT__expect_outputs__77__exp_sel_mux_writeback);
    }
    if ((0U == vlSelfRef.tb_controlunit__DOT__errors)) {
        VL_WRITEF_NX("\n==============================\nALL CONTROL UNIT TESTS PASSED\n==============================\n\n",0);
        VL_FINISH_MT("testbench/tb_controlunit.sv", 334, "");
    } else {
        VL_WRITEF_NX("\n=========================\nCONTROL UNIT TESTS FAILED : %0d\n===========================\n\n[%0t] %%Fatal: tb_controlunit.sv:339: Assertion failed in %Ntb_controlunit\n",0,
                     32,vlSelfRef.tb_controlunit__DOT__errors,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("testbench/tb_controlunit.sv", 339, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__act(Vtb_controlunit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_controlunit___024root___eval_triggers__act(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_triggers__act\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_controlunit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
