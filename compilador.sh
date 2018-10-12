#!/bin/sh
gcc -c lista.c -o lista.o
gcc -c main.c -o main.o
gcc -c no.c -o no.o
gcc lista.o main.o no.o -o executavel
exit
