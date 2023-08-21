#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
for c_file in $c_files; do
    gcc -c -fPIC $c_file -o ${c_file%.c}.o
done

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
