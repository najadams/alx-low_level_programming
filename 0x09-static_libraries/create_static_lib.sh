#!/bin/bash

# Get all the .c files in the current directory
c_files=$(find . -type f -name "*.c")

# Create a dummy main function to satisfy the linker
echo "int main() { return 0; }" > dummy_main.c

# Compile each .c file into .o object files
for c_file in $c_files; do
  gcc -c $c_file -o ${c_file%.c}.o
done


# Create the static library
gcc -static -o liball.a *.o
