// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit_tb.h for the primary calling header

#include "VsevenSegDigit_tb__pch.h"
#include "VsevenSegDigit_tb___024root.h"

VlCoroutine VsevenSegDigit_tb___024root___eval_initial__TOP__Vtiming__0(VsevenSegDigit_tb___024root* vlSelf);

void VsevenSegDigit_tb___024root___eval_initial(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsevenSegDigit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__digit__0 
        = vlSelfRef.sevenSegDigit_tb__DOT__digit;
    vlSelfRef.__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__displayBits__0 
        = vlSelfRef.sevenSegDigit_tb__DOT__displayBits;
}

void VsevenSegDigit_tb___024root___act_sequent__TOP__0(VsevenSegDigit_tb___024root* vlSelf);

void VsevenSegDigit_tb___024root___eval_act(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VsevenSegDigit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VsevenSegDigit_tb__ConstPool__TABLE_h99d7759d_0;

VL_INLINE_OPT void VsevenSegDigit_tb___024root___act_sequent__TOP__0(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.sevenSegDigit_tb__DOT__digit;
    vlSelfRef.sevenSegDigit_tb__DOT__displayBits = 
        VsevenSegDigit_tb__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx1];
}

void VsevenSegDigit_tb___024root___nba_sequent__TOP__0(VsevenSegDigit_tb___024root* vlSelf);

void VsevenSegDigit_tb___024root___eval_nba(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsevenSegDigit_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VsevenSegDigit_tb___024root___timing_resume(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VsevenSegDigit_tb___024root___eval_triggers__act(VsevenSegDigit_tb___024root* vlSelf);

bool VsevenSegDigit_tb___024root___eval_phase__act(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsevenSegDigit_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsevenSegDigit_tb___024root___timing_resume(vlSelf);
        VsevenSegDigit_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsevenSegDigit_tb___024root___eval_phase__nba(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsevenSegDigit_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__nba(VsevenSegDigit_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__act(VsevenSegDigit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VsevenSegDigit_tb___024root___eval(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsevenSegDigit_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sevenSegDigit_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VsevenSegDigit_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sevenSegDigit_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsevenSegDigit_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsevenSegDigit_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsevenSegDigit_tb___024root___eval_debug_assertions(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
