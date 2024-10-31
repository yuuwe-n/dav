// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VminiALU_top__pch.h"

//============================================================
// Constructors

VminiALU_top::VminiALU_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VminiALU_top__Syms(contextp(), _vcname__, this)}
    , switches{vlSymsp->TOP.switches}
    , leds{vlSymsp->TOP.leds}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VminiALU_top::VminiALU_top(const char* _vcname__)
    : VminiALU_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VminiALU_top::~VminiALU_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VminiALU_top___024root___eval_debug_assertions(VminiALU_top___024root* vlSelf);
#endif  // VL_DEBUG
void VminiALU_top___024root___eval_static(VminiALU_top___024root* vlSelf);
void VminiALU_top___024root___eval_initial(VminiALU_top___024root* vlSelf);
void VminiALU_top___024root___eval_settle(VminiALU_top___024root* vlSelf);
void VminiALU_top___024root___eval(VminiALU_top___024root* vlSelf);

void VminiALU_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VminiALU_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VminiALU_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VminiALU_top___024root___eval_static(&(vlSymsp->TOP));
        VminiALU_top___024root___eval_initial(&(vlSymsp->TOP));
        VminiALU_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VminiALU_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VminiALU_top::eventsPending() { return false; }

uint64_t VminiALU_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VminiALU_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VminiALU_top___024root___eval_final(VminiALU_top___024root* vlSelf);

VL_ATTR_COLD void VminiALU_top::final() {
    VminiALU_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VminiALU_top::hierName() const { return vlSymsp->name(); }
const char* VminiALU_top::modelName() const { return "VminiALU_top"; }
unsigned VminiALU_top::threads() const { return 1; }
void VminiALU_top::prepareClone() const { contextp()->prepareClone(); }
void VminiALU_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
