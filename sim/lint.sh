#!/bin/sh
# Lint every RTL file. Cheap, and the first thing CI should do.
set -e
cd "$(dirname "$0")/.."
verilator --lint-only -Wall \
    -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-BLKSEQ -Wno-CASEOVERLAP \
    -Wno-PINCONNECTEMPTY -Wno-MULTIDRIVEN \
    -Irtl rtl/*.sv --top-module phoenix_core
echo "lint clean"
