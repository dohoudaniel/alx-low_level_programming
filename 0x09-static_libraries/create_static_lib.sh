#!/bin/bash
gcc -c *.c
ar -rc liball.a *.oi
ranlib liball.a
