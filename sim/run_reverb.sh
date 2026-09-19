#!/bin/sh
# Hold the cabinet reverb RTL to its bit-exact integer model, in every mode,
# on real game audio -- and require that Off returns its input untouched.
set -e
cd "$(dirname "$0")/.."
SRC=${SRC:-build/rtl_phoenix.wav}
OBJ=build/obj_reverb
mkdir -p "$OBJ"
[ -f "$SRC" ] || { echo "no $SRC -- run GAME=phoenix sim/run_audio.sh first"; exit 1; }

if [ ! -x "$OBJ/Vphoenix_reverb" ] || [ rtl/phoenix_reverb.sv -nt "$OBJ/Vphoenix_reverb" ] || [ sim/tb_reverb.cpp -nt "$OBJ/Vphoenix_reverb" ]; then
    echo "building..."
    verilator --cc --exe --build -j 0 -O2 -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
        -Irtl --Mdir "$OBJ" -CFLAGS "-O2" --top-module phoenix_reverb \
        rtl/phoenix_reverb.sv sim/tb_reverb.cpp >/dev/null
fi

fail=0
for mode in 0 1 2 3; do
    "$OBJ/Vphoenix_reverb" "$SRC" "build/reverb_rtl_$mode.wav" $mode 2>/dev/null
    python3 tools/reverb_model.py "$SRC" "build/reverb_ref_$mode.wav" $mode >/dev/null
    python3 - "$SRC" "build/reverb_rtl_$mode.wav" "build/reverb_ref_$mode.wav" $mode <<'PY' || fail=1
import sys, wave, struct
def rd(p):
    w = wave.open(p, 'rb'); n = w.getnframes()
    return struct.unpack(f'<{n}h', w.readframes(n))
src, rtl, ref, mode = rd(sys.argv[1]), rd(sys.argv[2]), rd(sys.argv[3]), int(sys.argv[4])
name = ('off', 'light', 'medium', 'heavy')[mode]
ok = len(rtl) == len(ref) == len(src)
diff = sum(1 for a, b in zip(rtl, ref) if a != b)
ok = ok and diff == 0
extra = ''
if mode == 0:
    same = sum(1 for a, b in zip(rtl, src) if a != b)
    ok = ok and same == 0
    extra = f', {same} differ from the input'
else:
    clip = sum(1 for a in rtl if a in (32767, -32768))
    extra = f', peak {max(abs(a) for a in rtl)} (input {max(abs(a) for a in src)}), {clip} at the rails'
print(f"  {'ok  ' if ok else 'FAIL'} {name:<7} {len(rtl)} samples, {diff} differ from the model{extra}")
sys.exit(0 if ok else 1)
PY
done
[ $fail = 0 ] && echo "REVERB RTL IS BIT-EXACT TO THE MODEL IN EVERY MODE" || { echo "REVERB MISMATCH"; exit 1; }
