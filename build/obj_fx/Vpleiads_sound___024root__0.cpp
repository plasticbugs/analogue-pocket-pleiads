// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpleiads_sound.h for the primary calling header

#include "Vpleiads_sound__pch.h"

bool Vpleiads_sound___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vpleiads_sound___024root___nba_sequent__TOP__0(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___nba_sequent__TOP__0\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ pleiads_sound__DOT____Vconcswap_1_h887a3381__0;
    pleiads_sound__DOT____Vconcswap_1_h887a3381__0 = 0;
    SData/*15:0*/ pleiads_sound__DOT____Vconcswap_1_h887b7933__0;
    pleiads_sound__DOT____Vconcswap_1_h887b7933__0 = 0;
    IData/*31:0*/ pleiads_sound__DOT____Vconcswap_1_h2c745652__0;
    pleiads_sound__DOT____Vconcswap_1_h2c745652__0 = 0;
    SData/*15:0*/ pleiads_sound__DOT____Vconcswap_1_h2c76a095__0;
    pleiads_sound__DOT____Vconcswap_1_h2c76a095__0 = 0;
    IData/*31:0*/ pleiads_sound__DOT____Vconcswap_1_h8da7322c__0;
    pleiads_sound__DOT____Vconcswap_1_h8da7322c__0 = 0;
    SData/*15:0*/ pleiads_sound__DOT____Vconcswap_1_h8da4641e__0;
    pleiads_sound__DOT____Vconcswap_1_h8da4641e__0 = 0;
    IData/*31:0*/ pleiads_sound__DOT____Vconcswap_1_h1238ff9e__0;
    pleiads_sound__DOT____Vconcswap_1_h1238ff9e__0 = 0;
    SData/*15:0*/ pleiads_sound__DOT____Vconcswap_1_h1246d8db__0;
    pleiads_sound__DOT____Vconcswap_1_h1246d8db__0 = 0;
    IData/*31:0*/ pleiads_sound__DOT____Vconcswap_1_h4aa01a38__0;
    pleiads_sound__DOT____Vconcswap_1_h4aa01a38__0 = 0;
    SData/*15:0*/ pleiads_sound__DOT____Vconcswap_1_h4aa10c0a__0;
    pleiads_sound__DOT____Vconcswap_1_h4aa10c0a__0 = 0;
    IData/*31:0*/ pleiads_sound__DOT____Vconcswap_1_h4bd00b05__0;
    pleiads_sound__DOT____Vconcswap_1_h4bd00b05__0 = 0;
    SData/*15:0*/ pleiads_sound__DOT____Vconcswap_1_h4bd95127__0;
    pleiads_sound__DOT____Vconcswap_1_h4bd95127__0 = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__level;
    __Vfunc_pleiads_sound__DOT__rc_step__0__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__0__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__0__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__0__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__0__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__0__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__0__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__n;
    __Vfunc_pleiads_sound__DOT__rc_step__0__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__l;
    __Vfunc_pleiads_sound__DOT__rc_step__0__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__0__c;
    __Vfunc_pleiads_sound__DOT__rc_step__0__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__level;
    __Vfunc_pleiads_sound__DOT__rc_step__1__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__1__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__1__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__1__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__1__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__1__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__1__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__n;
    __Vfunc_pleiads_sound__DOT__rc_step__1__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__l;
    __Vfunc_pleiads_sound__DOT__rc_step__1__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__1__c;
    __Vfunc_pleiads_sound__DOT__rc_step__1__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__level;
    __Vfunc_pleiads_sound__DOT__rc_step__2__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__2__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__2__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__2__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__2__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__2__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__2__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__n;
    __Vfunc_pleiads_sound__DOT__rc_step__2__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__l;
    __Vfunc_pleiads_sound__DOT__rc_step__2__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__2__c;
    __Vfunc_pleiads_sound__DOT__rc_step__2__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__level;
    __Vfunc_pleiads_sound__DOT__rc_step__3__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__3__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__3__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__3__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__3__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__3__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__3__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__n;
    __Vfunc_pleiads_sound__DOT__rc_step__3__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__l;
    __Vfunc_pleiads_sound__DOT__rc_step__3__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__3__c;
    __Vfunc_pleiads_sound__DOT__rc_step__3__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__level;
    __Vfunc_pleiads_sound__DOT__rc_step__4__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__4__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__4__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__4__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__4__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__4__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__4__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__n;
    __Vfunc_pleiads_sound__DOT__rc_step__4__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__l;
    __Vfunc_pleiads_sound__DOT__rc_step__4__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__4__c;
    __Vfunc_pleiads_sound__DOT__rc_step__4__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__level;
    __Vfunc_pleiads_sound__DOT__rc_step__5__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__5__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__5__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__5__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__5__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__5__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__5__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__n;
    __Vfunc_pleiads_sound__DOT__rc_step__5__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__l;
    __Vfunc_pleiads_sound__DOT__rc_step__5__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__5__c;
    __Vfunc_pleiads_sound__DOT__rc_step__5__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__level;
    __Vfunc_pleiads_sound__DOT__rc_step__6__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__6__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__6__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__6__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__6__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__6__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__6__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__n;
    __Vfunc_pleiads_sound__DOT__rc_step__6__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__l;
    __Vfunc_pleiads_sound__DOT__rc_step__6__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__6__c;
    __Vfunc_pleiads_sound__DOT__rc_step__6__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__level;
    __Vfunc_pleiads_sound__DOT__rc_step__7__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__7__counter = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__charging;
    __Vfunc_pleiads_sound__DOT__rc_step__7__charging = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__7__k_charge = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__7__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__7__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__7__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__n;
    __Vfunc_pleiads_sound__DOT__rc_step__7__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__l;
    __Vfunc_pleiads_sound__DOT__rc_step__7__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__7__c;
    __Vfunc_pleiads_sound__DOT__rc_step__7__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__level;
    __Vfunc_pleiads_sound__DOT__rc_step__8__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__8__counter = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__8__k_charge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__8__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__n;
    __Vfunc_pleiads_sound__DOT__rc_step__8__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__l;
    __Vfunc_pleiads_sound__DOT__rc_step__8__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__8__c;
    __Vfunc_pleiads_sound__DOT__rc_step__8__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__level;
    __Vfunc_pleiads_sound__DOT__rc_step__9__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__9__counter = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__k_charge;
    __Vfunc_pleiads_sound__DOT__rc_step__9__k_charge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__9__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__n;
    __Vfunc_pleiads_sound__DOT__rc_step__9__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__l;
    __Vfunc_pleiads_sound__DOT__rc_step__9__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__9__c;
    __Vfunc_pleiads_sound__DOT__rc_step__9__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__level;
    __Vfunc_pleiads_sound__DOT__rc_step__10__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__10__counter = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__10__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__10__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__10__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__10__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__n;
    __Vfunc_pleiads_sound__DOT__rc_step__10__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__l;
    __Vfunc_pleiads_sound__DOT__rc_step__10__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__10__c;
    __Vfunc_pleiads_sound__DOT__rc_step__10__c = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__level;
    __Vfunc_pleiads_sound__DOT__rc_step__11__level = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__counter;
    __Vfunc_pleiads_sound__DOT__rc_step__11__counter = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__floor_lvl;
    __Vfunc_pleiads_sound__DOT__rc_step__11__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__k_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__11__k_discharge = 0;
    CData/*0:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__n_on_discharge;
    __Vfunc_pleiads_sound__DOT__rc_step__11__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__rate_val;
    __Vfunc_pleiads_sound__DOT__rc_step__11__rate_val = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__n;
    __Vfunc_pleiads_sound__DOT__rc_step__11__n = 0;
    SData/*15:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__l;
    __Vfunc_pleiads_sound__DOT__rc_step__11__l = 0;
    IData/*31:0*/ __Vfunc_pleiads_sound__DOT__rc_step__11__c;
    __Vfunc_pleiads_sound__DOT__rc_step__11__c = 0;
    IData/*26:0*/ __Vdly__pleiads_sound__DOT__acc;
    __Vdly__pleiads_sound__DOT__acc = 0;
    // Body
    __Vdly__pleiads_sound__DOT__acc = vlSelfRef.pleiads_sound__DOT__acc;
    if (vlSelfRef.reset) {
        vlSelfRef.sample_tick = 0U;
        vlSelfRef.pleiads_sound__DOT__t1_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__t2_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__t3_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__t4_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__noise_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__t1_div = 0U;
        vlSelfRef.pleiads_sound__DOT__t1_out = 0U;
        vlSelfRef.pleiads_sound__DOT__t2_out = 0U;
        vlSelfRef.pleiads_sound__DOT__t3_out = 0U;
        vlSelfRef.pleiads_sound__DOT__t4_out = 0U;
        vlSelfRef.pleiads_sound__DOT__pa5_lvl = 0U;
        vlSelfRef.pleiads_sound__DOT__pa6_lvl = 0U;
        vlSelfRef.pleiads_sound__DOT__pb4_lvl = 0U;
        vlSelfRef.pleiads_sound__DOT__pc4_lvl = 0x11ebU;
        vlSelfRef.pleiads_sound__DOT__pc5_lvl = 0U;
        vlSelfRef.pleiads_sound__DOT__pa5_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__pa6_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__pb4_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__pc4_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__pc5_ctr = 0U;
        vlSelfRef.pleiads_sound__DOT__lfsr = 0U;
        vlSelfRef.pleiads_sound__DOT__polybit = 0U;
        vlSelfRef.sample = 0U;
        __Vdly__pleiads_sound__DOT__acc = 0U;
        vlSelfRef.pleiads_sound__DOT__tick = 0U;
    } else {
        vlSelfRef.sample_tick = 0U;
        if (vlSelfRef.pleiads_sound__DOT__tick) {
            vlSelfRef.sample_tick = 1U;
            if ((0x0fU != (0x0000000fU & (IData)(vlSelfRef.latch_a)))) {
                vlSelfRef.pleiads_sound__DOT__t1_ctr 
                    = (vlSelfRef.pleiads_sound__DOT__t1_ctr 
                       - (IData)(0x00001f40U));
                if (VL_GTES_III(32, 0U, vlSelfRef.pleiads_sound__DOT__t1_ctr)) {
                    vlSelfRef.pleiads_sound__DOT__t1_ctr 
                        = ((IData)(0x0000bb80U) + vlSelfRef.pleiads_sound__DOT__t1_ctr);
                    vlSelfRef.pleiads_sound__DOT__t1_div 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.pleiads_sound__DOT__t1_div)));
                    if ((0U == (IData)(vlSelfRef.pleiads_sound__DOT__t1_div))) {
                        vlSelfRef.pleiads_sound__DOT__t1_out 
                            = (1U & (~ (IData)(vlSelfRef.pleiads_sound__DOT__t1_out)));
                        vlSelfRef.pleiads_sound__DOT__t1_div 
                            = (0x0000000fU & (IData)(vlSelfRef.latch_a));
                    }
                }
            }
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t1 
                = ((IData)(vlSelfRef.pleiads_sound__DOT__t1_out)
                    ? 0x00007fffU : 0x00038001U);
            __Vfunc_pleiads_sound__DOT__rc_step__0__n_on_discharge = 1U;
            __Vfunc_pleiads_sound__DOT__rc_step__0__k_discharge = 0x0000a000U;
            __Vfunc_pleiads_sound__DOT__rc_step__0__k_charge = 0x0000a000U;
            __Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__0__charging 
                = (1U & ((IData)(vlSelfRef.latch_b) 
                         >> 4U));
            __Vfunc_pleiads_sound__DOT__rc_step__0__counter 
                = vlSelfRef.pleiads_sound__DOT__pb4_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__0__level 
                = vlSelfRef.pleiads_sound__DOT__pb4_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__0__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__0__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__0__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__0__level;
            __Vfunc_pleiads_sound__DOT__rc_step__0__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__0__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__0__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__0__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__0__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__0__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__0__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__0__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__0__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__0__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__0__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__0__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__0__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__0__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__0__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__0__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__0__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__0__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__0__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__0__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__0__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__0__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__0__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__0__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__0__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__0__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__0__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__0__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__0__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_0__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__0__l)));
            pleiads_sound__DOT____Vconcswap_1_h887a3381__0 
                = (IData)((vlSelfRef.pleiads_sound__DOT____VlemCall_0__rc_step 
                           >> 0x00000010U));
            __Vfunc_pleiads_sound__DOT__rc_step__1__n_on_discharge = 1U;
            __Vfunc_pleiads_sound__DOT__rc_step__1__k_discharge = 0x0000a000U;
            __Vfunc_pleiads_sound__DOT__rc_step__1__k_charge = 0x0000a000U;
            __Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__1__charging 
                = (1U & ((IData)(vlSelfRef.latch_b) 
                         >> 4U));
            __Vfunc_pleiads_sound__DOT__rc_step__1__counter 
                = vlSelfRef.pleiads_sound__DOT__pb4_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__1__level 
                = vlSelfRef.pleiads_sound__DOT__pb4_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__1__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__1__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__1__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__1__level;
            __Vfunc_pleiads_sound__DOT__rc_step__1__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__1__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__1__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__1__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__1__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__1__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__1__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__1__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__1__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__1__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__1__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__1__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__1__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__1__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__1__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__1__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__1__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__1__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__1__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__1__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__1__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__1__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__1__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__1__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__1__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__1__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__1__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__1__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__1__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_1__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__1__l)));
            pleiads_sound__DOT____Vconcswap_1_h887b7933__0 
                = (0x0000ffffU & (IData)(vlSelfRef.pleiads_sound__DOT____VlemCall_1__rc_step));
            vlSelfRef.pleiads_sound__DOT__pb4_ctr = pleiads_sound__DOT____Vconcswap_1_h887a3381__0;
            vlSelfRef.pleiads_sound__DOT__pb4_lvl = pleiads_sound__DOT____Vconcswap_1_h887b7933__0;
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl23 
                = (0x0000ffffU & ((IData)(0x7fffU) 
                                  - (IData)(vlSelfRef.pleiads_sound__DOT__pb4_lvl)));
            if ((((IData)(vlSelfRef.latch_b) >> 5U) 
                 & (0x7fffU > (IData)(vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl23)))) {
                vlSelfRef.pleiads_sound__DOT__t2_ctr 
                    = (vlSelfRef.pleiads_sound__DOT__t2_ctr 
                       - (((IData)(0x0000015fU) * (IData)(vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl23)) 
                          >> 0x0000000fU));
                if (VL_GTES_III(32, 0U, vlSelfRef.pleiads_sound__DOT__t2_ctr)) {
                    vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- vlSelfRef.pleiads_sound__DOT__t2_ctr), (IData)(0x0000bb80U)));
                    vlSelfRef.pleiads_sound__DOT__t2_ctr 
                        = (vlSelfRef.pleiads_sound__DOT__t2_ctr 
                           + ((IData)(0x0000bb80U) 
                              * vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n));
                    vlSelfRef.pleiads_sound__DOT__t2_out 
                        = (1U & ((IData)(vlSelfRef.pleiads_sound__DOT__t2_out) 
                                 ^ vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n));
                }
                vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__step 
                    = ((IData)(0x000000c2U) + VL_DIV_III(32, 
                                                         ((IData)(0x00000184U) 
                                                          * (IData)(vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl23)), (IData)(0x000083e8U)));
                vlSelfRef.pleiads_sound__DOT__t3_ctr 
                    = (vlSelfRef.pleiads_sound__DOT__t3_ctr 
                       - vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__step);
                if (VL_GTES_III(32, 0U, vlSelfRef.pleiads_sound__DOT__t3_ctr)) {
                    vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- vlSelfRef.pleiads_sound__DOT__t2_ctr), (IData)(0x0000bb80U)));
                    vlSelfRef.pleiads_sound__DOT__t3_ctr 
                        = ((IData)(0x0000bb80U) + vlSelfRef.pleiads_sound__DOT__t3_ctr);
                    vlSelfRef.pleiads_sound__DOT__t3_out 
                        = (1U & ((IData)(vlSelfRef.pleiads_sound__DOT__t3_out) 
                                 ^ vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n));
                }
            }
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t23 
                = ((0x00000020U & (IData)(vlSelfRef.latch_b))
                    ? (0x0003ffffU & VL_DIVS_III(18, 
                                                 (0x0003ffffU 
                                                  & (((IData)(vlSelfRef.pleiads_sound__DOT__t2_out)
                                                       ? 0x00007fffU
                                                       : 0x00038001U) 
                                                     + 
                                                     ((IData)(vlSelfRef.pleiads_sound__DOT__t3_out)
                                                       ? 0x00007fffU
                                                       : 0x00038001U))), (IData)(2U)))
                    : 0U);
            __Vfunc_pleiads_sound__DOT__rc_step__2__n_on_discharge = 1U;
            __Vfunc_pleiads_sound__DOT__rc_step__2__k_discharge = 0x0002d745U;
            __Vfunc_pleiads_sound__DOT__rc_step__2__k_charge = 0x0000f26cU;
            __Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl = 0x11ebU;
            __Vfunc_pleiads_sound__DOT__rc_step__2__charging 
                = (1U & ((IData)(vlSelfRef.latch_c) 
                         >> 4U));
            __Vfunc_pleiads_sound__DOT__rc_step__2__counter 
                = vlSelfRef.pleiads_sound__DOT__pc4_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__2__level 
                = vlSelfRef.pleiads_sound__DOT__pc4_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__2__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__2__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__2__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__2__level;
            __Vfunc_pleiads_sound__DOT__rc_step__2__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__2__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__2__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__2__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__2__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__2__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__2__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__2__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__2__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__2__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__2__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__2__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__2__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__2__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__2__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__2__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__2__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__2__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__2__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__2__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__2__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__2__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__2__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__2__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__2__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__2__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__2__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__2__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__2__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_2__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__2__l)));
            pleiads_sound__DOT____Vconcswap_1_h2c745652__0 
                = (IData)((vlSelfRef.pleiads_sound__DOT____VlemCall_2__rc_step 
                           >> 0x00000010U));
            __Vfunc_pleiads_sound__DOT__rc_step__3__n_on_discharge = 1U;
            __Vfunc_pleiads_sound__DOT__rc_step__3__k_discharge = 0x0002d745U;
            __Vfunc_pleiads_sound__DOT__rc_step__3__k_charge = 0x0000f26cU;
            __Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl = 0x11ebU;
            __Vfunc_pleiads_sound__DOT__rc_step__3__charging 
                = (1U & ((IData)(vlSelfRef.latch_c) 
                         >> 4U));
            __Vfunc_pleiads_sound__DOT__rc_step__3__counter 
                = vlSelfRef.pleiads_sound__DOT__pc4_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__3__level 
                = vlSelfRef.pleiads_sound__DOT__pc4_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__3__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__3__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__3__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__3__level;
            __Vfunc_pleiads_sound__DOT__rc_step__3__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__3__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__3__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__3__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__3__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__3__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__3__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__3__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__3__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__3__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__3__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__3__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__3__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__3__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__3__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__3__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__3__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__3__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__3__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__3__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__3__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__3__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__3__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__3__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__3__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__3__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__3__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__3__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__3__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_3__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__3__l)));
            pleiads_sound__DOT____Vconcswap_1_h2c76a095__0 
                = (0x0000ffffU & (IData)(vlSelfRef.pleiads_sound__DOT____VlemCall_3__rc_step));
            vlSelfRef.pleiads_sound__DOT__pc4_ctr = pleiads_sound__DOT____Vconcswap_1_h2c745652__0;
            vlSelfRef.pleiads_sound__DOT__pc4_lvl = pleiads_sound__DOT____Vconcswap_1_h2c76a095__0;
            __Vfunc_pleiads_sound__DOT__rc_step__4__n_on_discharge = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__4__k_discharge = 0x0000a000U;
            __Vfunc_pleiads_sound__DOT__rc_step__4__k_charge = 0x0012f07cU;
            __Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__4__charging 
                = (1U & ((IData)(vlSelfRef.latch_c) 
                         >> 5U));
            __Vfunc_pleiads_sound__DOT__rc_step__4__counter 
                = vlSelfRef.pleiads_sound__DOT__pc5_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__4__level 
                = vlSelfRef.pleiads_sound__DOT__pc5_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__4__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__4__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__4__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__4__level;
            __Vfunc_pleiads_sound__DOT__rc_step__4__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__4__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__4__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__4__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__4__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__4__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__4__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__4__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__4__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__4__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__4__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__4__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__4__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__4__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__4__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__4__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__4__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__4__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__4__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__4__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__4__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__4__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__4__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__4__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__4__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__4__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__4__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__4__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__4__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_4__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__4__l)));
            pleiads_sound__DOT____Vconcswap_1_h8da7322c__0 
                = (IData)((vlSelfRef.pleiads_sound__DOT____VlemCall_4__rc_step 
                           >> 0x00000010U));
            __Vfunc_pleiads_sound__DOT__rc_step__5__n_on_discharge = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__5__k_discharge = 0x0000a000U;
            __Vfunc_pleiads_sound__DOT__rc_step__5__k_charge = 0x0012f07cU;
            __Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__5__charging 
                = (1U & ((IData)(vlSelfRef.latch_c) 
                         >> 5U));
            __Vfunc_pleiads_sound__DOT__rc_step__5__counter 
                = vlSelfRef.pleiads_sound__DOT__pc5_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__5__level 
                = vlSelfRef.pleiads_sound__DOT__pc5_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__5__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__5__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__5__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__5__level;
            __Vfunc_pleiads_sound__DOT__rc_step__5__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__5__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__5__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__5__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__5__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__5__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__5__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__5__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__5__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__5__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__5__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__5__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__5__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__5__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__5__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__5__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__5__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__5__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__5__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__5__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__5__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__5__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__5__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__5__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__5__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__5__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__5__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__5__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__5__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_5__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__5__l)));
            pleiads_sound__DOT____Vconcswap_1_h8da4641e__0 
                = (0x0000ffffU & (IData)(vlSelfRef.pleiads_sound__DOT____VlemCall_5__rc_step));
            vlSelfRef.pleiads_sound__DOT__pc5_ctr = pleiads_sound__DOT____Vconcswap_1_h8da7322c__0;
            vlSelfRef.pleiads_sound__DOT__pc5_lvl = pleiads_sound__DOT____Vconcswap_1_h8da4641e__0;
            __Vfunc_pleiads_sound__DOT__rc_step__6__n_on_discharge = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__6__k_discharge = 0x00000745U;
            __Vfunc_pleiads_sound__DOT__rc_step__6__k_charge = 0x000004d9U;
            __Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__6__charging 
                = (1U & ((IData)(vlSelfRef.latch_a) 
                         >> 5U));
            __Vfunc_pleiads_sound__DOT__rc_step__6__counter 
                = vlSelfRef.pleiads_sound__DOT__pa5_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__6__level 
                = vlSelfRef.pleiads_sound__DOT__pa5_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__6__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__6__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__6__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__6__level;
            __Vfunc_pleiads_sound__DOT__rc_step__6__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__6__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__6__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__6__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__6__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__6__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__6__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__6__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__6__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__6__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__6__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__6__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__6__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__6__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__6__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__6__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__6__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__6__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__6__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__6__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__6__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__6__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__6__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__6__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__6__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__6__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__6__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__6__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__6__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_6__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__6__l)));
            pleiads_sound__DOT____Vconcswap_1_h1238ff9e__0 
                = (IData)((vlSelfRef.pleiads_sound__DOT____VlemCall_6__rc_step 
                           >> 0x00000010U));
            __Vfunc_pleiads_sound__DOT__rc_step__7__n_on_discharge = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__7__k_discharge = 0x00000745U;
            __Vfunc_pleiads_sound__DOT__rc_step__7__k_charge = 0x000004d9U;
            __Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl = 0U;
            __Vfunc_pleiads_sound__DOT__rc_step__7__charging 
                = (1U & ((IData)(vlSelfRef.latch_a) 
                         >> 5U));
            __Vfunc_pleiads_sound__DOT__rc_step__7__counter 
                = vlSelfRef.pleiads_sound__DOT__pa5_ctr;
            __Vfunc_pleiads_sound__DOT__rc_step__7__level 
                = vlSelfRef.pleiads_sound__DOT__pa5_lvl;
            __Vfunc_pleiads_sound__DOT__rc_step__7__rate_val = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__7__n = 0;
            __Vfunc_pleiads_sound__DOT__rc_step__7__l 
                = __Vfunc_pleiads_sound__DOT__rc_step__7__level;
            __Vfunc_pleiads_sound__DOT__rc_step__7__c 
                = __Vfunc_pleiads_sound__DOT__rc_step__7__counter;
            if (__Vfunc_pleiads_sound__DOT__rc_step__7__charging) {
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__7__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__7__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__7__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__7__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__7__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__7__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__7__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__7__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__7__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__7__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__7__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__7__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__7__n)));
                    }
                }
            } else if (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l) 
                        > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl))) {
                __Vfunc_pleiads_sound__DOT__rc_step__7__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l)) 
                                                     - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__7__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_pleiads_sound__DOT__rc_step__7__c 
                    = (__Vfunc_pleiads_sound__DOT__rc_step__7__c 
                       - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__7__c)) {
                    __Vfunc_pleiads_sound__DOT__rc_step__7__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_pleiads_sound__DOT__rc_step__7__c), (IData)(0x0000bb80U)));
                    __Vfunc_pleiads_sound__DOT__rc_step__7__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__7__c 
                           + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__7__n)
                               : 0x0000bb80U));
                    __Vfunc_pleiads_sound__DOT__rc_step__7__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l) 
                                           < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl) 
                                              + __Vfunc_pleiads_sound__DOT__rc_step__7__n))
                                           ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__floor_lvl)
                                           : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l) 
                                              - __Vfunc_pleiads_sound__DOT__rc_step__7__n)));
                }
            }
            vlSelfRef.pleiads_sound__DOT____VlemCall_7__rc_step 
                = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__7__l)));
            pleiads_sound__DOT____Vconcswap_1_h1246d8db__0 
                = (0x0000ffffU & (IData)(vlSelfRef.pleiads_sound__DOT____VlemCall_7__rc_step));
            vlSelfRef.pleiads_sound__DOT__pa5_ctr = pleiads_sound__DOT____Vconcswap_1_h1238ff9e__0;
            vlSelfRef.pleiads_sound__DOT__pa5_lvl = pleiads_sound__DOT____Vconcswap_1_h1246d8db__0;
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl4 
                = (0x0000ffffU & ((IData)(vlSelfRef.pleiads_sound__DOT__polybit)
                                   ? ((IData)(vlSelfRef.pleiads_sound__DOT__pc4_lvl) 
                                      + VL_DIV_III(32, 
                                                   ((IData)(0x00000014U) 
                                                    * 
                                                    ((IData)(0x00007fffU) 
                                                     - (IData)(vlSelfRef.pleiads_sound__DOT__pc4_lvl))), (IData)(0x00000043U)))
                                   : VL_DIV_III(32, 
                                                ((IData)(0x0000002fU) 
                                                 * (IData)(vlSelfRef.pleiads_sound__DOT__pc4_lvl)), (IData)(0x00000043U))));
            vlSelfRef.pleiads_sound__DOT__t4_ctr = 
                (vlSelfRef.pleiads_sound__DOT__t4_ctr 
                 - (((IData)(0x00000523U) * (IData)(vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl4)) 
                    >> 0x0000000fU));
            if (VL_GTES_III(32, 0U, vlSelfRef.pleiads_sound__DOT__t4_ctr)) {
                vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n 
                    = ((IData)(1U) + VL_DIV_III(32, 
                                                (- vlSelfRef.pleiads_sound__DOT__t4_ctr), (IData)(0x0000bb80U)));
                vlSelfRef.pleiads_sound__DOT__t4_ctr 
                    = (vlSelfRef.pleiads_sound__DOT__t4_ctr 
                       + ((IData)(0x0000bb80U) * vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n));
                vlSelfRef.pleiads_sound__DOT__t4_out 
                    = (1U & ((IData)(vlSelfRef.pleiads_sound__DOT__t4_out) 
                             ^ vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n));
            }
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t4 
                = (0x0003ffffU & (VL_DIV_III(32, ((IData)(0x00000021U) 
                                                  * (IData)(vlSelfRef.pleiads_sound__DOT__pc5_lvl)), (IData)(0x00000050U)) 
                                  + VL_DIV_III(32, 
                                               ((IData)(0x0000002fU) 
                                                * (IData)(vlSelfRef.pleiads_sound__DOT__pa5_lvl)), (IData)(0x00000050U))));
            if ((1U & (~ (IData)(vlSelfRef.pleiads_sound__DOT__t4_out)))) {
                vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t4 
                    = (0x0003ffffU & (- vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t4));
            }
            if ((0x00000040U & (IData)(vlSelfRef.latch_a))) {
                __Vfunc_pleiads_sound__DOT__rc_step__8__k_charge = 0x00561691U;
                __Vfunc_pleiads_sound__DOT__rc_step__8__counter 
                    = vlSelfRef.pleiads_sound__DOT__pa6_ctr;
                __Vfunc_pleiads_sound__DOT__rc_step__8__level 
                    = vlSelfRef.pleiads_sound__DOT__pa6_lvl;
                __Vfunc_pleiads_sound__DOT__rc_step__8__rate_val = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__8__n = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__8__l 
                    = __Vfunc_pleiads_sound__DOT__rc_step__8__level;
                __Vfunc_pleiads_sound__DOT__rc_step__8__c 
                    = __Vfunc_pleiads_sound__DOT__rc_step__8__counter;
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__8__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__8__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__8__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__8__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__8__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__8__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__8__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__8__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__8__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__8__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__8__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__8__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__8__n)));
                    }
                }
                vlSelfRef.pleiads_sound__DOT____VlemCall_8__rc_step 
                    = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__8__l)));
                pleiads_sound__DOT____Vconcswap_1_h4aa01a38__0 
                    = (IData)((vlSelfRef.pleiads_sound__DOT____VlemCall_8__rc_step 
                               >> 0x00000010U));
                __Vfunc_pleiads_sound__DOT__rc_step__9__k_charge = 0x00561691U;
                __Vfunc_pleiads_sound__DOT__rc_step__9__counter 
                    = vlSelfRef.pleiads_sound__DOT__pa6_ctr;
                __Vfunc_pleiads_sound__DOT__rc_step__9__level 
                    = vlSelfRef.pleiads_sound__DOT__pa6_lvl;
                __Vfunc_pleiads_sound__DOT__rc_step__9__rate_val = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__9__n = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__9__l 
                    = __Vfunc_pleiads_sound__DOT__rc_step__9__level;
                __Vfunc_pleiads_sound__DOT__rc_step__9__c 
                    = __Vfunc_pleiads_sound__DOT__rc_step__9__counter;
                if ((0x7fffU > (IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__9__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__9__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__9__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__9__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__9__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__9__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__9__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__9__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__9__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_pleiads_sound__DOT__rc_step__9__n));
                        __Vfunc_pleiads_sound__DOT__rc_step__9__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__l) 
                                               + __Vfunc_pleiads_sound__DOT__rc_step__9__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__l) 
                                                    + __Vfunc_pleiads_sound__DOT__rc_step__9__n)));
                    }
                }
                vlSelfRef.pleiads_sound__DOT____VlemCall_9__rc_step 
                    = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__9__l)));
                pleiads_sound__DOT____Vconcswap_1_h4aa10c0a__0 
                    = (0x0000ffffU & (IData)(vlSelfRef.pleiads_sound__DOT____VlemCall_9__rc_step));
                vlSelfRef.pleiads_sound__DOT__pa6_ctr 
                    = pleiads_sound__DOT____Vconcswap_1_h4aa01a38__0;
                vlSelfRef.pleiads_sound__DOT__pa6_lvl 
                    = pleiads_sound__DOT____Vconcswap_1_h4aa10c0a__0;
            } else if (vlSelfRef.pleiads_sound__DOT__polybit) {
                __Vfunc_pleiads_sound__DOT__rc_step__10__n_on_discharge = 1U;
                __Vfunc_pleiads_sound__DOT__rc_step__10__k_discharge = 0x0000a000U;
                __Vfunc_pleiads_sound__DOT__rc_step__10__floor_lvl = 0U;
                __Vfunc_pleiads_sound__DOT__rc_step__10__counter 
                    = vlSelfRef.pleiads_sound__DOT__pa6_ctr;
                __Vfunc_pleiads_sound__DOT__rc_step__10__level 
                    = vlSelfRef.pleiads_sound__DOT__pa6_lvl;
                __Vfunc_pleiads_sound__DOT__rc_step__10__rate_val = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__10__n = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__10__l 
                    = __Vfunc_pleiads_sound__DOT__rc_step__10__level;
                __Vfunc_pleiads_sound__DOT__rc_step__10__c 
                    = __Vfunc_pleiads_sound__DOT__rc_step__10__counter;
                if ((0U < (IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__10__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__l)) 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__floor_lvl)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__10__k_discharge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__10__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__10__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__10__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__10__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__10__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__10__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__10__c 
                               + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__n_on_discharge)
                                   ? ((IData)(0x0000bb80U) 
                                      * __Vfunc_pleiads_sound__DOT__rc_step__10__n)
                                   : 0x0000bb80U));
                        __Vfunc_pleiads_sound__DOT__rc_step__10__l 
                            = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__l) 
                                               < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__floor_lvl) 
                                                  + __Vfunc_pleiads_sound__DOT__rc_step__10__n))
                                               ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__floor_lvl)
                                               : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__l) 
                                                  - __Vfunc_pleiads_sound__DOT__rc_step__10__n)));
                    }
                }
                vlSelfRef.pleiads_sound__DOT____VlemCall_10__rc_step 
                    = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__10__l)));
                pleiads_sound__DOT____Vconcswap_1_h4bd00b05__0 
                    = (IData)((vlSelfRef.pleiads_sound__DOT____VlemCall_10__rc_step 
                               >> 0x00000010U));
                __Vfunc_pleiads_sound__DOT__rc_step__11__n_on_discharge = 1U;
                __Vfunc_pleiads_sound__DOT__rc_step__11__k_discharge = 0x0000a000U;
                __Vfunc_pleiads_sound__DOT__rc_step__11__floor_lvl = 0U;
                __Vfunc_pleiads_sound__DOT__rc_step__11__counter 
                    = vlSelfRef.pleiads_sound__DOT__pa6_ctr;
                __Vfunc_pleiads_sound__DOT__rc_step__11__level 
                    = vlSelfRef.pleiads_sound__DOT__pa6_lvl;
                __Vfunc_pleiads_sound__DOT__rc_step__11__rate_val = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__11__n = 0;
                __Vfunc_pleiads_sound__DOT__rc_step__11__l 
                    = __Vfunc_pleiads_sound__DOT__rc_step__11__level;
                __Vfunc_pleiads_sound__DOT__rc_step__11__c 
                    = __Vfunc_pleiads_sound__DOT__rc_step__11__counter;
                if ((0U < (IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__l))) {
                    __Vfunc_pleiads_sound__DOT__rc_step__11__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & ((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__l)) 
                                 - (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__floor_lvl)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_pleiads_sound__DOT__rc_step__11__k_discharge))) 
                            >> 0x0000000cU));
                    __Vfunc_pleiads_sound__DOT__rc_step__11__c 
                        = (__Vfunc_pleiads_sound__DOT__rc_step__11__c 
                           - (IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_pleiads_sound__DOT__rc_step__11__c)) {
                        __Vfunc_pleiads_sound__DOT__rc_step__11__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_pleiads_sound__DOT__rc_step__11__c), (IData)(0x0000bb80U)));
                        __Vfunc_pleiads_sound__DOT__rc_step__11__c 
                            = (__Vfunc_pleiads_sound__DOT__rc_step__11__c 
                               + ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__n_on_discharge)
                                   ? ((IData)(0x0000bb80U) 
                                      * __Vfunc_pleiads_sound__DOT__rc_step__11__n)
                                   : 0x0000bb80U));
                        __Vfunc_pleiads_sound__DOT__rc_step__11__l 
                            = (0x0000ffffU & (((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__l) 
                                               < ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__floor_lvl) 
                                                  + __Vfunc_pleiads_sound__DOT__rc_step__11__n))
                                               ? (IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__floor_lvl)
                                               : ((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__l) 
                                                  - __Vfunc_pleiads_sound__DOT__rc_step__11__n)));
                    }
                }
                vlSelfRef.pleiads_sound__DOT____VlemCall_11__rc_step 
                    = (((QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_pleiads_sound__DOT__rc_step__11__l)));
                pleiads_sound__DOT____Vconcswap_1_h4bd95127__0 
                    = (0x0000ffffU & (IData)(vlSelfRef.pleiads_sound__DOT____VlemCall_11__rc_step));
                vlSelfRef.pleiads_sound__DOT__pa6_ctr 
                    = pleiads_sound__DOT____Vconcswap_1_h4bd00b05__0;
                vlSelfRef.pleiads_sound__DOT__pa6_lvl 
                    = pleiads_sound__DOT____Vconcswap_1_h4bd95127__0;
            }
            vlSelfRef.pleiads_sound__DOT__noise_ctr 
                = (vlSelfRef.pleiads_sound__DOT__noise_ctr 
                   - ((0x00000010U & (IData)(vlSelfRef.latch_a))
                       ? 0x000003adU : 0x000001d6U));
            if (VL_GTES_III(32, 0U, vlSelfRef.pleiads_sound__DOT__noise_ctr)) {
                vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n 
                    = ((IData)(1U) + VL_DIV_III(32, 
                                                (- vlSelfRef.pleiads_sound__DOT__noise_ctr), (IData)(0x0000bb80U)));
                vlSelfRef.pleiads_sound__DOT__noise_ctr 
                    = (vlSelfRef.pleiads_sound__DOT__noise_ctr 
                       + ((IData)(0x0000bb80U) * vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n));
                if ((0U < vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.pleiads_sound__DOT__polybit 
                        = (1U & vlSelfRef.pleiads_sound__DOT__lfsr);
                    vlSelfRef.pleiads_sound__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.pleiads_sound__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x11U)))));
                }
                if ((1U < vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.pleiads_sound__DOT__polybit 
                        = (1U & vlSelfRef.pleiads_sound__DOT__lfsr);
                    vlSelfRef.pleiads_sound__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.pleiads_sound__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x11U)))));
                }
                if ((2U < vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.pleiads_sound__DOT__polybit 
                        = (1U & vlSelfRef.pleiads_sound__DOT__lfsr);
                    vlSelfRef.pleiads_sound__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.pleiads_sound__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x11U)))));
                }
                if ((3U < vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.pleiads_sound__DOT__polybit 
                        = (1U & vlSelfRef.pleiads_sound__DOT__lfsr);
                    vlSelfRef.pleiads_sound__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.pleiads_sound__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.pleiads_sound__DOT__lfsr 
                                        >> 0x11U)))));
                }
            }
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise 
                = (0x0003ffffU & ((IData)(vlSelfRef.pleiads_sound__DOT__polybit)
                                   ? (IData)(vlSelfRef.pleiads_sound__DOT__pa6_lvl)
                                   : (- (IData)(vlSelfRef.pleiads_sound__DOT__pa6_lvl))));
            if ((0x00000080U & (IData)(vlSelfRef.latch_a))) {
                vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise 
                    = (0x0003ffffU & ((IData)(vlSelfRef.pleiads_sound__DOT__polybit)
                                       ? ((IData)(0x00007fffU) 
                                          + vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise)
                                       : (vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise 
                                          - (IData)(0x00007fffU))));
            }
            vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise 
                = (0x0003ffffU & VL_DIVS_III(18, vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise, (IData)(2U)));
            vlSelfRef.sample = (0x0003ffffU & (((VL_DIVS_III(18, vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t1, (IData)(2U)) 
                                                 + 
                                                 VL_DIVS_III(18, vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t23, (IData)(2U))) 
                                                + vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t4) 
                                               + vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise));
        }
        vlSelfRef.pleiads_sound__DOT__tick = 0U;
        if ((0x029f6300U <= ((IData)(0x0000bb80U) + vlSelfRef.pleiads_sound__DOT__acc))) {
            __Vdly__pleiads_sound__DOT__acc = (0x07ffffffU 
                                               & ((IData)(0x05615880U) 
                                                  + vlSelfRef.pleiads_sound__DOT__acc));
            vlSelfRef.pleiads_sound__DOT__tick = 1U;
        } else {
            __Vdly__pleiads_sound__DOT__acc = (0x07ffffffU 
                                               & ((IData)(0x0000bb80U) 
                                                  + vlSelfRef.pleiads_sound__DOT__acc));
        }
    }
    vlSelfRef.dbg_t1 = vlSelfRef.pleiads_sound__DOT__t1_out;
    vlSelfRef.dbg_t4 = vlSelfRef.pleiads_sound__DOT__t4_out;
    vlSelfRef.dbg_pa5 = vlSelfRef.pleiads_sound__DOT__pa5_lvl;
    vlSelfRef.dbg_pa6 = vlSelfRef.pleiads_sound__DOT__pa6_lvl;
    vlSelfRef.dbg_pb4 = vlSelfRef.pleiads_sound__DOT__pb4_lvl;
    vlSelfRef.dbg_pc5 = vlSelfRef.pleiads_sound__DOT__pc5_lvl;
    vlSelfRef.dbg_poly = vlSelfRef.pleiads_sound__DOT__polybit;
    vlSelfRef.pleiads_sound__DOT__acc = __Vdly__pleiads_sound__DOT__acc;
}

void Vpleiads_sound___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpleiads_sound___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vpleiads_sound___024root___eval_phase__act(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_phase__act\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpleiads_sound___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vpleiads_sound___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vpleiads_sound___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpleiads_sound___024root___eval_phase__nba(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_phase__nba\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpleiads_sound___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vpleiads_sound___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vpleiads_sound___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpleiads_sound___024root___eval(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpleiads_sound___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/pleiads_sound.sv", 27, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpleiads_sound___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/pleiads_sound.sv", 27, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vpleiads_sound___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vpleiads_sound___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vpleiads_sound___024root___eval_debug_assertions(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_debug_assertions\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
