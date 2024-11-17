// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU_top.h for the primary calling header

#include "VminiALU_top__pch.h"
#include "VminiALU_top___024root.h"

VL_ATTR_COLD void VminiALU_top___024root___eval_static(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VminiALU_top___024root___eval_initial(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VminiALU_top___024root___eval_final(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__stl(VminiALU_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VminiALU_top___024root___eval_phase__stl(VminiALU_top___024root* vlSelf);

VL_ATTR_COLD void VminiALU_top___024root___eval_settle(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_settle\n"); );
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
            VminiALU_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("miniALU_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VminiALU_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__stl(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___dump_triggers__stl\n"); );
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

void VminiALU_top___024root___ico_sequent__TOP__0(VminiALU_top___024root* vlSelf);

VL_ATTR_COLD void VminiALU_top___024root___eval_stl(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VminiALU_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VminiALU_top___024root___eval_triggers__stl(VminiALU_top___024root* vlSelf);

VL_ATTR_COLD bool VminiALU_top___024root___eval_phase__stl(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VminiALU_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VminiALU_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__ico(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__act(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__nba(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VminiALU_top___024root___ctor_var_reset(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->switches = VL_RAND_RESET_I(10);
    vlSelf->leds = VL_RAND_RESET_I(10);
}
