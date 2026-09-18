#!/bin/sh
# Run MAME on a Phoenix-family game, headless and deterministic.
# -seconds_to_run plus a machine-stop notifier is more reliable than ending the
# run from Lua with machine:exit().
#
#   tools/mame.sh [game] -autoboot_script tools/foo.lua ...
root=$(cd "$(dirname "$0")/.." && pwd)
game=pleiads
case "$1" in
    pleiads|phoenix) game=$1; shift ;;
esac
case "$game" in
    phoenix) rp="$HOME/Downloads" ;;
    *)       rp="$root" ;;
esac
exec mame "$game" -rompath "$rp" \
    -video none -sound none -nothrottle -skip_gameinfo \
    -cfg_directory "$root/build/mamecfg" -nvram_directory "$root/build/mamecfg" \
    "$@"
