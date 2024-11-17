// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VdisplayEncoder_tb__pch.h"

//============================================================
// Constructors

VdisplayEncoder_tb::VdisplayEncoder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VdisplayEncoder_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VdisplayEncoder_tb::VdisplayEncoder_tb(const char* _vcname__)
    : VdisplayEncoder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VdisplayEncoder_tb::~VdisplayEncoder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VdisplayEncoder_tb___024root___eval_debug_assertions(VdisplayEncoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VdisplayEncoder_tb___024root___eval_static(VdisplayEncoder_tb___024root* vlSelf);
void VdisplayEncoder_tb___024root___eval_initial(VdisplayEncoder_tb___024root* vlSelf);
void VdisplayEncoder_tb___024root___eval_settle(VdisplayEncoder_tb___024root* vlSelf);
void VdisplayEncoder_tb___024root___eval(VdisplayEncoder_tb___024root* vlSelf);

void VdisplayEncoder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VdisplayEncoder_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VdisplayEncoder_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VdisplayEncoder_tb___024root___eval_static(&(vlSymsp->TOP));
        VdisplayEncoder_tb___024root___eval_initial(&(vlSymsp->TOP));
        VdisplayEncoder_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VdisplayEncoder_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VdisplayEncoder_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VdisplayEncoder_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VdisplayEncoder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VdisplayEncoder_tb___024root___eval_final(VdisplayEncoder_tb___024root* vlSelf);

VL_ATTR_COLD void VdisplayEncoder_tb::final() {
    VdisplayEncoder_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VdisplayEncoder_tb::hierName() const { return vlSymsp->name(); }
const char* VdisplayEncoder_tb::modelName() const { return "VdisplayEncoder_tb"; }
unsigned VdisplayEncoder_tb::threads() const { return 1; }
void VdisplayEncoder_tb::prepareClone() const { contextp()->prepareClone(); }
void VdisplayEncoder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
