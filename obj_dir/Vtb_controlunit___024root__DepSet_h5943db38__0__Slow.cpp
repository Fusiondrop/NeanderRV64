// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_controlunit.h for the primary calling header

#include "Vtb_controlunit__pch.h"
#include "Vtb_controlunit___024root.h"

VL_ATTR_COLD void Vtb_controlunit___024root___eval_static__TOP(Vtb_controlunit___024root* vlSelf);

VL_ATTR_COLD void Vtb_controlunit___024root___eval_static(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_static\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_controlunit___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_controlunit___024root___eval_static__TOP(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_static__TOP\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_controlunit__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_controlunit___024root___eval_final(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_final\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__stl(Vtb_controlunit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_controlunit___024root___eval_phase__stl(Vtb_controlunit___024root* vlSelf);

VL_ATTR_COLD void Vtb_controlunit___024root___eval_settle(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_settle\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_controlunit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_controlunit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_controlunit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__stl(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___dump_triggers__stl\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_controlunit___024root___act_sequent__TOP__0(Vtb_controlunit___024root* vlSelf);

VL_ATTR_COLD void Vtb_controlunit___024root___eval_stl(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_stl\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_controlunit___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_controlunit___024root___eval_triggers__stl(Vtb_controlunit___024root* vlSelf);

VL_ATTR_COLD bool Vtb_controlunit___024root___eval_phase__stl(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_phase__stl\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_controlunit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_controlunit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__act(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___dump_triggers__act\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__nba(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___dump_triggers__nba\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_controlunit___024root___ctor_var_reset(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___ctor_var_reset\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_controlunit__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1185051698943812399ull);
    vlSelf->tb_controlunit__DOT__Negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3652907681954606072ull);
    vlSelf->tb_controlunit__DOT__Carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11140885976995213348ull);
    vlSelf->tb_controlunit__DOT__Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17027851779414269903ull);
    vlSelf->tb_controlunit__DOT__funct7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2618187066342840314ull);
    vlSelf->tb_controlunit__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3791578799350278928ull);
    vlSelf->tb_controlunit__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7727189002503349546ull);
    vlSelf->tb_controlunit__DOT__regWriteEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6417050662404737756ull);
    vlSelf->tb_controlunit__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17580086601828342580ull);
    vlSelf->tb_controlunit__DOT__store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6240523022058569607ull);
    vlSelf->tb_controlunit__DOT__word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1618055522512363440ull);
    vlSelf->tb_controlunit__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5068793047466170858ull);
    vlSelf->tb_controlunit__DOT__JALR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10129851604488373921ull);
    vlSelf->tb_controlunit__DOT__sel_mux_pcnext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1711861194828682470ull);
    vlSelf->tb_controlunit__DOT__sel_mux_srcB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6882672462991364371ull);
    vlSelf->tb_controlunit__DOT__sel_mux_srcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6166952405607712207ull);
    vlSelf->tb_controlunit__DOT__sel_mux_writeback = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13400565089669233296ull);
    vlSelf->tb_controlunit__DOT__errors = 0;
    }
