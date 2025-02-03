// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU_tb.h for the primary calling header

#include "VminiALU_tb__pch.h"
#include "VminiALU_tb___024root.h"

VlCoroutine VminiALU_tb___024root___eval_initial__TOP__Vtiming__0(VminiALU_tb___024root* vlSelf);

void VminiALU_tb___024root___eval_initial(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VminiALU_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_miniALU_top__DOT__displayBits__0 
        = vlSelfRef.tb_miniALU_top__DOT__displayBits;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_miniALU_top__DOT__switches__0 
        = vlSelfRef.tb_miniALU_top__DOT__switches;
}

void VminiALU_tb___024root___act_sequent__TOP__0(VminiALU_tb___024root* vlSelf);

void VminiALU_tb___024root___eval_act(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VminiALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0;

VL_INLINE_OPT void VminiALU_tb___024root___act_sequent__TOP__0(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ tb_miniALU_top__DOT__uut__DOT__result;
    tb_miniALU_top__DOT__uut__DOT__result = 0;
    IData/*23:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd = 0;
    CData/*7:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits = 0;
    CData/*7:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits = 0;
    CData/*7:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits = 0;
    CData/*7:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits = 0;
    CData/*7:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits = 0;
    CData/*7:0*/ tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits = 0;
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
    tb_miniALU_top__DOT__uut__DOT__result = (0xfffffU 
                                             & ((2U 
                                                 & (IData)(vlSelfRef.tb_miniALU_top__DOT__switches))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tb_miniALU_top__DOT__switches))
                                                  ? 
                                                 ((0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 6U)) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 2U)))
                                                  : 
                                                 ((0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 6U)) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tb_miniALU_top__DOT__switches))
                                                  ? 
                                                 ((0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 6U)) 
                                                  - 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 2U)))
                                                  : 
                                                 ((0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 6U)) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.tb_miniALU_top__DOT__switches) 
                                                      >> 2U))))));
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd = 0U;
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = ((0xf00000U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
           | tb_miniALU_top__DOT__uut__DOT__result);
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x14U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                               >> 0x14U)) 
                               << 0x14U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0x10U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xf0ffffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                              >> 0x10U)) 
                              << 0x10U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 0xcU)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xff0fffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf000U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 8U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfff0ffU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf00U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                        >> 4U)))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xffff0fU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xf0U & (((IData)(3U) + (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((5U <= (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd))) {
        tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
            = ((0xfffff0U & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd) 
               | (0xfU & ((IData)(3U) + tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd)));
    }
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
        = (0xffffffU & VL_SHIFTL_III(24,24,32, tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd, 1U));
    __Vtableidx1 = (0xfU & tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd);
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits 
        = VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                            >> 4U));
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits 
        = VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                            >> 8U));
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits 
        = VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                            >> 0xcU));
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits 
        = VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                            >> 0x10U));
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits 
        = VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & (tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT__bcd 
                            >> 0x14U));
    tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits 
        = VminiALU_tb__ConstPool__TABLE_hdd8ed3e7_0
        [__Vtableidx6];
    vlSelfRef.tb_miniALU_top__DOT__displayBits = (((QData)((IData)(
                                                                   ((((IData)(tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits) 
                                                                      << 0x18U) 
                                                                     | ((IData)(tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits) 
                                                                        << 0x10U)) 
                                                                    | (((IData)(tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits) 
                                                                        << 8U) 
                                                                       | (IData)(tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits) 
                                                                      << 8U) 
                                                                     | (IData)(tb_miniALU_top__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits)))));
}

void VminiALU_tb___024root___nba_sequent__TOP__0(VminiALU_tb___024root* vlSelf);

void VminiALU_tb___024root___eval_nba(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VminiALU_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VminiALU_tb___024root___timing_resume(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VminiALU_tb___024root___eval_triggers__act(VminiALU_tb___024root* vlSelf);

bool VminiALU_tb___024root___eval_phase__act(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VminiALU_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VminiALU_tb___024root___timing_resume(vlSelf);
        VminiALU_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VminiALU_tb___024root___eval_phase__nba(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VminiALU_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__nba(VminiALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__act(VminiALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VminiALU_tb___024root___eval(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VminiALU_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("miniALU_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VminiALU_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("miniALU_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VminiALU_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VminiALU_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VminiALU_tb___024root___eval_debug_assertions(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
