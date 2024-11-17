// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdisplayEncoder_tb.h for the primary calling header

#include "VdisplayEncoder_tb__pch.h"
#include "VdisplayEncoder_tb__Syms.h"
#include "VdisplayEncoder_tb___024root.h"

void VdisplayEncoder_tb___024root___ctor_var_reset(VdisplayEncoder_tb___024root* vlSelf);

VdisplayEncoder_tb___024root::VdisplayEncoder_tb___024root(VdisplayEncoder_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VdisplayEncoder_tb___024root___ctor_var_reset(this);
}

void VdisplayEncoder_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VdisplayEncoder_tb___024root::~VdisplayEncoder_tb___024root() {
}
