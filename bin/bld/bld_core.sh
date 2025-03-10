#!/bin/bash

function print_current_bld_opts 
{
    echo "- compiler     : $compiler"
    echo "- compile_mode : $compile_mode"
}

function print_current_bld_env 
{
    echo "- bin   : $bin_dir"
    echo "- build : $build_dir"
    echo "- local : $local_dir"
    echo "- src   : $src_dir"
}

function bld_compile 
{
    local in_file=$1
    local out_file=$2
    local flags=$3

    pushd $build_dir
    $compiler $in_file -o $out_file $flags
    popd
}