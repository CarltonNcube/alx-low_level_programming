#!/bin/bash

# Find all C files in the specified directory and its subdirectories
find /alx-low_level_programming/0x1E-search_algorithms -type f -name "*.c" | while read -r file; do

    # Apply Betty style to the file
    betty-style.pl "$file"
    
    # Apply Betty documentation style to the file
    betty-doc.pl "$file"
    
    # Remove trailing white spaces
    sed -i 's/[[:space:]]*$//' "$file"
    
    # Convert leading spaces to tabs
    sed -i 's/^ \{4\}/\t/' "$file"
    
    echo "Formatted: $file"
done
