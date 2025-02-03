// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdisplayEncoder.h for the primary calling header

#include "VdisplayEncoder__pch.h"
#include "VdisplayEncoder__Syms.h"
#include "VdisplayEncoder___024root.h"

void VdisplayEncoder___024root___ctor_var_reset(VdisplayEncoder___024root* vlSelf);

VdisplayEncoder___024root::VdisplayEncoder___024root(VdisplayEncoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VdisplayEncoder___024root___ctor_var_reset(this);
}

void VdisplayEncoder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VdisplayEncoder___024root::~VdisplayEncoder___024root() {
}
