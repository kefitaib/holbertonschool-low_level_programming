#!/bin/bash
gcc -fPIC -c *.c
gcc -shares -o liball.so *.o
