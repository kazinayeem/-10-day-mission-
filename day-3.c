// day 3

// Declaring and defining functions:

// Function declaration
return_type function_name(parameters);

// Function definition
return_type function_name(parameters) {
    // Function body
    // Statements
}



#include <stdio.h>

// Function declaration
void greet();

// Function definition
void greet() {
    printf("Hello, welcome to the world of functions!\n");
}

int main() {
    // Function call
    greet();
    return 0;
}

// Function prototypes:

#include <stdio.h>

// Function prototype
void greet();

int main() {
    // Function call
    greet();
    return 0;
}

// Function definition
void greet() {
    printf("Hello, welcome to the world of functions!\n");
}



// Passing arguments to functions:
#include <stdio.h>

// Function declaration with parameters
void square(int num);

int main() {
    int num = 5;
    // Function call with arguments
    square(num);
    return 0;
}

// Function definition with parameters
void square(int num) {
    printf("Square of %d is %d\n", num, num * num);
}


//  Returning values from functions:

#include <stdio.h>

// Function declaration with return type
int square(int num);

int main() {
    int num = 5;
    // Function call and printing the returned value
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}

// Function definition with return type
int square(int num) {
    return num * num;
}

// Recursion (if time permits):

#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

// Function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}










