// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VclockDivider.h for the primary calling header

#include "VclockDivider__pch.h"
#include "VclockDivider__Syms.h"
#include "VclockDivider___024root.h"

void VclockDivider___024root___ctor_var_reset(VclockDivider___024root* vlSelf);

VclockDivider___024root::VclockDivider___024root(VclockDivider__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VclockDivider___024root___ctor_var_reset(this);
}

void VclockDivider___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VclockDivider___024root::~VclockDivider___024root() {
}
