#!/bin/bash
gcc -c *.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
