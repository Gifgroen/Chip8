#!/bin/bash

bin_dir=$(dirname $(realpath "$0"))

project_dir=$(dirname $bin_dir)
build_dir=$project_dir/build
local_dir=$project_dir/local
src_dir=$project_dir/src

. $local_dir/bld.env.sh
. $bin_dir/bld/bld_core.sh
