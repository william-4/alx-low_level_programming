#!/bin/bash
gcc -fpic -c *.c
gcc -shared -liball.so *.o
