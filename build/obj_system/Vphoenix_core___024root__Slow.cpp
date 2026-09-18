// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_core.h for the primary calling header

#include "Vphoenix_core__pch.h"

// Parameter definitions for Vphoenix_core___024root
constexpr VlUnpacked<SData/*15:0*/, 78> Vphoenix_core___024root::phoenix_core__DOT__u_audio__DOT__u_tms__DOT__TMS_TUNE4;
constexpr VlUnpacked<IData/*23:0*/, 64> Vphoenix_core___024root::phoenix_core__DOT__u_video__DOT__PAL_LUT;


void Vphoenix_core___024root___ctor_var_reset(Vphoenix_core___024root* vlSelf);

Vphoenix_core___024root::Vphoenix_core___024root(Vphoenix_core__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vphoenix_core___024root___ctor_var_reset(this);
}

void Vphoenix_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vphoenix_core___024root::~Vphoenix_core___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
