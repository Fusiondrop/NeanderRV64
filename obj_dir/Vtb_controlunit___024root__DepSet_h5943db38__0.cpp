// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_controlunit.h for the primary calling header

#include "Vtb_controlunit__pch.h"
#include "Vtb_controlunit___024root.h"

VlCoroutine Vtb_controlunit___024root___eval_initial__TOP__Vtiming__0(Vtb_controlunit___024root* vlSelf);

void Vtb_controlunit___024root___eval_initial(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_initial\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_controlunit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_controlunit___024root___act_sequent__TOP__0(Vtb_controlunit___024root* vlSelf);

void Vtb_controlunit___024root___eval_act(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_act\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_controlunit___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_controlunit___024root___act_sequent__TOP__0(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___act_sequent__TOP__0\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_controlunit__DOT__Dut__DOT__take_branch;
    tb_controlunit__DOT__Dut__DOT__take_branch = 0;
    CData/*0:0*/ tb_controlunit__DOT__Dut__DOT__signed_lt;
    tb_controlunit__DOT__Dut__DOT__signed_lt = 0;
    // Body
    vlSelfRef.tb_controlunit__DOT__store = 0U;
    vlSelfRef.tb_controlunit__DOT__load = 0U;
    vlSelfRef.tb_controlunit__DOT__regWriteEnable = 0U;
    vlSelfRef.tb_controlunit__DOT__word = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                                vlSelfRef.tb_controlunit__DOT__store = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                                vlSelfRef.tb_controlunit__DOT__word = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            vlSelfRef.tb_controlunit__DOT__word = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                                vlSelfRef.tb_controlunit__DOT__load = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_controlunit__DOT__JALR = 0U;
    vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 0U;
    vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
    vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
    vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
    tb_controlunit__DOT__Dut__DOT__signed_lt = ((IData)(vlSelfRef.tb_controlunit__DOT__Negative) 
                                                ^ (IData)(vlSelfRef.tb_controlunit__DOT__Overflow));
    vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext = 0U;
    tb_controlunit__DOT__Dut__DOT__take_branch = 0U;
    if ((0x40U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                                vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                                vlSelfRef.tb_controlunit__DOT__JALR = 0U;
                                vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                                vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 1U;
                                vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 2U;
                                vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
                                vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                            vlSelfRef.tb_controlunit__DOT__JALR = 1U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 2U;
                            vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 0U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                        vlSelfRef.tb_controlunit__DOT__ALUControl = 8U;
                        tb_controlunit__DOT__Dut__DOT__take_branch 
                            = (1U & ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                      ? ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                          ? ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                              ? (IData)(vlSelfRef.tb_controlunit__DOT__Carry)
                                              : (~ (IData)(vlSelfRef.tb_controlunit__DOT__Carry)))
                                          : ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                              ? (~ (IData)(tb_controlunit__DOT__Dut__DOT__signed_lt))
                                              : (IData)(tb_controlunit__DOT__Dut__DOT__signed_lt)))
                                      : ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__funct3) 
                                                   >> 1U))) 
                                         && (1U & (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.tb_controlunit__DOT__Zero))
                                                    : (IData)(vlSelfRef.tb_controlunit__DOT__Zero))))));
                        vlSelfRef.tb_controlunit__DOT__sel_mux_pcnext 
                            = tb_controlunit__DOT__Dut__DOT__take_branch;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                            vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 0U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                            vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
                            vlSelfRef.tb_controlunit__DOT__ALUControl 
                                = ((0U == (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                    ? ((IData)(vlSelfRef.tb_controlunit__DOT__funct7)
                                        ? 8U : 0U) : 
                                   ((1U == (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                     ? 1U : ((5U == (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                              ? ((IData)(vlSelfRef.tb_controlunit__DOT__funct7)
                                                  ? 0xdU
                                                  : 5U)
                                              : 0U)));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 2U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
                        vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 0U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
                    vlSelfRef.tb_controlunit__DOT__ALUControl 
                        = ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                            ? ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_controlunit__DOT__funct7)
                                                    ? 0xdU
                                                    : 5U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                    ? 3U : 2U) : ((1U 
                                                   & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.tb_controlunit__DOT__funct7)
                                                    ? 8U
                                                    : 0U))));
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                        vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                        vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                        vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
                        vlSelfRef.tb_controlunit__DOT__ALUControl 
                            = ((0U == (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                ? 0U : ((1U == (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                         ? 1U : ((5U 
                                                  == (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_controlunit__DOT__funct7)
                                                   ? 0xdU
                                                   : 5U)
                                                  : 0U)));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 1U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
                    vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 0U;
                vlSelfRef.tb_controlunit__DOT__ALUControl 
                    = ((4U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                        ? ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                            ? ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                ? 7U : 6U) : ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                               ? ((IData)(vlSelfRef.tb_controlunit__DOT__funct7)
                                                   ? 0xdU
                                                   : 5U)
                                               : 4U))
                        : ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                            ? ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                ? 3U : 2U) : ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__funct3))
                                               ? 1U
                                               : 0U)));
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_controlunit__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb_controlunit__DOT__opcode))) {
                    vlSelfRef.tb_controlunit__DOT__regWriteEnable = 1U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_srcB = 1U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_srcA = 0U;
                    vlSelfRef.tb_controlunit__DOT__sel_mux_writeback = 1U;
                    vlSelfRef.tb_controlunit__DOT__ALUControl = 0U;
                }
            }
        }
    }
}

void Vtb_controlunit___024root___eval_nba(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_nba\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_controlunit___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_controlunit___024root___timing_resume(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___timing_resume\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_controlunit___024root___eval_triggers__act(Vtb_controlunit___024root* vlSelf);

bool Vtb_controlunit___024root___eval_phase__act(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_phase__act\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_controlunit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_controlunit___024root___timing_resume(vlSelf);
        Vtb_controlunit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_controlunit___024root___eval_phase__nba(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_phase__nba\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_controlunit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__nba(Vtb_controlunit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_controlunit___024root___dump_triggers__act(Vtb_controlunit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_controlunit___024root___eval(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_controlunit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_controlunit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_controlunit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/tb_controlunit.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_controlunit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_controlunit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_controlunit___024root___eval_debug_assertions(Vtb_controlunit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_controlunit___024root___eval_debug_assertions\n"); );
    Vtb_controlunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
