// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU_tb.h for the primary calling header

#include "VminiALU_tb__pch.h"
#include "VminiALU_tb___024root.h"

VL_ATTR_COLD void VminiALU_tb___024root___eval_static(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VminiALU_tb___024root___eval_final(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__stl(VminiALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VminiALU_tb___024root___eval_phase__stl(VminiALU_tb___024root* vlSelf);

VL_ATTR_COLD void VminiALU_tb___024root___eval_settle(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_settle\n"); );
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
            VminiALU_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("miniALU_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VminiALU_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__stl(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___dump_triggers__stl\n"); );
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

void VminiALU_tb___024root___act_sequent__TOP__0(VminiALU_tb___024root* vlSelf);

VL_ATTR_COLD void VminiALU_tb___024root___eval_stl(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VminiALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VminiALU_tb___024root___eval_triggers__stl(VminiALU_tb___024root* vlSelf);

VL_ATTR_COLD bool VminiALU_tb___024root___eval_phase__stl(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VminiALU_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VminiALU_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__act(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__nba(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VminiALU_tb___024root___ctor_var_reset(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->miniALU_tb__DOT__op1 = VL_RAND_RESET_I(4);
    vlSelf->miniALU_tb__DOT__op2 = VL_RAND_RESET_I(4);
    vlSelf->miniALU_tb__DOT__operation = VL_RAND_RESET_I(1);
    vlSelf->miniALU_tb__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->miniALU_tb__DOT__result = VL_RAND_RESET_I(20);
    }
