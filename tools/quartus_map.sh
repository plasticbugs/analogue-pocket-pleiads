#!/bin/sh
# Analysis and synthesis only -- about two minutes, against twenty for a full
# compile. It catches syntax errors, unresolved modules and bad memory
# inference, which is most of what goes wrong. METHODOLOGY section 2: run it
# before every push.
set -e
cd "$(dirname "$0")/.."
docker run --rm --platform linux/amd64 -v "$PWD":/build -w /build/projects \
    raetro/quartus:pocket quartus_map pleiads_pocket "$@"
