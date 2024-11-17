// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU.h for the primary calling header

#include "VminiALU__pch.h"
#include "VminiALU__Syms.h"
#include "VminiALU___024root.h"

void VminiALU___024root___ctor_var_reset(VminiALU___024root* vlSelf);

VminiALU___024root::VminiALU___024root(VminiALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VminiALU___024root___ctor_var_reset(this);
}

void VminiALU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VminiALU___024root::~VminiALU___024root() {
}
