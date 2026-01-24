// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_controlunit__pch.h"

//============================================================
// Constructors

Vtb_controlunit::Vtb_controlunit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_controlunit__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_controlunit::Vtb_controlunit(const char* _vcname__)
    : Vtb_controlunit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_controlunit::~Vtb_controlunit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_controlunit___024root___eval_debug_assertions(Vtb_controlunit___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_controlunit___024root___eval_static(Vtb_controlunit___024root* vlSelf);
void Vtb_controlunit___024root___eval_initial(Vtb_controlunit___024root* vlSelf);
void Vtb_controlunit___024root___eval_settle(Vtb_controlunit___024root* vlSelf);
void Vtb_controlunit___024root___eval(Vtb_controlunit___024root* vlSelf);

void Vtb_controlunit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_controlunit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_controlunit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_controlunit___024root___eval_static(&(vlSymsp->TOP));
        Vtb_controlunit___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_controlunit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_controlunit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_controlunit::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_controlunit::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_controlunit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_controlunit___024root___eval_final(Vtb_controlunit___024root* vlSelf);

VL_ATTR_COLD void Vtb_controlunit::final() {
    Vtb_controlunit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_controlunit::hierName() const { return vlSymsp->name(); }
const char* Vtb_controlunit::modelName() const { return "Vtb_controlunit"; }
unsigned Vtb_controlunit::threads() const { return 1; }
void Vtb_controlunit::prepareClone() const { contextp()->prepareClone(); }
void Vtb_controlunit::atClone() const {
    contextp()->threadPoolpOnClone();
}
