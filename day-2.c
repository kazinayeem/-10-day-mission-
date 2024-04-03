// day 2

// If-else statements:

#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else {
        printf("%d is a non-positive number.\n", num);
    }

    return 0;
}


// Switch-case statements:

#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Average!\n");
            break;
        case 'D':
            printf("Below Average!\n");
            break;
        default:
            printf("Fail!\n");
    }

    return 0;
}


// Loops (while, for):

#include <stdio.h>

int main() {
    int i = 1;

    // Using while loop
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Using for loop
    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}



// Break and continue statements:

#include <stdio.h>

int main() {
    // Using break statement
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Using continue statement
    for (int j = 1; j <= 10; j++) {
        if (j % 2 == 0) {
            continue;
        }
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}
