// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsra__pch.h"

//============================================================
// Constructors

Vsra::Vsra(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsra__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsra::Vsra(const char* _vcname__)
    : Vsra(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsra::~Vsra() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsra___024root___eval_debug_assertions(Vsra___024root* vlSelf);
#endif  // VL_DEBUG
void Vsra___024root___eval_static(Vsra___024root* vlSelf);
void Vsra___024root___eval_initial(Vsra___024root* vlSelf);
void Vsra___024root___eval_settle(Vsra___024root* vlSelf);
void Vsra___024root___eval(Vsra___024root* vlSelf);

void Vsra::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsra::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsra___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsra___024root___eval_static(&(vlSymsp->TOP));
        Vsra___024root___eval_initial(&(vlSymsp->TOP));
        Vsra___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsra___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsra::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsra::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsra::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsra___024root___eval_final(Vsra___024root* vlSelf);

VL_ATTR_COLD void Vsra::final() {
    Vsra___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsra::hierName() const { return vlSymsp->name(); }
const char* Vsra::modelName() const { return "Vsra"; }
unsigned Vsra::threads() const { return 1; }
void Vsra::prepareClone() const { contextp()->prepareClone(); }
void Vsra::atClone() const {
    contextp()->threadPoolpOnClone();
}
