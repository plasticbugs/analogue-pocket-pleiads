// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_audio.h for the primary calling header

#include "Vphoenix_audio__pch.h"

// Parameter definitions for Vphoenix_audio___024root
constexpr VlUnpacked<SData/*15:0*/, 78> Vphoenix_audio___024root::phoenix_audio__DOT__u_tms__DOT__TMS_TUNE4;


void Vphoenix_audio___024root___ctor_var_reset(Vphoenix_audio___024root* vlSelf);

Vphoenix_audio___024root::Vphoenix_audio___024root(Vphoenix_audio__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vphoenix_audio___024root___ctor_var_reset(this);
}

void Vphoenix_audio___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vphoenix_audio___024root::~Vphoenix_audio___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
