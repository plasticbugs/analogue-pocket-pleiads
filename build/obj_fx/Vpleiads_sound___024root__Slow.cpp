// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpleiads_sound.h for the primary calling header

#include "Vpleiads_sound__pch.h"

void Vpleiads_sound___024root___ctor_var_reset(Vpleiads_sound___024root* vlSelf);

Vpleiads_sound___024root::Vpleiads_sound___024root(Vpleiads_sound__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vpleiads_sound___024root___ctor_var_reset(this);
}

void Vpleiads_sound___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpleiads_sound___024root::~Vpleiads_sound___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
