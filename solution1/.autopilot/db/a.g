#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/brett/Thesis/Vivado_WS/sha256/solution1/.autopilot/db/a.g.bc ${1+"$@"}
