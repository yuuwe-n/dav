// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VdisplayEncoder__pch.h"

//============================================================
// Constructors

VdisplayEncoder::VdisplayEncoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VdisplayEncoder__Syms(contextp(), _vcname__, this)}
    , result{vlSymsp->TOP.result}
    , displayBits{vlSymsp->TOP.displayBits}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VdisplayEncoder::VdisplayEncoder(const char* _vcname__)
    : VdisplayEncoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VdisplayEncoder::~VdisplayEncoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VdisplayEncoder___024root___eval_debug_assertions(VdisplayEncoder___024root* vlSelf);
#endif  // VL_DEBUG
void VdisplayEncoder___024root___eval_static(VdisplayEncoder___024root* vlSelf);
void VdisplayEncoder___024root___eval_initial(VdisplayEncoder___024root* vlSelf);
void VdisplayEncoder___024root___eval_settle(VdisplayEncoder___024root* vlSelf);
void VdisplayEncoder___024root___eval(VdisplayEncoder___024root* vlSelf);

void VdisplayEncoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdisplayEncoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VdisplayEncoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VdisplayEncoder___024root___eval_static(&(vlSymsp->TOP));
        VdisplayEncoder___024root___eval_initial(&(vlSymsp->TOP));
        VdisplayEncoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VdisplayEncoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VdisplayEncoder::eventsPending() { return false; }

uint64_t VdisplayEncoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VdisplayEncoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VdisplayEncoder___024root___eval_final(VdisplayEncoder___024root* vlSelf);

VL_ATTR_COLD void VdisplayEncoder::final() {
    VdisplayEncoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VdisplayEncoder::hierName() const { return vlSymsp->name(); }
const char* VdisplayEncoder::modelName() const { return "VdisplayEncoder"; }
unsigned VdisplayEncoder::threads() const { return 1; }
void VdisplayEncoder::prepareClone() const { contextp()->prepareClone(); }
void VdisplayEncoder::atClone() const {
    contextp()->threadPoolpOnClone();
}
