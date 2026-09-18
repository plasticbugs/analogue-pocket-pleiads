// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video_top.h for the primary calling header

#include "Vtb_video_top__pch.h"

// Parameter definitions for Vtb_video_top___024root
constexpr VlUnpacked<IData/*23:0*/, 64> Vtb_video_top___024root::tb_video_top__DOT__u_video__DOT__PAL_LUT;


void Vtb_video_top___024root___ctor_var_reset(Vtb_video_top___024root* vlSelf);

Vtb_video_top___024root::Vtb_video_top___024root(Vtb_video_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_video_top___024root___ctor_var_reset(this);
}

void Vtb_video_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_video_top___024root::~Vtb_video_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
