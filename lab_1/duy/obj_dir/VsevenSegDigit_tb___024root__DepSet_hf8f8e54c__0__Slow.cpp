// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit_tb.h for the primary calling header

#include "VsevenSegDigit_tb__pch.h"
#include "VsevenSegDigit_tb___024root.h"

VL_ATTR_COLD void VsevenSegDigit_tb___024root___eval_static(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsevenSegDigit_tb___024root___eval_final(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__stl(VsevenSegDigit_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsevenSegDigit_tb___024root___eval_phase__stl(VsevenSegDigit_tb___024root* vlSelf);

VL_ATTR_COLD void VsevenSegDigit_tb___024root___eval_settle(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VsevenSegDigit_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sevenSegDigit_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VsevenSegDigit_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__stl(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VsevenSegDigit_tb___024root___act_sequent__TOP__0(VsevenSegDigit_tb___024root* vlSelf);

VL_ATTR_COLD void VsevenSegDigit_tb___024root___eval_stl(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VsevenSegDigit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VsevenSegDigit_tb___024root___eval_triggers__stl(VsevenSegDigit_tb___024root* vlSelf);

VL_ATTR_COLD bool VsevenSegDigit_tb___024root___eval_phase__stl(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VsevenSegDigit_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VsevenSegDigit_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__act(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] sevenSegDigit_tb.digit)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] sevenSegDigit_tb.displayBits)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit_tb___024root___dump_triggers__nba(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] sevenSegDigit_tb.digit)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] sevenSegDigit_tb.displayBits)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsevenSegDigit_tb___024root___ctor_var_reset(VsevenSegDigit_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->sevenSegDigit_tb__DOT__digit = VL_RAND_RESET_I(4);
    vlSelf->sevenSegDigit_tb__DOT__displayBits = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__digit__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__displayBits__0 = VL_RAND_RESET_I(8);
    vlSelf->__VactDidInit = 0;
}