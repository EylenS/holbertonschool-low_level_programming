#!/bin/bash
for i in *.c; do gcc -c $i -o *.o; done
ar rc liball.a ./*.o
