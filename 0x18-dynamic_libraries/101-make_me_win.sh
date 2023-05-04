#!/bin/bash
gcc -shared -fPIC -o libwinning.so winning_numbers.c
export LD_PRELOAD=./libwinning.so ./101-md5_gm
