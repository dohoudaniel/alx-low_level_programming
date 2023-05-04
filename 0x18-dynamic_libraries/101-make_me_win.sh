#!/bin/bash
# wget -P /tmp/ https://github.com/dohoudaniel/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwinning.so
gcc -shared -fPIC -o libwinning.so winning_numbers.c
export LD_PRELOAD=./libwinning.so
