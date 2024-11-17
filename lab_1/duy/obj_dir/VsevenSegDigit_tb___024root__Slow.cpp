// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit_tb.h for the primary calling header

#include "VsevenSegDigit_tb__pch.h"
#include "VsevenSegDigit_tb__Syms.h"
#include "VsevenSegDigit_tb___024root.h"

void VsevenSegDigit_tb___024root___ctor_var_reset(VsevenSegDigit_tb___024root* vlSelf);

VsevenSegDigit_tb___024root::VsevenSegDigit_tb___024root(VsevenSegDigit_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsevenSegDigit_tb___024root___ctor_var_reset(this);
}

void VsevenSegDigit_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsevenSegDigit_tb___024root::~VsevenSegDigit_tb___024root() {
}
