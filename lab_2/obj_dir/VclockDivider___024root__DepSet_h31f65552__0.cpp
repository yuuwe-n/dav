// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VclockDivider.h for the primary calling header

#include "VclockDivider__pch.h"
#include "VclockDivider__Syms.h"
#include "VclockDivider___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VclockDivider___024root___dump_triggers__act(VclockDivider___024root* vlSelf);
#endif  // VL_DEBUG

void VclockDivider___024root___eval_triggers__act(VclockDivider___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VclockDivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VclockDivider___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VclockDivider___024root___dump_triggers__act(vlSelf);
    }
#endif
}
