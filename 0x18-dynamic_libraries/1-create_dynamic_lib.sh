#!/bin/bash

# Compile and create the object files
gcc -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm -f *.o
