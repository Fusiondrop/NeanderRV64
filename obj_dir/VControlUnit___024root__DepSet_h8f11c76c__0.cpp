// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit___024root.h"

VL_ATTR_COLD void VControlUnit___024root___eval_initial__TOP(VControlUnit___024root* vlSelf);
VlCoroutine VControlUnit___024root___eval_initial__TOP__Vtiming__0(VControlUnit___024root* vlSelf);
VlCoroutine VControlUnit___024root___eval_initial__TOP__Vtiming__1(VControlUnit___024root* vlSelf);

void VControlUnit___024root___eval_initial(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VControlUnit___024root___eval_initial__TOP(vlSelf);
    VControlUnit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VControlUnit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine VControlUnit___024root___eval_initial__TOP__Vtiming__0(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial__TOP__Vtiming__0\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vtask_tb_ProgramCounter__DOT__do_tick__1__next_pc;
    __Vtask_tb_ProgramCounter__DOT__do_tick__1__next_pc = 0;
    QData/*63:0*/ __Vtask_tb_ProgramCounter__DOT__do_tick__2__next_pc;
    __Vtask_tb_ProgramCounter__DOT__do_tick__2__next_pc = 0;
    QData/*63:0*/ __Vtask_tb_ProgramCounter__DOT__do_tick__3__next_pc;
    __Vtask_tb_ProgramCounter__DOT__do_tick__3__next_pc = 0;
    QData/*63:0*/ __Vtask_tb_ProgramCounter__DOT__do_tick__4__next_pc;
    __Vtask_tb_ProgramCounter__DOT__do_tick__4__next_pc = 0;
    // Body
    vlSelfRef.tb_ProgramCounter__DOT__rst = 1U;
    vlSelfRef.tb_ProgramCounter__DOT__PC_in = 0x1234ULL;
    co_await vlSelfRef.__VtrigSched_h0e2caa4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ProgramCounter.clk)", 
                                                         "testbench/tb_ProgramCounter.sv", 
                                                         25);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_ProgramCounter.sv", 
                                         26);
    VL_WRITEF_NX("Teste 1 OK: reset -> PC_out = %x\n",0,
                 64,vlSelfRef.tb_ProgramCounter__DOT__PC_out);
    vlSelfRef.tb_ProgramCounter__DOT__rst = 0U;
    __Vtask_tb_ProgramCounter__DOT__do_tick__1__next_pc = 4ULL;
    vlSelfRef.tb_ProgramCounter__DOT__PC_in = __Vtask_tb_ProgramCounter__DOT__do_tick__1__next_pc;
    co_await vlSelfRef.__VtrigSched_h0e2caa4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ProgramCounter.clk)", 
                                                         "testbench/tb_ProgramCounter.sv", 
                                                         25);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_ProgramCounter.sv", 
                                         26);
    VL_WRITEF_NX("Teste 2 OK: PC_out = %x\n",0,64,vlSelfRef.tb_ProgramCounter__DOT__PC_out);
    __Vtask_tb_ProgramCounter__DOT__do_tick__2__next_pc = 8ULL;
    vlSelfRef.tb_ProgramCounter__DOT__PC_in = __Vtask_tb_ProgramCounter__DOT__do_tick__2__next_pc;
    co_await vlSelfRef.__VtrigSched_h0e2caa4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ProgramCounter.clk)", 
                                                         "testbench/tb_ProgramCounter.sv", 
                                                         25);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_ProgramCounter.sv", 
                                         26);
    VL_WRITEF_NX("Teste 3 OK: PC_out = %x\n",0,64,vlSelfRef.tb_ProgramCounter__DOT__PC_out);
    vlSelfRef.tb_ProgramCounter__DOT__rst = 1U;
    __Vtask_tb_ProgramCounter__DOT__do_tick__3__next_pc = 0xfcULL;
    vlSelfRef.tb_ProgramCounter__DOT__PC_in = __Vtask_tb_ProgramCounter__DOT__do_tick__3__next_pc;
    co_await vlSelfRef.__VtrigSched_h0e2caa4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ProgramCounter.clk)", 
                                                         "testbench/tb_ProgramCounter.sv", 
                                                         25);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_ProgramCounter.sv", 
                                         26);
    VL_WRITEF_NX("Teste 4 OK: reset -> PC_out = %x\n",0,
                 64,vlSelfRef.tb_ProgramCounter__DOT__PC_out);
    vlSelfRef.tb_ProgramCounter__DOT__rst = 0U;
    __Vtask_tb_ProgramCounter__DOT__do_tick__4__next_pc = 0x100000040ULL;
    vlSelfRef.tb_ProgramCounter__DOT__PC_in = __Vtask_tb_ProgramCounter__DOT__do_tick__4__next_pc;
    co_await vlSelfRef.__VtrigSched_h0e2caa4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ProgramCounter.clk)", 
                                                         "testbench/tb_ProgramCounter.sv", 
                                                         25);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "testbench/tb_ProgramCounter.sv", 
                                         26);
    VL_WRITEF_NX("Teste 5 OK: PC_out = %x\nTodos os testes do ProgramCounter finalizaram.\n",0,
                 64,vlSelfRef.tb_ProgramCounter__DOT__PC_out);
    VL_FINISH_MT("testbench/tb_ProgramCounter.sv", 65, "");
}

void VControlUnit___024root___ico_sequent__TOP__0(VControlUnit___024root* vlSelf);

void VControlUnit___024root___eval_ico(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_ico\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VControlUnit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VControlUnit___024root___ico_sequent__TOP__0(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___ico_sequent__TOP__0\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux_out = ((0U == (IData)(vlSelfRef.sel))
                          ? (IData)(vlSelfRef.data0)
                          : ((1U == (IData)(vlSelfRef.sel))
                              ? (IData)(vlSelfRef.data1)
                              : ((2U == (IData)(vlSelfRef.sel))
                                  ? (IData)(vlSelfRef.data2)
                                  : (IData)(vlSelfRef.data3))));
}

void VControlUnit___024root___eval_triggers__ico(VControlUnit___024root* vlSelf);

bool VControlUnit___024root___eval_phase__ico(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__ico\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VControlUnit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VControlUnit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VControlUnit___024root___eval_act(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_act\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VControlUnit___024root___nba_sequent__TOP__0(VControlUnit___024root* vlSelf);

void VControlUnit___024root___eval_nba(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_nba\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VControlUnit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VControlUnit___024root___nba_sequent__TOP__0(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___nba_sequent__TOP__0\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ProgramCounter__DOT__PC_out = ((IData)(vlSelfRef.tb_ProgramCounter__DOT__rst)
                                                 ? 0ULL
                                                 : vlSelfRef.tb_ProgramCounter__DOT__PC_in);
}

void VControlUnit___024root___timing_resume(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___timing_resume\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0e2caa4e__0.resume(
                                                   "@(posedge tb_ProgramCounter.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VControlUnit___024root___timing_commit(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___timing_commit\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0e2caa4e__0.commit(
                                                   "@(posedge tb_ProgramCounter.clk)");
    }
}

void VControlUnit___024root___eval_triggers__act(VControlUnit___024root* vlSelf);

bool VControlUnit___024root___eval_phase__act(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__act\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VControlUnit___024root___eval_triggers__act(vlSelf);
    VControlUnit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VControlUnit___024root___timing_resume(vlSelf);
        VControlUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VControlUnit___024root___eval_phase__nba(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__nba\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VControlUnit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__ico(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__nba(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__act(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VControlUnit___024root___eval(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VControlUnit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Generic_components/mux4.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VControlUnit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VControlUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Generic_components/mux4.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VControlUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Generic_components/mux4.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VControlUnit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VControlUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VControlUnit___024root___eval_debug_assertions(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_debug_assertions\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.data0 & 0xfeU)))) {
        Verilated::overWidthError("data0");}
    if (VL_UNLIKELY(((vlSelfRef.data1 & 0xfeU)))) {
        Verilated::overWidthError("data1");}
    if (VL_UNLIKELY(((vlSelfRef.data2 & 0xfeU)))) {
        Verilated::overWidthError("data2");}
    if (VL_UNLIKELY(((vlSelfRef.data3 & 0xfeU)))) {
        Verilated::overWidthError("data3");}
    if (VL_UNLIKELY(((vlSelfRef.sel & 0xfcU)))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
