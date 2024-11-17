// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU.h for the primary calling header

#include "VminiALU__pch.h"
#include "VminiALU__Syms.h"
#include "VminiALU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU___024root___dump_triggers__ico(VminiALU___024root* vlSelf);
#endif  // VL_DEBUG

void VminiALU___024root___eval_triggers__ico(VminiALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VminiALU___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU___024root___dump_triggers__act(VminiALU___024root* vlSelf);
#endif  // VL_DEBUG

void VminiALU___024root___eval_triggers__act(VminiALU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VminiALU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
