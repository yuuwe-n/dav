// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit.h for the primary calling header

#include "VsevenSegDigit__pch.h"
#include "VsevenSegDigit__Syms.h"
#include "VsevenSegDigit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit___024root___dump_triggers__ico(VsevenSegDigit___024root* vlSelf);
#endif  // VL_DEBUG

void VsevenSegDigit___024root___eval_triggers__ico(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsevenSegDigit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit___024root___dump_triggers__act(VsevenSegDigit___024root* vlSelf);
#endif  // VL_DEBUG

void VsevenSegDigit___024root___eval_triggers__act(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsevenSegDigit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
