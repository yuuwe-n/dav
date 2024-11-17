// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit.h for the primary calling header

#include "VsevenSegDigit__pch.h"
#include "VsevenSegDigit__Syms.h"
#include "VsevenSegDigit___024root.h"

void VsevenSegDigit___024root___ctor_var_reset(VsevenSegDigit___024root* vlSelf);

VsevenSegDigit___024root::VsevenSegDigit___024root(VsevenSegDigit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsevenSegDigit___024root___ctor_var_reset(this);
}

void VsevenSegDigit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsevenSegDigit___024root::~VsevenSegDigit___024root() {
}
