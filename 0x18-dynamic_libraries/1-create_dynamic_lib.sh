#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc -shared *.o -o liball.so
nm -D liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
