// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsevenSegDigit.h for the primary calling header

#include "VsevenSegDigit__pch.h"
#include "VsevenSegDigit___024root.h"

void VsevenSegDigit___024root___ico_sequent__TOP__0(VsevenSegDigit___024root* vlSelf);

void VsevenSegDigit___024root___eval_ico(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VsevenSegDigit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VsevenSegDigit__ConstPool__TABLE_h99d7759d_0;

VL_INLINE_OPT void VsevenSegDigit___024root___ico_sequent__TOP__0(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.digit;
    vlSelfRef.displayBits = VsevenSegDigit__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx1];
}

void VsevenSegDigit___024root___eval_triggers__ico(VsevenSegDigit___024root* vlSelf);

bool VsevenSegDigit___024root___eval_phase__ico(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VsevenSegDigit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VsevenSegDigit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VsevenSegDigit___024root___eval_act(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VsevenSegDigit___024root___eval_nba(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VsevenSegDigit___024root___eval_triggers__act(VsevenSegDigit___024root* vlSelf);

bool VsevenSegDigit___024root___eval_phase__act(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsevenSegDigit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsevenSegDigit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsevenSegDigit___024root___eval_phase__nba(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsevenSegDigit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit___024root___dump_triggers__ico(VsevenSegDigit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit___024root___dump_triggers__nba(VsevenSegDigit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsevenSegDigit___024root___dump_triggers__act(VsevenSegDigit___024root* vlSelf);
#endif  // VL_DEBUG

void VsevenSegDigit___024root___eval(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval\n"); );
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
            VsevenSegDigit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("sevenSegDigit.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VsevenSegDigit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsevenSegDigit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sevenSegDigit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VsevenSegDigit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sevenSegDigit.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsevenSegDigit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsevenSegDigit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsevenSegDigit___024root___eval_debug_assertions(VsevenSegDigit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsevenSegDigit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsevenSegDigit___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.digit & 0xf0U))) {
        Verilated::overWidthError("digit");}
}
#endif  // VL_DEBUG
