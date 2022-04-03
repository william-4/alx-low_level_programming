#!/bin/bash
gcc -Wall -Werror -Wextra -pedanitc -c *.c
ar -rc liball.a *.o
ranlib liball.a
