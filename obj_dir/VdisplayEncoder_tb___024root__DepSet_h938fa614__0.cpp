// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdisplayEncoder_tb.h for the primary calling header

#include "VdisplayEncoder_tb__pch.h"
#include "VdisplayEncoder_tb__Syms.h"
#include "VdisplayEncoder_tb___024root.h"

VL_INLINE_OPT VlCoroutine VdisplayEncoder_tb___024root___eval_initial__TOP__Vtiming__0(VdisplayEncoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.displayEncoder_tb__DOT__result = 0x1e240U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "displayEncoder_tb.sv", 
                                         13);
    vlSelfRef.displayEncoder_tb__DOT__result = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "displayEncoder_tb.sv", 
                                         14);
    vlSelfRef.displayEncoder_tb__DOT__result = 0xf423fU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "displayEncoder_tb.sv", 
                                         15);
    VL_FINISH_MT("displayEncoder_tb.sv", 17, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VdisplayEncoder_tb___024root___dump_triggers__act(VdisplayEncoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VdisplayEncoder_tb___024root___eval_triggers__act(VdisplayEncoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.displayEncoder_tb__DOT__displayBits 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__displayEncoder_tb__DOT__displayBits__0));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.displayEncoder_tb__DOT__result 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__displayEncoder_tb__DOT__result__0));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__displayEncoder_tb__DOT__displayBits__0 
        = vlSelfRef.displayEncoder_tb__DOT__displayBits;
    vlSelfRef.__Vtrigprevexpr___TOP__displayEncoder_tb__DOT__result__0 
        = vlSelfRef.displayEncoder_tb__DOT__result;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VdisplayEncoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VdisplayEncoder_tb___024root___nba_sequent__TOP__0(VdisplayEncoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Result: %7#, DisplayBits: %b\n",0,
                     20,vlSelfRef.displayEncoder_tb__DOT__result,
                     48,vlSelfRef.displayEncoder_tb__DOT__displayBits);
    }
}
