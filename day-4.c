//day 4
//Declaring and initializing arrays:


#include <stdio.h>

int main() {
    
    int numbers[5] = {1, 2, 3, 4, 5};

   
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

//Accessing array elements:


#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

   
    printf("Element at index 2: %d\n", numbers[2]); 

    return 0;
}

//Multidimensional arrays:

#include <stdio.h>

int main() {
  
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Array as function arguments:

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    return 0;
}