#include <stdio.h>
#include <stdlib.h>

int main() {
    // Opening and closing files
    FILE *file;
    file = fopen("example.txt", "w"); // Open file for writing
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file); // Close file

    // Reading from files
    file = fopen("example.txt", "r"); // Open file for reading
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    printf("Read from file: %s", buffer);
    fclose(file); // Close file

    // File positioning functions
    file = fopen("example.txt", "r"); // Open file for reading
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fseek(file, 7, SEEK_SET); // Move file pointer to 7th byte from the beginning
    fgets(buffer, sizeof(buffer), file);
    printf("Read from file after fseek: %s", buffer);
    fclose(file); // Close file

    // Error handling while file operations
    file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fclose(file);

    return 0;
}
