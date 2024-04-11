// day 9
#include <stdio.h>
#include <stdlib.h>

// Structure definition
typedef struct {
    int id;
    char name[50];
} Student;

int main() {
  
    int *numbers = (int *)malloc(5 * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

  
    Student *students = (Student *)malloc(3 * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Using realloc to resize the array of integers
    numbers = (int *)realloc(numbers, 10 * sizeof(int));
    if (numbers == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Free allocated memory
    free(numbers);
    free(students);

    return 0;
}
