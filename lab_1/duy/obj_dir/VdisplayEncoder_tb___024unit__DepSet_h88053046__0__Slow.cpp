// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdisplayEncoder_tb.h for the primary calling header

#include "VdisplayEncoder_tb__pch.h"
#include "VdisplayEncoder_tb___024unit.h"

VL_ATTR_COLD void VdisplayEncoder_tb___024unit___ctor_var_reset(VdisplayEncoder_tb___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  VdisplayEncoder_tb___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
