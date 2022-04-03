#!/bin/bash

gcc -c -Wall -Werror -Wextra -pedanitc -std=gnu89 *c
ar rc liball.a ./*o
ranlib liball.a  #used to regenerate the index
