// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsra.h for the primary calling header

#include "Vsra__pch.h"
#include "Vsra___024root.h"

VlCoroutine Vsra___024root___eval_initial__TOP__Vtiming__0(Vsra___024root* vlSelf);

void Vsra___024root___eval_initial(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_initial\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsra___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vsra___024root___eval_initial__TOP__Vtiming__0(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sra__DOT__dataIn = 0x8100U;
    vlSelfRef.tb_sra__DOT__amount = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_sra.sv", 
                                         10);
    VL_WRITEF_NX("Test 1: %b >> %b by %2#\n",0,16,vlSelfRef.tb_sra__DOT__dataIn,
                 16,(IData)(vlSelfRef.tb_sra__DOT__DataOut),
                 4,vlSelfRef.tb_sra__DOT__amount);
    vlSelfRef.tb_sra__DOT__dataIn = 0x100U;
    vlSelfRef.tb_sra__DOT__amount = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "testbench/tb_sra.sv", 
                                         12);
    VL_WRITEF_NX("Test 2: %b >> %b by %2#\n",0,16,vlSelfRef.tb_sra__DOT__dataIn,
                 16,(IData)(vlSelfRef.tb_sra__DOT__DataOut),
                 4,vlSelfRef.tb_sra__DOT__amount);
}

void Vsra___024root___act_sequent__TOP__0(Vsra___024root* vlSelf);

void Vsra___024root___eval_act(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_act\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsra___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsra___024root___act_sequent__TOP__0(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___act_sequent__TOP__0\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ tb_sra__DOT__DUT__DOT__s__0280__029;
    tb_sra__DOT__DUT__DOT__s__0280__029 = 0;
    SData/*15:0*/ tb_sra__DOT__DUT__DOT__s__0281__029;
    tb_sra__DOT__DUT__DOT__s__0281__029 = 0;
    SData/*15:0*/ tb_sra__DOT__DUT__DOT__s__0282__029;
    tb_sra__DOT__DUT__DOT__s__0282__029 = 0;
    // Body
    tb_sra__DOT__DUT__DOT__s__0280__029 = ((1U & (IData)(vlSelfRef.tb_sra__DOT__amount))
                                            ? ((0x8000U 
                                                & (IData)(vlSelfRef.tb_sra__DOT__dataIn)) 
                                               | (0x7fffU 
                                                  & ((IData)(vlSelfRef.tb_sra__DOT__dataIn) 
                                                     >> 1U)))
                                            : (IData)(vlSelfRef.tb_sra__DOT__dataIn));
    tb_sra__DOT__DUT__DOT__s__0281__029 = ((2U & (IData)(vlSelfRef.tb_sra__DOT__amount))
                                            ? ((0xc000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(tb_sra__DOT__DUT__DOT__s__0280__029) 
                                                                  >> 0xfU)))) 
                                                   << 0xeU)) 
                                               | (0x3fffU 
                                                  & ((IData)(tb_sra__DOT__DUT__DOT__s__0280__029) 
                                                     >> 2U)))
                                            : (IData)(tb_sra__DOT__DUT__DOT__s__0280__029));
    tb_sra__DOT__DUT__DOT__s__0282__029 = ((4U & (IData)(vlSelfRef.tb_sra__DOT__amount))
                                            ? ((0xf000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(tb_sra__DOT__DUT__DOT__s__0281__029) 
                                                                  >> 0xfU)))) 
                                                   << 0xcU)) 
                                               | (0xfffU 
                                                  & ((IData)(tb_sra__DOT__DUT__DOT__s__0281__029) 
                                                     >> 4U)))
                                            : (IData)(tb_sra__DOT__DUT__DOT__s__0281__029));
    vlSelfRef.tb_sra__DOT__DataOut = ((8U & (IData)(vlSelfRef.tb_sra__DOT__amount))
                                       ? ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(tb_sra__DOT__DUT__DOT__s__0282__029) 
                                                             >> 0xfU)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((IData)(tb_sra__DOT__DUT__DOT__s__0282__029) 
                                                >> 8U)))
                                       : (IData)(tb_sra__DOT__DUT__DOT__s__0282__029));
}

void Vsra___024root___eval_nba(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_nba\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsra___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsra___024root___timing_resume(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___timing_resume\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsra___024root___eval_triggers__act(Vsra___024root* vlSelf);

bool Vsra___024root___eval_phase__act(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_phase__act\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsra___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsra___024root___timing_resume(vlSelf);
        Vsra___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsra___024root___eval_phase__nba(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_phase__nba\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsra___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsra___024root___dump_triggers__nba(Vsra___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsra___024root___dump_triggers__act(Vsra___024root* vlSelf);
#endif  // VL_DEBUG

void Vsra___024root___eval(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsra___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_sra.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsra___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/tb_sra.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsra___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsra___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsra___024root___eval_debug_assertions(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_debug_assertions\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
