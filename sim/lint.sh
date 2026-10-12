#!/bin/sh
# Lint every RTL file. Cheap, and the first thing CI should do.
set -e
cd "$(dirname "$0")/.."
verilator --lint-only -Wall \
    -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-BLKSEQ -Wno-CASEOVERLAP \
    -Wno-PINCONNECTEMPTY -Wno-MULTIDRIVEN \
    -Irtl rtl/*.sv --top-module phoenix_core

# The Analogizer wrapper on its own, with RndMnkIII's adapter module behind it
# (vendored verbatim in target/pocket/analogizer/, so its findings are his and
# dropped by path) and a stand-in for its one VHDL file.  hq2x.sv (MiSTer's)
# assigns its output wire in an always block, which Quartus takes and
# Verilator calls an error: PROCASSWIRE is waived for this pass.
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
set +e
verilator --lint-only -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-TIMESCALEMOD -Wno-PINCONNECTEMPTY -Wno-PROCASSWIRE -Wno-BLKANDNBLK --top-module pocket_analogizer \
    target/pocket/pocket_analogizer.sv platform/pocket/helpers/synch_3.sv \
    target/pocket/analogizer/*.v $(ls target/pocket/analogizer/*.sv | grep -v /yc_out_legacy.sv) sim/yc_out_legacy_stub.v sim/ps2_keyboard_stub.v \
    > "$tmp/ana.out" 2>&1
set -e
ana=$(grep -E '^%(Warning|Error)' "$tmp/ana.out" | grep -v 'Exiting due to' \
      | grep -v -E '^%Warning[^ ]*: *(target/pocket/analogizer/|platform/pocket/|sim/ps2_keyboard_stub)' || true)
if [ -n "$ana" ]; then
    echo "lint FAILED -- the Analogizer wrapper:"
    echo "$ana"
    exit 1
fi
echo "lint clean (the Analogizer's vendored module and platform/ dropped by path)"
