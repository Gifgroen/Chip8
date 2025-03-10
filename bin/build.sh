#!/bin/bash
set -e

. bin/bld/bld_setup_session.sh

echo "Env" 
echo "$(print_current_bld_env)\n"

echo "Opts"
echo "$(print_current_bld_opts)\n"

echo "Building..."
mkdir -p $build_dir # Make sure build/ dir exists

in_file="bin/options/compiler_flags.txt"
flags_raw=()
IFS=$'\r\n' GLOBIGNORE='*' command eval 'flags_raw=($(cat $in_file))'

flags=()
for ((i=0;i<${#flags_raw[@]};i+=1)); do
  flags+=${flags_raw[i]}
  flags+=" "
done

bld_compile $src_dir/main.cpp $build_dir/chip8 "$flags"
