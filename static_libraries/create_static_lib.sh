#!/bin/bash
gcc -c *.c
ar rc litball.a *.o
ranlib litball.a
