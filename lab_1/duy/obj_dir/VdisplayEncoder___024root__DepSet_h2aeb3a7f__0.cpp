// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdisplayEncoder.h for the primary calling header

#include "VdisplayEncoder__pch.h"
#include "VdisplayEncoder___024root.h"

void VdisplayEncoder___024root___ico_sequent__TOP__0(VdisplayEncoder___024root* vlSelf);

void VdisplayEncoder___024root___eval_ico(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VdisplayEncoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VdisplayEncoder__ConstPool__TABLE_h99d7759d_0;

VL_INLINE_OPT void VdisplayEncoder___024root___ico_sequent__TOP__0(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ displayEncoder__DOT__bcd;
    displayEncoder__DOT__bcd = 0;
    CData/*7:0*/ displayEncoder__DOT____Vcellout__digitDisplay0__displayBits;
    displayEncoder__DOT____Vcellout__digitDisplay0__displayBits = 0;
    CData/*7:0*/ displayEncoder__DOT____Vcellout__digitDisplay1__displayBits;
    displayEncoder__DOT____Vcellout__digitDisplay1__displayBits = 0;
    CData/*7:0*/ displayEncoder__DOT____Vcellout__digitDisplay2__displayBits;
    displayEncoder__DOT____Vcellout__digitDisplay2__displayBits = 0;
    CData/*7:0*/ displayEncoder__DOT____Vcellout__digitDisplay3__displayBits;
    displayEncoder__DOT____Vcellout__digitDisplay3__displayBits = 0;
    CData/*7:0*/ displayEncoder__DOT____Vcellout__digitDisplay4__displayBits;
    displayEncoder__DOT____Vcellout__digitDisplay4__displayBits = 0;
    CData/*7:0*/ displayEncoder__DOT____Vcellout__digitDisplay5__displayBits;
    displayEncoder__DOT____Vcellout__digitDisplay5__displayBits = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    displayEncoder__DOT__bcd = 0U;
    displayEncoder__DOT__bcd = ((0xf00000U & displayEncoder__DOT__bcd) 
                                | vlSelfRef.result);
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x14U)))) {
        displayEncoder__DOT__bcd = ((0xfffffU & displayEncoder__DOT__bcd) 
                                    | (0xf00000U & 
                                       (((IData)(3U) 
                                         + (displayEncoder__DOT__bcd 
                                            >> 0x14U)) 
                                        << 0x14U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0x10U)))) {
        displayEncoder__DOT__bcd = ((0xf0ffffU & displayEncoder__DOT__bcd) 
                                    | (0xf0000U & (
                                                   ((IData)(3U) 
                                                    + 
                                                    (displayEncoder__DOT__bcd 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 0xcU)))) {
        displayEncoder__DOT__bcd = ((0xff0fffU & displayEncoder__DOT__bcd) 
                                    | (0xf000U & (((IData)(3U) 
                                                   + 
                                                   (displayEncoder__DOT__bcd 
                                                    >> 0xcU)) 
                                                  << 0xcU)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 8U)))) {
        displayEncoder__DOT__bcd = ((0xfff0ffU & displayEncoder__DOT__bcd) 
                                    | (0xf00U & (((IData)(3U) 
                                                  + 
                                                  (displayEncoder__DOT__bcd 
                                                   >> 8U)) 
                                                 << 8U)));
    }
    if ((5U <= (0xfU & (displayEncoder__DOT__bcd >> 4U)))) {
        displayEncoder__DOT__bcd = ((0xffff0fU & displayEncoder__DOT__bcd) 
                                    | (0xf0U & (((IData)(3U) 
                                                 + 
                                                 (displayEncoder__DOT__bcd 
                                                  >> 4U)) 
                                                << 4U)));
    }
    if ((5U <= (0xfU & displayEncoder__DOT__bcd))) {
        displayEncoder__DOT__bcd = ((0xfffff0U & displayEncoder__DOT__bcd) 
                                    | (0xfU & ((IData)(3U) 
                                               + displayEncoder__DOT__bcd)));
    }
    displayEncoder__DOT__bcd = (0xffffffU & VL_SHIFTL_III(24,24,32, displayEncoder__DOT__bcd, 1U));
    __Vtableidx1 = (0xfU & displayEncoder__DOT__bcd);
    displayEncoder__DOT____Vcellout__digitDisplay0__displayBits 
        = VdisplayEncoder__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (displayEncoder__DOT__bcd 
                            >> 4U));
    displayEncoder__DOT____Vcellout__digitDisplay1__displayBits 
        = VdisplayEncoder__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & (displayEncoder__DOT__bcd 
                            >> 8U));
    displayEncoder__DOT____Vcellout__digitDisplay2__displayBits 
        = VdisplayEncoder__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (displayEncoder__DOT__bcd 
                            >> 0xcU));
    displayEncoder__DOT____Vcellout__digitDisplay3__displayBits 
        = VdisplayEncoder__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & (displayEncoder__DOT__bcd 
                            >> 0x10U));
    displayEncoder__DOT____Vcellout__digitDisplay4__displayBits 
        = VdisplayEncoder__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & (displayEncoder__DOT__bcd 
                            >> 0x14U));
    displayEncoder__DOT____Vcellout__digitDisplay5__displayBits 
        = VdisplayEncoder__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx6];
    vlSelfRef.displayBits = (((QData)((IData)(displayEncoder__DOT____Vcellout__digitDisplay5__displayBits)) 
                              << 0x28U) | (((QData)((IData)(displayEncoder__DOT____Vcellout__digitDisplay4__displayBits)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(displayEncoder__DOT____Vcellout__digitDisplay3__displayBits) 
                                                               << 0x18U) 
                                                              | (((IData)(displayEncoder__DOT____Vcellout__digitDisplay2__displayBits) 
                                                                  << 0x10U) 
                                                                 | (((IData)(displayEncoder__DOT____Vcellout__digitDisplay1__displayBits) 
                                                                     << 8U) 
                                                                    | (IData)(displayEncoder__DOT____Vcellout__digitDisplay0__displayBits))))))));
}

void VdisplayEncoder___024root___eval_triggers__ico(VdisplayEncoder___024root* vlSelf);

bool VdisplayEncoder___024root___eval_phase__ico(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VdisplayEncoder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VdisplayEncoder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VdisplayEncoder___024root___eval_act(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VdisplayEncoder___024root___eval_nba(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VdisplayEncoder___024root___eval_triggers__act(VdisplayEncoder___024root* vlSelf);

bool VdisplayEncoder___024root___eval_phase__act(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VdisplayEncoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VdisplayEncoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VdisplayEncoder___024root___eval_phase__nba(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VdisplayEncoder___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VdisplayEncoder___024root___dump_triggers__ico(VdisplayEncoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VdisplayEncoder___024root___dump_triggers__nba(VdisplayEncoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VdisplayEncoder___024root___dump_triggers__act(VdisplayEncoder___024root* vlSelf);
#endif  // VL_DEBUG

void VdisplayEncoder___024root___eval(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval\n"); );
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
            VdisplayEncoder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("displayEncoder.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VdisplayEncoder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VdisplayEncoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("displayEncoder.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VdisplayEncoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("displayEncoder.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VdisplayEncoder___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VdisplayEncoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VdisplayEncoder___024root___eval_debug_assertions(VdisplayEncoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VdisplayEncoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VdisplayEncoder___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.result & 0xfff00000U))) {
        Verilated::overWidthError("result");}
}
#endif  // VL_DEBUG
