// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VclockDivider__pch.h"

//============================================================
// Constructors

VclockDivider::VclockDivider(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VclockDivider__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , speed{vlSymsp->TOP.speed}
    , rst{vlSymsp->TOP.rst}
    , outClk{vlSymsp->TOP.outClk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VclockDivider::VclockDivider(const char* _vcname__)
    : VclockDivider(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VclockDivider::~VclockDivider() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VclockDivider___024root___eval_debug_assertions(VclockDivider___024root* vlSelf);
#endif  // VL_DEBUG
void VclockDivider___024root___eval_static(VclockDivider___024root* vlSelf);
void VclockDivider___024root___eval_initial(VclockDivider___024root* vlSelf);
void VclockDivider___024root___eval_settle(VclockDivider___024root* vlSelf);
void VclockDivider___024root___eval(VclockDivider___024root* vlSelf);

void VclockDivider::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VclockDivider::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VclockDivider___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VclockDivider___024root___eval_static(&(vlSymsp->TOP));
        VclockDivider___024root___eval_initial(&(vlSymsp->TOP));
        VclockDivider___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VclockDivider___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VclockDivider::eventsPending() { return false; }

uint64_t VclockDivider::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VclockDivider::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VclockDivider___024root___eval_final(VclockDivider___024root* vlSelf);

VL_ATTR_COLD void VclockDivider::final() {
    VclockDivider___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VclockDivider::hierName() const { return vlSymsp->name(); }
const char* VclockDivider::modelName() const { return "VclockDivider"; }
unsigned VclockDivider::threads() const { return 1; }
void VclockDivider::prepareClone() const { contextp()->prepareClone(); }
void VclockDivider::atClone() const {
    contextp()->threadPoolpOnClone();
}
