#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -c *.c
ar rcs liball.a *.o
ranlib liball.a
