#!/bin/bash
# Usage: debug_rank.sh <rank to debug> <executable> <arguments>

DEBUG_RANK=$1
shift
if [ $PMI_RANK == $DEBUG_RANK ]; then
   #ROMIO_FSTYPE_FORCE=pm: exec gdb -q --args $*
   exec gdb -q --args $*
else
   #ROMIO_FSTYPE_FORCE=pm: exec $*
   exec $*
fi
