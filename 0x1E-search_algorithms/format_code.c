#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_COMMAND_LENGTH 512

void formatCode(const char *directory);

int main(void) {
    const char *targetDirectory = "alx-low_level_programming/0x1E-search_algorithms";  // Relative path
    formatCode(targetDirectory);
    return 0;
}

void formatCode(const char *directory) {
    char command[MAX_COMMAND_LENGTH];

    // Find all C files in the specified directory and its subdirectories
    snprintf(command, sizeof(command), "find %s -type f -name \"*.c\" -exec betty-style.pl {} \\;", directory);
    if (system(command) != 0) {
        fprintf(stderr, "Error executing betty-style.pl\n");
        exit(EXIT_FAILURE);
    }

    // Find all C files in the specified directory and its subdirectories
    snprintf(command, sizeof(command), "find %s -type f -name \"*.c\" -exec betty-doc.pl {} \\;", directory);
    if (system(command) != 0) {
        fprintf(stderr, "Error executing betty-doc.pl\n");
        exit(EXIT_FAILURE);
    }

    // Find and replace trailing white spaces
    snprintf(command, sizeof(command), "find %s -type f -name \"*.c\" -exec sed -i 's/[[:space:]]*$//' {} \\;", directory);
    if (system(command) != 0) {
        fprintf(stderr, "Error executing sed for trailing white spaces\n");
        exit(EXIT_FAILURE);
    }

    // Convert leading spaces to tabs
    snprintf(command, sizeof(command), "find %s -type f -name \"*.c\" -exec sed -i 's/^ \\{4\\}/\\t/' {} \\;", directory);
    if (system(command) != 0) {
        fprintf(stderr, "Error executing sed for converting leading spaces to tabs\n");
        exit(EXIT_FAILURE);
    }

    printf("Code formatting complete.\n");
}
