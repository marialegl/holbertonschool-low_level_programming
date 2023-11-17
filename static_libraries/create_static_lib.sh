#!/bin/bash
gcc -wall -pendatic -Werror -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
