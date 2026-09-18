#!/bin/sh
# Capture a spread of frozen states plus the matching MAME snapshots.
# One MAME run per state: freezing is a one-way door.
set -e
cd "$(dirname "$0")/.."
GAME=${GAME:-pleiads}
OUT=${OUT:-artifacts/$GAME}
FRAMES=${FRAMES:-"120 300 600 900 1400 2000 2600 3200"}
PLAY=${PLAY:-1}
mkdir -p "$OUT" build/mamecfg
for f in $FRAMES; do
    tag=$(printf "%04d" "$f")
    # seconds_to_run has to outlast the target frame: 61.035 fps, +2 frames of
    # frozen render, plus slack.
    secs=$(awk "BEGIN{printf \"%d\", ($f+8)/61.035 + 2}")
    PL_OUT="$OUT" PL_FRAME="$f" PL_TAG="$tag" PL_GAME="$GAME" PL_PLAY="$PLAY" \
    tools/mame.sh "$GAME" -autoboot_script tools/dumpstate.lua \
        -snapshot_directory "$OUT/snap_$tag" -seconds_to_run "$secs" \
        >"$OUT/mame_$tag.log" 2>&1
    snap=$(ls "$OUT/snap_$tag/$GAME"/*.png 2>/dev/null | head -1)
    [ -n "$snap" ] || { echo "no snapshot for frame $f"; tail -3 "$OUT/mame_$tag.log"; exit 1; }
    mv "$snap" "$OUT/mame_$tag.png"
    rm -rf "$OUT/snap_$tag" "$OUT/mame_$tag.log"
    echo "captured $GAME $tag"
done
