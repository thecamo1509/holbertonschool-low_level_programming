#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -o liball *.o
