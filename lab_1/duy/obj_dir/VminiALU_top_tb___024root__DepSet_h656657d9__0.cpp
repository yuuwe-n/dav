// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU_top_tb.h for the primary calling header

#include "VminiALU_top_tb__pch.h"
#include "VminiALU_top_tb__Syms.h"
#include "VminiALU_top_tb___024root.h"

VL_INLINE_OPT VlCoroutine VminiALU_top_tb___024root___eval_initial__TOP__Vtiming__0(VminiALU_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.miniALU_top_tb__DOT__switches = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_top_tb.sv", 
                                         22);
    vlSelfRef.miniALU_top_tb__DOT__switches = 0x27U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_top_tb.sv", 
                                         27);
    vlSelfRef.miniALU_top_tb__DOT__switches = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_top_tb.sv", 
                                         32);
    vlSelfRef.miniALU_top_tb__DOT__switches = 0x68U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_top_tb.sv", 
                                         37);
    vlSelfRef.miniALU_top_tb__DOT__switches = 0x3ffU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_top_tb.sv", 
                                         41);
    VL_FINISH_MT("miniALU_top_tb.sv", 43, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top_tb___024root___dump_triggers__act(VminiALU_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VminiALU_top_tb___024root___eval_triggers__act(VminiALU_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.miniALU_top_tb__DOT__displayBits 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__miniALU_top_tb__DOT__displayBits__0));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__miniALU_top_tb__DOT__switches__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__miniALU_top_tb__DOT__displayBits__0 
        = vlSelfRef.miniALU_top_tb__DOT__displayBits;
    vlSelfRef.__Vtrigprevexpr___TOP__miniALU_top_tb__DOT__switches__0 
        = vlSelfRef.miniALU_top_tb__DOT__switches;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VminiALU_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VminiALU_top_tb___024root___nba_sequent__TOP__0(VminiALU_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Time=%0t | Switches=%b | DisplayBits=%b\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,10,(IData)(vlSelfRef.miniALU_top_tb__DOT__switches),
                     48,vlSelfRef.miniALU_top_tb__DOT__displayBits);
    }
}
