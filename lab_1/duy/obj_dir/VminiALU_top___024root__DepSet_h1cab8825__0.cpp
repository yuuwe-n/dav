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

extern const VlUnpacked<CData/*7:0*/, 16> VminiALU_top__ConstPool__TABLE_h99d7759d_0;

VL_INLINE_OPT void VminiALU_top___024root___ico_sequent__TOP__0(VminiALU_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ miniALU_top__DOT__encoder_instance__DOT__bcd;
    miniALU_top__DOT__encoder_instance__DOT__bcd = 0;
    CData/*7:0*/ miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits;
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits = 0;
    CData/*7:0*/ miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits;
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits = 0;
    CData/*7:0*/ miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits;
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits = 0;
    CData/*7:0*/ miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits;
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits = 0;
    CData/*7:0*/ miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits;
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits = 0;
    CData/*7:0*/ miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits;
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits = 0;
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
    miniALU_top__DOT__encoder_instance__DOT__bcd = 0U;
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        ((0xf00000U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
         | (0xfffffU & ((2U & (IData)(vlSelfRef.switches))
                         ? ((1U & (IData)(vlSelfRef.switches))
                             ? ((0xfU & ((IData)(vlSelfRef.switches) 
                                         >> 6U)) >> 
                                (0xfU & ((IData)(vlSelfRef.switches) 
                                         >> 2U))) : 
                            ((0xfU & ((IData)(vlSelfRef.switches) 
                                      >> 6U)) << (0xfU 
                                                  & ((IData)(vlSelfRef.switches) 
                                                     >> 2U))))
                         : ((1U & (IData)(vlSelfRef.switches))
                             ? ((0xfU & ((IData)(vlSelfRef.switches) 
                                         >> 6U)) - 
                                (0xfU & ((IData)(vlSelfRef.switches) 
                                         >> 2U))) : 
                            ((0xfU & ((IData)(vlSelfRef.switches) 
                                      >> 6U)) + (0xfU 
                                                 & ((IData)(vlSelfRef.switches) 
                                                    >> 2U)))))));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (miniALU_top__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd))) {
        miniALU_top__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & miniALU_top__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + miniALU_top__DOT__encoder_instance__DOT__bcd)));
    }
    miniALU_top__DOT__encoder_instance__DOT__bcd = 
        (0xffffffU & VL_SHIFTL_III(24,24,32, miniALU_top__DOT__encoder_instance__DOT__bcd, 1U));
    __Vtableidx1 = (0xfU & miniALU_top__DOT__encoder_instance__DOT__bcd);
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits 
        = VminiALU_top__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                            >> 4U));
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits 
        = VminiALU_top__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                            >> 8U));
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits 
        = VminiALU_top__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                            >> 0xcU));
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits 
        = VminiALU_top__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                            >> 0x10U));
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits 
        = VminiALU_top__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & (miniALU_top__DOT__encoder_instance__DOT__bcd 
                            >> 0x14U));
    miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits 
        = VminiALU_top__ConstPool__TABLE_h99d7759d_0
        [__Vtableidx6];
    vlSelfRef.displayBits = (((QData)((IData)(miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits)) 
                              << 0x28U) | (((QData)((IData)(miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits) 
                                                               << 0x18U) 
                                                              | (((IData)(miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits) 
                                                                  << 0x10U) 
                                                                 | (((IData)(miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits) 
                                                                     << 8U) 
                                                                    | (IData)(miniALU_top__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits))))))));
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
            VL_FATAL_MT("miniALU_top.sv", 3, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("miniALU_top.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("miniALU_top.sv", 3, "", "Active region did not converge.");
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
