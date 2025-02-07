// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VclockDivider.h for the primary calling header

#include "VclockDivider__pch.h"
#include "VclockDivider___024root.h"

VL_ATTR_COLD void VclockDivider___024root___eval_static(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VclockDivider___024root___eval_initial(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VclockDivider___024root___eval_final(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VclockDivider___024root___eval_settle(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VclockDivider___024root___dump_triggers__act(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VclockDivider___024root___dump_triggers__nba(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VclockDivider___024root___ctor_var_reset(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->clk[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->speed[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rst[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->outClk[__Vi0] = VL_RAND_RESET_I(1);
    }
}
