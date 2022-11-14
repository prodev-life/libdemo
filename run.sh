#!/usr/bin/env bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
mkdir $SCRIPT_DIR/base_repo/build;
cd $SCRIPT_DIR/base_repo/build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=yes ..
make all
make install

mkdir $SCRIPT_DIR/our_host/build;
cd $SCRIPT_DIR/our_host/build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=yes ..
make all
make install

mkdir $SCRIPT_DIR/client_host/build;
cd $SCRIPT_DIR/client_host/build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=yes ..
make all
make install

cd $SCRIPT_DIR/enduser_host
LD_LIBRARY_PATH=./deps/lib:$LD_LIBRARY_PATH

./app_01
echo '----------------------------'
./app_02
echo '----------------------------'
./app_03
echo '----------------------------'
./app_04
echo '----------------------------'