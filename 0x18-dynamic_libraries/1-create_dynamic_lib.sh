#!/bin/bash
gcc -c *.c
gcc -fPIC -c liball.so *.o
