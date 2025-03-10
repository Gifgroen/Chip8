#!/bin/bash
set -e

. bin/bld/bld_setup_session.sh

echo "Env" 
echo "$(print_current_bld_env)\n"

echo "Opts"
echo "$(print_current_bld_opts)\n"

echo "Building..."
mkdir -p $build_dir # Make sure build/ dir exists

flags="-DASSERT_ENABLED=1"
bld_compile $src_dir/main.cpp $build_dir/chip8 $flags -Wl,-rpath,\$ORIGIN/
