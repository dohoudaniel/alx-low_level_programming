#!/bin/bash
echo -e "\e[1;32m Compiling .c files into object files ... \e[0m"
gcc -fPIC -c *.c
echo -e "\e[1;32m\nDone.\n\nCreating shared library liball.so ...\e[0m"
gcc -shared *.o -o liball.so
echo -e "\e[1;32m\nDone.\n\nInspecting and displaying list of symbols in liball.so ...\e[0m"
nm -D liball.so
