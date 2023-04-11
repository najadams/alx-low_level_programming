#!/bin/bash

# Loop through all .c files in the current directory
for file in *.c; do
    # Extract the filename without extension
    filename="${file%.c}"

    gcc "$file" -o "$filename.o"
done
gcc -static -o liball.a *.o
