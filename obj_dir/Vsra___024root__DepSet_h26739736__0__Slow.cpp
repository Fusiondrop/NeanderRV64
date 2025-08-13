// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsra.h for the primary calling header

#include "Vsra__pch.h"
#include "Vsra___024root.h"

VL_ATTR_COLD void Vsra___024root___eval_static(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_static\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsra___024root___eval_final(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_final\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsra___024root___dump_triggers__stl(Vsra___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsra___024root___eval_phase__stl(Vsra___024root* vlSelf);

VL_ATTR_COLD void Vsra___024root___eval_settle(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_settle\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsra___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_sra.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsra___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsra___024root___dump_triggers__stl(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___dump_triggers__stl\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vsra___024root___act_sequent__TOP__0(Vsra___024root* vlSelf);

VL_ATTR_COLD void Vsra___024root___eval_stl(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_stl\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsra___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsra___024root___eval_triggers__stl(Vsra___024root* vlSelf);

VL_ATTR_COLD bool Vsra___024root___eval_phase__stl(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___eval_phase__stl\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsra___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsra___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsra___024root___dump_triggers__act(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___dump_triggers__act\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsra___024root___dump_triggers__nba(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___dump_triggers__nba\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsra___024root___ctor_var_reset(Vsra___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsra___024root___ctor_var_reset\n"); );
    Vsra__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_sra__DOT__dataIn = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4326605590910862152ull);
    vlSelf->tb_sra__DOT__DataOut = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17616919143956762404ull);
    vlSelf->tb_sra__DOT__amount = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3685374783341071335ull);
    }
