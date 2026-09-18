// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_audio.h for the primary calling header

#include "Vphoenix_audio__pch.h"

bool Vphoenix_audio___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___trigger_anySet__act\n"); );
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

void Vphoenix_audio___024root___nba_sequent__TOP__0(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___nba_sequent__TOP__0\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887a3381__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887a3381__0 = 0;
    SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887b7933__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887b7933__0 = 0;
    IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c745652__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c745652__0 = 0;
    SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c76a095__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c76a095__0 = 0;
    IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da7322c__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da7322c__0 = 0;
    SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da4641e__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da4641e__0 = 0;
    IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1238ff9e__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1238ff9e__0 = 0;
    SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1246d8db__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1246d8db__0 = 0;
    IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa01a38__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa01a38__0 = 0;
    SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa10c0a__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa10c0a__0 = 0;
    IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd00b05__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd00b05__0 = 0;
    SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd95127__0;
    phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd95127__0 = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__counter = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__charging;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__charging = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_charge = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__counter = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__k_charge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__counter = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__k_charge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__k_charge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__counter = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__level;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__level = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__counter;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__counter = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__floor_lvl;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__floor_lvl = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__k_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__k_discharge = 0;
    CData/*0:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n_on_discharge;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n_on_discharge = 0;
    QData/*47:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__rate_val;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__rate_val = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n = 0;
    SData/*15:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l = 0;
    IData/*31:0*/ __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c;
    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c = 0;
    IData/*26:0*/ __Vdly__phoenix_audio__DOT__u_fx__DOT__acc;
    __Vdly__phoenix_audio__DOT__u_fx__DOT__acc = 0;
    // Body
    __Vdly__phoenix_audio__DOT__u_fx__DOT__acc = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__acc;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__acc 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__acc;
    vlSelfRef.__Vdly__phoenix_audio__DOT__snd_b_q = vlSelfRef.phoenix_audio__DOT__snd_b_q;
    vlSelfRef.__Vdly__phoenix_audio__DOT__snd_tog = vlSelfRef.phoenix_audio__DOT__snd_tog;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__outbit 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__outbit;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ctr;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_ctr;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__shift 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__shift;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_max 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_max;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__octave 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__octave;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__playing 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__playing;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__sum 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__sum;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_pend;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__ctr__v12 = 0U;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ofs;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v12 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v13 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v12 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v13 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v14 = 0U;
    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi 
        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v13 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v14 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v0 = 0U;
    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v1 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.phoenix_audio__DOT__fx_tick = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_div = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_out = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_out = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_out = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_out = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl = 0x11ebU;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_ctr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit = 0U;
        vlSelfRef.phoenix_audio__DOT__fx_sample = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__snd_tog = 0U;
        __Vdly__phoenix_audio__DOT__u_fx__DOT__acc = 0U;
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__tick = 0U;
    } else {
        vlSelfRef.phoenix_audio__DOT__fx_tick = 0U;
        if (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__tick) {
            vlSelfRef.phoenix_audio__DOT__fx_tick = 1U;
            if ((0x0fU != (0x0000000fU & (IData)(vlSelfRef.snd_a)))) {
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_ctr 
                    = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_ctr 
                       - (IData)(0x00001f40U));
                if (VL_GTES_III(32, 0U, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_ctr)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_ctr 
                        = ((IData)(0x0000bb80U) + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_ctr);
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_div 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_div)));
                    if ((0U == (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_div))) {
                        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_out 
                            = (1U & (~ (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_out)));
                        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_div 
                            = (0x0000000fU & (IData)(vlSelfRef.snd_a));
                    }
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t1 
                = ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t1_out)
                    ? 0x00007fffU : 0x00038001U);
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n_on_discharge = 1U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_discharge = 0x0000a000U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_charge = 0x0000a000U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__charging 
                = (1U & ((IData)(vlSelfRef.snd_b) >> 4U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_0__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__0__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887a3381__0 
                = (IData)((vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_0__rc_step 
                           >> 0x00000010U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n_on_discharge = 1U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_discharge = 0x0000a000U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_charge = 0x0000a000U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__charging 
                = (1U & ((IData)(vlSelfRef.snd_b) >> 4U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_1__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__1__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887b7933__0 
                = (0x0000ffffU & (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_1__rc_step));
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_ctr 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887a3381__0;
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h887b7933__0;
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23 
                = (0x0000ffffU & ((IData)(0x7fffU) 
                                  - (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl)));
            if ((((IData)(vlSelfRef.snd_b) >> 5U) & 
                 (0x7fffU > (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23)))) {
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr 
                    = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr 
                       - (((IData)(0x0000015fU) * (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23)) 
                          >> 0x0000000fU));
                if (VL_GTES_III(32, 0U, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr), (IData)(0x0000bb80U)));
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr 
                        = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr 
                           + ((IData)(0x0000bb80U) 
                              * vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n));
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_out 
                        = (1U & ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_out) 
                                 ^ vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n));
                }
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__step 
                    = ((IData)(0x000000c2U) + VL_DIV_III(32, 
                                                         ((IData)(0x00000184U) 
                                                          * (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23)), (IData)(0x000083e8U)));
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_ctr 
                    = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_ctr 
                       - vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__step);
                if (VL_GTES_III(32, 0U, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_ctr)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_ctr), (IData)(0x0000bb80U)));
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_ctr 
                        = ((IData)(0x0000bb80U) + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_ctr);
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_out 
                        = (1U & ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_out) 
                                 ^ vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t23 
                = ((0x00000020U & (IData)(vlSelfRef.snd_b))
                    ? (0x0003ffffU & VL_DIVS_III(18, 
                                                 (0x0003ffffU 
                                                  & (((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t2_out)
                                                       ? 0x00007fffU
                                                       : 0x00038001U) 
                                                     + 
                                                     ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t3_out)
                                                       ? 0x00007fffU
                                                       : 0x00038001U))), (IData)(2U)))
                    : 0U);
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n_on_discharge = 1U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_discharge = 0x0002d745U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_charge = 0x0000f26cU;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl = 0x11ebU;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__charging 
                = (1U & ((IData)(vlSelfRef.snd_c) >> 4U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_2__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__2__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c745652__0 
                = (IData)((vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_2__rc_step 
                           >> 0x00000010U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n_on_discharge = 1U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_discharge = 0x0002d745U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_charge = 0x0000f26cU;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl = 0x11ebU;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__charging 
                = (1U & ((IData)(vlSelfRef.snd_c) >> 4U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_3__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__3__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c76a095__0 
                = (0x0000ffffU & (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_3__rc_step));
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_ctr 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c745652__0;
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h2c76a095__0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n_on_discharge = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_discharge = 0x0000a000U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_charge = 0x0012f07cU;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__charging 
                = (1U & ((IData)(vlSelfRef.snd_c) >> 5U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_4__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__4__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da7322c__0 
                = (IData)((vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_4__rc_step 
                           >> 0x00000010U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n_on_discharge = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_discharge = 0x0000a000U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_charge = 0x0012f07cU;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__charging 
                = (1U & ((IData)(vlSelfRef.snd_c) >> 5U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_5__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__5__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da4641e__0 
                = (0x0000ffffU & (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_5__rc_step));
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_ctr 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da7322c__0;
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h8da4641e__0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n_on_discharge = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_discharge = 0x00000745U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_charge = 0x000004d9U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__charging 
                = (1U & ((IData)(vlSelfRef.snd_a) >> 5U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_6__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__6__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1238ff9e__0 
                = (IData)((vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_6__rc_step 
                           >> 0x00000010U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n_on_discharge = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_discharge = 0x00000745U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_charge = 0x000004d9U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl = 0U;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__charging 
                = (1U & ((IData)(vlSelfRef.snd_a) >> 5U));
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__counter 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_ctr;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__level 
                = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n = 0;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__level;
            __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__counter;
            if (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__charging) {
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n)));
                    }
                }
            } else if (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l) 
                        > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val 
                    = (0x0000000fffffffffULL & (((0x0000ffffffffffffULL 
                                                  & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l)) 
                                                     - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl)))) 
                                                 * 
                                                 (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__k_discharge))) 
                                                >> 0x0000000cU));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                    = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                       - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__rate_val));
                if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c)) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n 
                        = ((IData)(1U) + VL_DIV_III(32, 
                                                    (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c), (IData)(0x0000bb80U)));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c 
                           + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n_on_discharge)
                               ? ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n)
                               : 0x0000bb80U));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l 
                        = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l) 
                                           < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl) 
                                              + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n))
                                           ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__floor_lvl)
                                           : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l) 
                                              - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__n)));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_7__rc_step 
                = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__c)) 
                    << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__7__l)));
            phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1246d8db__0 
                = (0x0000ffffU & (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_7__rc_step));
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_ctr 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1238ff9e__0;
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl 
                = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h1246d8db__0;
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl4 
                = (0x0000ffffU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit)
                                   ? ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl) 
                                      + VL_DIV_III(32, 
                                                   ((IData)(0x00000014U) 
                                                    * 
                                                    ((IData)(0x00007fffU) 
                                                     - (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl))), (IData)(0x00000043U)))
                                   : VL_DIV_III(32, 
                                                ((IData)(0x0000002fU) 
                                                 * (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc4_lvl)), (IData)(0x00000043U))));
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr 
                = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr 
                   - (((IData)(0x00000523U) * (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl4)) 
                      >> 0x0000000fU));
            if (VL_GTES_III(32, 0U, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr)) {
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n 
                    = ((IData)(1U) + VL_DIV_III(32, 
                                                (- vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr), (IData)(0x0000bb80U)));
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr 
                    = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_ctr 
                       + ((IData)(0x0000bb80U) * vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n));
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_out 
                    = (1U & ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_out) 
                             ^ vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n));
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4 
                = (0x0003ffffU & (VL_DIV_III(32, ((IData)(0x00000021U) 
                                                  * (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl)), (IData)(0x00000050U)) 
                                  + VL_DIV_III(32, 
                                               ((IData)(0x0000002fU) 
                                                * (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl)), (IData)(0x00000050U))));
            if ((1U & (~ (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__t4_out)))) {
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4 
                    = (0x0003ffffU & (- vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4));
            }
            if ((0x00000040U & (IData)(vlSelfRef.snd_a))) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__k_charge = 0x00561691U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__counter 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__level 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__rate_val = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__level;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__counter;
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__n)));
                    }
                }
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_8__rc_step 
                    = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__8__l)));
                phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa01a38__0 
                    = (IData)((vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_8__rc_step 
                               >> 0x00000010U));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__k_charge = 0x00561691U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__counter 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__level 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__rate_val = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__level;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__counter;
                if ((0x7fffU > (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & (0x0000000000007fffULL 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__k_charge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c 
                               + ((IData)(0x0000bb80U) 
                                  * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l 
                            = ((0x00007fffU < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l) 
                                               + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n))
                                ? 0x00007fffU : (0x0000ffffU 
                                                 & ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l) 
                                                    + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__n)));
                    }
                }
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_9__rc_step 
                    = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__9__l)));
                phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa10c0a__0 
                    = (0x0000ffffU & (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_9__rc_step));
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr 
                    = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa01a38__0;
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl 
                    = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4aa10c0a__0;
            } else if (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit) {
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n_on_discharge = 1U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__k_discharge = 0x0000a000U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__floor_lvl = 0U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__counter 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__level 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__rate_val = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__level;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__counter;
                if ((0U < (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l)) 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__floor_lvl)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__k_discharge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c 
                               + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n_on_discharge)
                                   ? ((IData)(0x0000bb80U) 
                                      * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n)
                                   : 0x0000bb80U));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l 
                            = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l) 
                                               < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__floor_lvl) 
                                                  + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n))
                                               ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__floor_lvl)
                                               : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l) 
                                                  - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__n)));
                    }
                }
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_10__rc_step 
                    = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__10__l)));
                phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd00b05__0 
                    = (IData)((vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_10__rc_step 
                               >> 0x00000010U));
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n_on_discharge = 1U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__k_discharge = 0x0000a000U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__floor_lvl = 0U;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__counter 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__level 
                    = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__rate_val = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n = 0;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__level;
                __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c 
                    = __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__counter;
                if ((0U < (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l))) {
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__rate_val 
                        = (0x0000000fffffffffULL & 
                           (((0x0000ffffffffffffULL 
                              & ((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l)) 
                                 - (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__floor_lvl)))) 
                             * (0x0000ffffffffffffULL 
                                & VL_EXTENDS_QI(48,32, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__k_discharge))) 
                            >> 0x0000000cU));
                    __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c 
                        = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c 
                           - (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__rate_val));
                    if (VL_GTES_III(32, 0U, __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c)) {
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n 
                            = ((IData)(1U) + VL_DIV_III(32, 
                                                        (- __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c), (IData)(0x0000bb80U)));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c 
                            = (__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c 
                               + ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n_on_discharge)
                                   ? ((IData)(0x0000bb80U) 
                                      * __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n)
                                   : 0x0000bb80U));
                        __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l 
                            = (0x0000ffffU & (((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l) 
                                               < ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__floor_lvl) 
                                                  + __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n))
                                               ? (IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__floor_lvl)
                                               : ((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l) 
                                                  - __Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__n)));
                    }
                }
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_11__rc_step 
                    = (((QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__c)) 
                        << 0x00000010U) | (QData)((IData)(__Vfunc_phoenix_audio__DOT__u_fx__DOT__rc_step__11__l)));
                phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd95127__0 
                    = (0x0000ffffU & (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT____VlemCall_11__rc_step));
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_ctr 
                    = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd00b05__0;
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl 
                    = phoenix_audio__DOT__u_fx__DOT____Vconcswap_1_h4bd95127__0;
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr 
                = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr 
                   - ((0x00000010U & (IData)(vlSelfRef.snd_a))
                       ? 0x000003adU : 0x000001d6U));
            if (VL_GTES_III(32, 0U, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr)) {
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n 
                    = ((IData)(1U) + VL_DIV_III(32, 
                                                (- vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr), (IData)(0x0000bb80U)));
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr 
                    = (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__noise_ctr 
                       + ((IData)(0x0000bb80U) * vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n));
                if ((0U < vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit 
                        = (1U & vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr);
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x11U)))));
                }
                if ((1U < vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit 
                        = (1U & vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr);
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x11U)))));
                }
                if ((2U < vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit 
                        = (1U & vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr);
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x11U)))));
                }
                if ((3U < vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n)) {
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit 
                        = (1U & vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr);
                    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                        = ((0x0003fffeU & (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                           << 1U)) 
                           | (1U & (~ ((vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x10U) ^ 
                                       (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__lfsr 
                                        >> 0x11U)))));
                }
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise 
                = (0x0003ffffU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit)
                                   ? (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl)
                                   : (- (IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl))));
            if ((0x00000080U & (IData)(vlSelfRef.snd_a))) {
                vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise 
                    = (0x0003ffffU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit)
                                       ? ((IData)(0x00007fffU) 
                                          + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise)
                                       : (vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise 
                                          - (IData)(0x00007fffU))));
            }
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise 
                = (0x0003ffffU & VL_DIVS_III(18, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise, (IData)(2U)));
            vlSelfRef.phoenix_audio__DOT__fx_sample 
                = (0x0003ffffU & (((VL_DIVS_III(18, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t1, (IData)(2U)) 
                                    + VL_DIVS_III(18, vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t23, (IData)(2U))) 
                                   + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4) 
                                  + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise));
        }
        if (vlSelfRef.sample_tick) {
            vlSelfRef.__Vdly__phoenix_audio__DOT__snd_tog 
                = (1U & (~ (IData)(vlSelfRef.phoenix_audio__DOT__snd_tog)));
        }
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__tick = 0U;
        if ((0x029f6300U <= ((IData)(0x0000bb80U) + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__acc))) {
            __Vdly__phoenix_audio__DOT__u_fx__DOT__acc 
                = (0x07ffffffU & ((IData)(0x05615880U) 
                                  + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__acc));
            vlSelfRef.phoenix_audio__DOT__u_fx__DOT__tick = 1U;
        } else {
            __Vdly__phoenix_audio__DOT__u_fx__DOT__acc 
                = (0x07ffffffU & ((IData)(0x0000bb80U) 
                                  + vlSelfRef.phoenix_audio__DOT__u_fx__DOT__acc));
        }
    }
    vlSelfRef.dbg_pa5 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl;
    vlSelfRef.dbg_pa6 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
    vlSelfRef.dbg_pb4 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl;
    vlSelfRef.dbg_pc5 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl;
    vlSelfRef.dbg_poly = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit;
    vlSelfRef.dbg_fx = vlSelfRef.phoenix_audio__DOT__fx_sample;
    vlSelfRef.phoenix_audio__DOT__u_fx__DOT__acc = __Vdly__phoenix_audio__DOT__u_fx__DOT__acc;
}

extern const VlWide<12>/*383:0*/ Vphoenix_audio__ConstPool__CONST_h31ebeb16_0;
extern const VlUnpacked<QData/*51:0*/, 6> Vphoenix_audio__ConstPool__TABLE_h4f0555cb_0;

void Vphoenix_audio___024root___nba_sequent__TOP__2(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___nba_sequent__TOP__2\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    IData/*23:0*/ __VdlyVal__phoenix_audio__DOT__u_tms__DOT__ctr__v12;
    __VdlyVal__phoenix_audio__DOT__u_tms__DOT__ctr__v12 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__ctr__v12;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__ctr__v12 = 0;
    SData/*15:0*/ __VdlyVal__phoenix_audio__DOT__u_tms__DOT__freq__v12;
    __VdlyVal__phoenix_audio__DOT__u_tms__DOT__freq__v12 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v12;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v12 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v12;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v12 = 0;
    IData/*23:0*/ __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12;
    __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v13;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v13 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v13;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v13 = 0;
    SData/*15:0*/ __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol__v14;
    __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol__v14 = 0;
    CData/*3:0*/ __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v14;
    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v14 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.phoenix_audio__DOT__snd_tog = vlSelfRef.__Vdly__phoenix_audio__DOT__snd_tog;
    if (vlSelfRef.reset) {
        vlSelfRef.phoenix_audio__DOT__snd_hold = 0U;
        vlSelfRef.sample_tick = 0U;
        vlSelfRef.sample = 0U;
        vlSelfRef.phoenix_audio__DOT__tms_prev = 0U;
        vlSelfRef.phoenix_audio__DOT__tms_cur = 0U;
        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v0 = 1U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__outbit = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__shift = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_max = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__octave = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__playing = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__sum = 0U;
        vlSelfRef.phoenix_audio__DOT__tms_sample = 0U;
        vlSelfRef.phoenix_audio__DOT__tms_tick = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend = 0U;
        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v1 = 1U;
    } else {
        if (vlSelfRef.sample_tick) {
            vlSelfRef.phoenix_audio__DOT__snd_hold 
                = vlSelfRef.sample;
        }
        vlSelfRef.sample_tick = 0U;
        if (vlSelfRef.phoenix_audio__DOT__fx_tick) {
            vlSelfRef.sample_tick = 1U;
            vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__interp 
                = vlSelfRef.phoenix_audio__DOT__tms_prev;
            vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__mixed 
                = (0x0000ffffffffffffULL & VL_SHIFTRS_QQI(48,48,32, 
                                                          (0x0000ffffffffffffULL 
                                                           & (VL_MULS_QQQ(48, 0x000000000000c000ULL, 
                                                                          (0x0000ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(48,32, vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__interp))) 
                                                              + 
                                                              VL_MULS_QQQ(48, 0x0000000000006666ULL, 
                                                                          (0x0000ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(48,16, 
                                                                                (VL_LTS_III(18, 0x00007fffU, vlSelfRef.phoenix_audio__DOT__fx_sample)
                                                                                 ? 0x00007fffU
                                                                                 : 
                                                                                (VL_GTS_III(18, 0x00038000U, vlSelfRef.phoenix_audio__DOT__fx_sample)
                                                                                 ? 0x00008000U
                                                                                 : 
                                                                                (0x0000ffffU 
                                                                                & vlSelfRef.phoenix_audio__DOT__fx_sample)))))))), 0x00000010U));
            vlSelfRef.sample = (VL_LTS_IQQ(48, 0x0000000000007fffULL, vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__mixed)
                                 ? 0x00007fffU : (VL_GTS_IQQ(48, 0x0000ffffffff8000ULL, vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__mixed)
                                                   ? 0x00008000U
                                                   : 
                                                  (0x0000ffffU 
                                                   & (IData)(vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__mixed))));
        }
        if (vlSelfRef.phoenix_audio__DOT__tms_tick) {
            vlSelfRef.phoenix_audio__DOT__tms_prev 
                = vlSelfRef.phoenix_audio__DOT__tms_cur;
            vlSelfRef.phoenix_audio__DOT__tms_cur = vlSelfRef.phoenix_audio__DOT__tms_sample;
        }
        vlSelfRef.phoenix_audio__DOT__tms_tick = 0U;
        if (vlSelfRef.phoenix_audio__DOT__note_we) {
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend = 1U;
        }
        if ((4U & (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state))) {
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state))) {
                vlSelfRef.phoenix_audio__DOT__tms_sample 
                    = (0x0000ffffU & (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__sum 
                                      >> 3U));
                vlSelfRef.phoenix_audio__DOT__tms_tick = 1U;
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 0U;
            } else {
                if ((((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)) 
                      && (1U & (0x0aebU >> (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)))) 
                     & (0U != ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq
                               [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                                : 0U)))) {
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c 
                        = (0x00ffffffU & (((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                            ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr
                                           [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                                            : 0U) - 
                                          ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                            ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq
                                           [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                                            : 0U)));
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob 
                        = ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)) 
                           && (1U & ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__outbit) 
                                     >> (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))));
                    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c))) {
                        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c 
                            = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                              + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c)));
                        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob 
                            = (1U & (~ (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob)));
                    }
                    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c))) {
                        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c 
                            = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                              + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c)));
                        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob 
                            = (1U & (~ (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob)));
                    }
                    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c))) {
                        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c 
                            = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                              + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c)));
                        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob 
                            = (1U & (~ (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob)));
                    }
                    if ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                        __VdlyVal__phoenix_audio__DOT__u_tms__DOT__ctr__v12 
                            = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c;
                        __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__ctr__v12 
                            = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi;
                        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__ctr__v12 = 1U;
                        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__outbit 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) 
                                & (IData)(vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__outbit)) 
                               | (0x0fffU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob) 
                                             << (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))));
                    }
                    if (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob) {
                        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__sum 
                            = (0x000fffffU & (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__sum 
                                              + ((0x0bU 
                                                  >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                                  ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol
                                                 [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                                                  : 0U)));
                    }
                }
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
                if ((0x0bU == (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 5U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state))) {
                if ((0U != (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_entry))) {
                    if ((0x0bU >= (0x0000000fU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__shift) 
                                                  + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))))) {
                        __VdlyVal__phoenix_audio__DOT__u_tms__DOT__freq__v12 
                            = (0x0000ffffU & ((((IData)(0x000000f7U) 
                                                << (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__octave)) 
                                               * (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_entry)) 
                                              >> 0x0000000aU));
                        __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v12 
                            = (0x0000000fU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__shift) 
                                              + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
                        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v12 = 1U;
                        __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v12 
                            = (0x0000000fU & ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__shift) 
                                              + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
                        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v12 = 1U;
                    }
                }
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
                if ((5U == (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ofs)));
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi = 0U;
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 4U;
                }
            } else {
                vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc 
                    = (0x00ffffffU & (VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ctr) 
                                      - (IData)(0x00007fffU)));
                vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n = 0U;
                if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc))) {
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc 
                        = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                          + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc)));
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n = 1U;
                }
                if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc))) {
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc 
                        = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                          + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc)));
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n = 2U;
                }
                if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc))) {
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc 
                        = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                          + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc)));
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n = 3U;
                }
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr 
                    = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc;
                if ((0U != (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n))) {
                    if (VL_GTES_III(32, 0U, (VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_ctr) 
                                             - VL_EXTENDS_II(32,24, (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n))))) {
                        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr 
                            = (0x00ffffffU & ((IData)(0x00007fffU) 
                                              + (VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_ctr) 
                                                 - 
                                                 VL_EXTENDS_II(24,24, (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n)))));
                        if (((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ofs) 
                             < (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_max))) {
                            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__shift 
                                = (6U ^ (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__shift));
                            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi = 0U;
                            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 3U;
                        } else {
                            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 4U;
                        }
                    } else {
                        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr 
                            = (0x00ffffffU & (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_ctr 
                                              - (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n)));
                        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 4U;
                    }
                } else {
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 4U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state))) {
            if ((0U != ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                         ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol
                        [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                         : 0U))) {
                vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc 
                    = (0x00ffffffU & (((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                        ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr
                                       [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                                        : 0U) - (0x000fffffU 
                                                 & (IData)(
                                                           (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                            >> 0x00000020U)))));
                vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k 
                    = (0x000fffffU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
                if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc))) {
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc 
                        = (0x00ffffffU & ((IData)(0x00003dc0U) 
                                          + VL_EXTENDS_II(24,24, vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc)));
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k 
                        = (0x000fffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
                }
                if ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                    __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 
                        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc;
                    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 
                        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi;
                    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 = 1U;
                }
                if ((((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                       ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol
                      [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                       : 0U) <= vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k)) {
                    if ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                        __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v13 
                            = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi;
                        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v13 = 1U;
                        __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v13 
                            = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi;
                        vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v13 = 1U;
                    }
                } else if ((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                    __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol__v14 
                        = (0x0000ffffU & (((0x0bU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                            ? vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol
                                           [vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi]
                                            : 0U) - vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k));
                    __VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v14 
                        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi;
                    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v14 = 1U;
                }
            }
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
            if ((0x0bU == (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))) {
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi = 0U;
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 2U;
            }
        } else if (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tick) {
            if (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_pend) {
                vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend = 0U;
                if ((0x0cU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_val_l))) {
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr = 0U;
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr = 0U;
                    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v13 = 1U;
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__octave 
                        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_oct_l;
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs 
                        = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_val_l;
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_max 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_val_l)));
                    vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__playing = 1U;
                    vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v14 = 1U;
                }
            }
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__sum = 0U;
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi = 0U;
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state 
                = (((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__playing) 
                    | ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_pend) 
                       & (0x0cU >= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_val_l))))
                    ? 1U : 5U);
        }
    }
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__outbit 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__outbit;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ctr 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_ctr 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__shift 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__shift;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_max 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_max;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__octave 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__octave;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__playing 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__playing;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__state 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__state;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__sum = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__sum;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_pend 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ofs 
        = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs;
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__vi;
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v0) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[0U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[0U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[0U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v1) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[1U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[2U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[3U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[4U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[5U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[6U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[7U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[8U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[9U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[10U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[11U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[1U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[2U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[3U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[4U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[5U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[6U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[7U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[8U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[9U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[10U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[11U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[1U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[2U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[3U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[4U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[5U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[6U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[7U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[8U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[9U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[10U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[11U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[1U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[2U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[3U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[4U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[5U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[6U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[7U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[8U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[9U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[10U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12] 
            = __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v13) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__ctr__v12) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__ctr__v12] 
            = __VdlyVal__phoenix_audio__DOT__u_tms__DOT__ctr__v12;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v13) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v14) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[1U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[2U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[3U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[4U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[5U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[6U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[7U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[8U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[9U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[10U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol_ctr[11U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[1U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[2U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[3U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[4U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[5U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[6U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[7U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[8U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[9U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[10U] = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__ctr[11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v12) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v12] 
            = __VdlyVal__phoenix_audio__DOT__u_tms__DOT__freq__v12;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v13) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__freq__v13] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v12) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v12] = 0x7fffU;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v13) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v13] = 0U;
    }
    if (vlSelfRef.__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v14) {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[__VdlyDim0__phoenix_audio__DOT__u_tms__DOT__vol__v14] 
            = __VdlyVal__phoenix_audio__DOT__u_tms__DOT__vol__v14;
    }
    vlSelfRef.dbg_tms = vlSelfRef.phoenix_audio__DOT__tms_sample;
    __Vtemp_1 = VL_MATCHMASKED_I(32, VL_MODDIV_III(32, (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi), (IData)(6U)), Vphoenix_audio__ConstPool__CONST_h31ebeb16_0);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = Vphoenix_audio__ConstPool__TABLE_h4f0555cb_0
        [__Vtemp_1];
    __VdfgRegularize_hebeb780c_0_1 = (0x0000007fU & 
                                      (((IData)(6U) 
                                        * (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ofs)) 
                                       + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
    vlSelfRef.dbg_freq0 = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[0U];
    vlSelfRef.dbg_vol0 = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[0U];
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.phoenix_audio__DOT__note_we) {
            vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_val_l 
                = vlSelfRef.phoenix_audio__DOT__note_value;
            vlSelfRef.phoenix_audio__DOT__u_tms__DOT__note_oct_l 
                = vlSelfRef.phoenix_audio__DOT__note_octave;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__acc = 0U;
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tick = 0U;
        vlSelfRef.__Vdly__phoenix_audio__DOT__snd_b_q = 0U;
        vlSelfRef.phoenix_audio__DOT__note_we = 0U;
    } else {
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tick = 0U;
        if ((0x029f6300U <= ((IData)(0x00003dc0U) + vlSelfRef.phoenix_audio__DOT__u_tms__DOT__acc))) {
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__acc 
                = (0x07ffffffU & ((IData)(0x0560dac0U) 
                                  + vlSelfRef.phoenix_audio__DOT__u_tms__DOT__acc));
            vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tick = 1U;
        } else {
            vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__acc 
                = (0x07ffffffU & ((IData)(0x00003dc0U) 
                                  + vlSelfRef.phoenix_audio__DOT__u_tms__DOT__acc));
        }
        vlSelfRef.phoenix_audio__DOT__note_we = 0U;
        if (((IData)(vlSelfRef.snd_b) != (IData)(vlSelfRef.phoenix_audio__DOT__snd_b_q))) {
            vlSelfRef.dbg_notes = (1U & (~ (IData)(vlSelfRef.dbg_notes)));
            vlSelfRef.__Vdly__phoenix_audio__DOT__snd_b_q 
                = vlSelfRef.snd_b;
            vlSelfRef.phoenix_audio__DOT__note_value 
                = (0x0000000fU & (IData)(vlSelfRef.snd_b));
            vlSelfRef.phoenix_audio__DOT__note_octave 
                = ((3U == (3U & ((IData)(vlSelfRef.snd_b) 
                                 >> 6U))) ? 2U : (3U 
                                                  & ((IData)(vlSelfRef.snd_b) 
                                                     >> 6U)));
            vlSelfRef.phoenix_audio__DOT__note_we = 1U;
        }
    }
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_entry 
        = (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__TMS_TUNE4
           [__VdfgRegularize_hebeb780c_0_1] & (- (IData)(
                                                         (0x4dU 
                                                          >= (IData)(__VdfgRegularize_hebeb780c_0_1)))));
    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__acc = vlSelfRef.__Vdly__phoenix_audio__DOT__u_tms__DOT__acc;
    vlSelfRef.phoenix_audio__DOT__snd_b_q = vlSelfRef.__Vdly__phoenix_audio__DOT__snd_b_q;
}

void Vphoenix_audio___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vphoenix_audio___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vphoenix_audio___024root___eval_phase__act(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_phase__act\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.clk_audio) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_audio__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__clk_audio__0 
            = vlSelfRef.clk_audio;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vphoenix_audio___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vphoenix_audio___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vphoenix_audio___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vphoenix_audio___024root___eval_phase__nba(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_phase__nba\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vphoenix_audio___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vphoenix_audio___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__1___Vdly__phoenix_audio__DOT__tog_sync;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__1___Vdly__phoenix_audio__DOT__tog_sync = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__1___Vdly__phoenix_audio__DOT__tog_sync 
                        = vlSelfRef.phoenix_audio__DOT__tog_sync;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__1___Vdly__phoenix_audio__DOT__tog_sync 
                        = ((6U & ((IData)(vlSelfRef.phoenix_audio__DOT__tog_sync) 
                                  << 1U)) | (IData)(vlSelfRef.phoenix_audio__DOT__snd_tog));
                    if (((1U & ((IData)(vlSelfRef.phoenix_audio__DOT__tog_sync) 
                                >> 2U)) != (1U & ((IData)(vlSelfRef.phoenix_audio__DOT__tog_sync) 
                                                  >> 1U)))) {
                        vlSelfRef.audio_out = vlSelfRef.phoenix_audio__DOT__snd_hold;
                    }
                    vlSelfRef.phoenix_audio__DOT__tog_sync 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__1___Vdly__phoenix_audio__DOT__tog_sync;
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vphoenix_audio___024root___nba_sequent__TOP__2(vlSelf);
            }
        }
        Vphoenix_audio___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vphoenix_audio___024root___eval(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vphoenix_audio___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/phoenix_audio.sv", 19, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vphoenix_audio___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/phoenix_audio.sv", 19, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vphoenix_audio___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vphoenix_audio___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vphoenix_audio___024root___eval_debug_assertions(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_debug_assertions\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.is_phoenix & 0xfeU)))) {
        Verilated::overWidthError("is_phoenix");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk_audio & 0xfeU)))) {
        Verilated::overWidthError("clk_audio");
    }
}
#endif  // VL_DEBUG
