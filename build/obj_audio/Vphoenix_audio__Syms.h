// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPHOENIX_AUDIO__SYMS_H_
#define VERILATED_VPHOENIX_AUDIO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vphoenix_audio.h"

// INCLUDE MODULE CLASSES
#include "Vphoenix_audio___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vphoenix_audio__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vphoenix_audio* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vphoenix_audio___024root       TOP;

    // CONSTRUCTORS
    Vphoenix_audio__Syms(VerilatedContext* contextp, const char* namep, Vphoenix_audio* modelp);
    ~Vphoenix_audio__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
