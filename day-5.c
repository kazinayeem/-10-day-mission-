#include <stdio.h>


int main() {
    int num = 10;
    int *ptr;  // Declaration of a pointer variable
    ptr = &num;  // Assigning the address of 'num' to the pointer variable
    
    printf("Value of num: %d\n", num);  // Output: Value of num: 10
    printf("Address of num: %p\n", &num);  // Output: Address of num: <memory address>
    printf("Value of ptr: %p\n", ptr);  // Output: Value of ptr: <memory address>
    printf("Value at the address pointed by ptr: %d\n", *ptr);  // Output: Value at the address pointed by ptr: 10

    return 0;
}




// int arr[] = {10, 20, 30, 40, 50};
// int *ptr = arr;  // Pointer to the first element of the array

// ptr++;  // Moves the pointer to the next element

// printf("Value at the new address: %d\n", *ptr);  // Output: Value at the new address: 20


// Function to swap two integers using pointers
// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a = 10, b = 20;
//     printf("Before swapping: a = %d, b = %d\n", a, b);  // Output: Before swapping: a = 10, b = 20
//     swap(&a, &b);  // Pass addresses of 'a' and 'b'
//     printf("After swapping: a = %d, b = %d\n", a, b);  // Output: After swapping: a = 20, b = 10
//     return 0;
// }

