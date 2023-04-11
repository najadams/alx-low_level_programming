#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rc libball.a *.o
