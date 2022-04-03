#!/bin/bash

gcc -c -Wall -Werror -Wextra -pedanitc -std=gnu89
ar rc liball.a ./*c
ranlib liball.a  #used to regenerate the index
