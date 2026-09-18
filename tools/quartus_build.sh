#!/bin/sh
# Full compile: map, fit, assemble and timing analysis. About twenty minutes.
# Produces projects/output_files/pleiads_pocket.rbf_r, which is what the Pocket
# actually loads.
set -e
cd "$(dirname "$0")/.."
docker run --rm --platform linux/amd64 -v "$PWD":/build -w /build/projects \
    raetro/quartus:pocket quartus_sh --flow compile pleiads_pocket
