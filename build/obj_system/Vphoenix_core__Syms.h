// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPHOENIX_CORE__SYMS_H_
#define VERILATED_VPHOENIX_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vphoenix_core.h"

// INCLUDE MODULE CLASSES
#include "Vphoenix_core___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vphoenix_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vphoenix_core* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vphoenix_core___024root        TOP;

    // CONSTRUCTORS
    Vphoenix_core__Syms(VerilatedContext* contextp, const char* namep, Vphoenix_core* modelp);
    ~Vphoenix_core__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
