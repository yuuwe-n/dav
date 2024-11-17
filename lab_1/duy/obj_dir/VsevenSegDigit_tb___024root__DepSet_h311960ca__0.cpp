// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit_tb.h for the primary calling header

#include "VsevenSegDigit_tb__pch.h"
#include "VsevenSegDigit_tb__Syms.h"
#include "VsevenSegDigit_tb___024root.h"

VL_INLINE_OPT VlCoroutine VsevenSegDigit_tb___024root___eval_initial__TOP__Vtiming__0(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         13);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         14);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         15);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         16);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         17);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         18);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 6U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         19);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         20);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         21);
    vlSelfRef.sevenSegDigit_tb__DOT__digit = 9U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "sevenSegDigit_tb.sv", 
                                         22);
    VL_FINISH_MT("sevenSegDigit_tb.sv", 24, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__act(VsevenSegDigit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VsevenSegDigit_tb___024root___eval_triggers__act(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.sevenSegDigit_tb__DOT__digit) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__digit__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.sevenSegDigit_tb__DOT__displayBits) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__displayBits__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__digit__0 
        = vlSelfRef.sevenSegDigit_tb__DOT__digit;
    vlSelfRef.__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__displayBits__0 
        = vlSelfRef.sevenSegDigit_tb__DOT__displayBits;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsevenSegDigit_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VsevenSegDigit_tb___024root___nba_sequent__TOP__0(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Digit: %2#, DisplayBits: %b\n",0,
                     4,vlSelfRef.sevenSegDigit_tb__DOT__digit,
                     8,(IData)(vlSelfRef.sevenSegDigit_tb__DOT__displayBits));
    }
}
