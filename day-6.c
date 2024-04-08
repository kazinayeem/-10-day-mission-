#include <stdio.h>
#include <string.h>

int main() {
    // Basics of strings in C
    char str1[] = "Hello,";
    char str2[10] = {'W', 'o', 'r', 'l', 'd', '!', '\0'}; // null-terminated string
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    // String manipulation functions
    char dest[20];
    strcpy(dest, str1); // Copy str1 to dest
    strcat(dest, str2); // Concatenate str2 to dest
    printf("Concatenated string: %s\n", dest);

    printf("Length of str1: %d\n", strlen(str1));
    printf("Length of str2: %d\n", strlen(str2));

    // String input/output
    char input_str[50];
    printf("Enter a string: ");
    scanf("%s", input_str);
    printf("You entered: %s\n", input_str);

    // Handling strings using pointers
    char str[] = "Pointer Example";
    char *ptr = str; // Pointer to the first character of str
    printf("Using pointers: ");
    while (*ptr != '\0') { // Loop until null character is encountered
        printf("%c", *ptr);
        ptr++; // Move to the next character
    }
    printf("\n");

    return 0;
}
