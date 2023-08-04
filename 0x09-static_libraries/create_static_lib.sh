#!/bin/bash
gcc -Wall -Wextra -pedantc -c *.c
ar rc liball.a *.o
