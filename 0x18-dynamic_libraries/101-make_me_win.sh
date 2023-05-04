#!/bin/bash
gcc -shared -fPIC -o libwinning.so winning_numbers.c
export LD_PRELOAD=/path/to/libwinning.so
