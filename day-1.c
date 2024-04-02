
//  day 1

//  part 1 


#include <stdio.h>

int main() {
    printf("Welcome to the world of C programming!\n");
    return 0;
}


// part 2
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}


// part 3

#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("My age is %d, my height is %.2f feet, and my grade is %c.\n", age, height, grade);
    return 0;
}



// part 4

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    return 0;
}
