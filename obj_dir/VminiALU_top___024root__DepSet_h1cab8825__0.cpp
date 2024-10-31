// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU_top.h for the primary calling header

#include "VminiALU_top__pch.h"
#include "VminiALU_top___024root.h"

void VminiALU_top___024root___ico_sequent__TOP__0(VminiALU_top___024root* vlSelf);

void VminiALU_top___024root___eval_ico(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VminiALU_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VminiALU_top___024root___ico_sequent__TOP__0(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.leds = vlSelfRef.switches;
}

void VminiALU_top___024root___eval_triggers__ico(VminiALU_top___024root* vlSelf);

bool VminiALU_top___024root___eval_phase__ico(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VminiALU_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VminiALU_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VminiALU_top___024root___eval_act(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VminiALU_top___024root___eval_nba(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VminiALU_top___024root___eval_triggers__act(VminiALU_top___024root* vlSelf);

bool VminiALU_top___024root___eval_phase__act(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VminiALU_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VminiALU_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VminiALU_top___024root___eval_phase__nba(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VminiALU_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__ico(VminiALU_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__nba(VminiALU_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_top___024root___dump_triggers__act(VminiALU_top___024root* vlSelf);
#endif  // VL_DEBUG

void VminiALU_top___024root___eval(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VminiALU_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("miniALU_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VminiALU_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VminiALU_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("miniALU_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VminiALU_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("miniALU_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VminiALU_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VminiALU_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VminiALU_top___024root___eval_debug_assertions(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.switches & 0xfc00U))) {
        Verilated::overWidthError("switches");}
}
#endif  // VL_DEBUG
