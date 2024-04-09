#include <stdio.h>

// Declaring a structure
struct Person {
    char name[50];
    int age;
    float height;
};

// Declaring a nested structure
struct Address {
    char street[50];
    char city[50];
    int zip_code;
};

struct Employee {
    struct Person personal_info;
    struct Address address_info;
    float salary;
};

int main() {
    // Accessing structure members
    struct Person person1;
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter height: ");
    scanf("%f", &person1.height);
    printf("Name: %s, Age: %d, Height: %.2f\n", person1.name, person1.age, person1.height);

    // Array of structures
    struct Person people[3];
    printf("Enter details for 3 people:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Person %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", people[i].name);
        printf("Enter age: ");
        scanf("%d", &people[i].age);
        printf("Enter height: ");
        scanf("%f", &people[i].height);
    }
    printf("Details of people:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Person %d: Name: %s, Age: %d, Height: %.2f\n", i+1, people[i].name, people[i].age, people[i].height);
    }

    // Nested structures
    struct Employee employee1;
    printf("Enter employee details:\n");
    printf("Enter name: ");
    scanf("%s", employee1.personal_info.name);
    printf("Enter age: ");
    scanf("%d", &employee1.personal_info.age);
    printf("Enter height: ");
    scanf("%f", &employee1.personal_info.height);
    printf("Enter street: ");
    scanf("%s", employee1.address_info.street);
    printf("Enter city: ");
    scanf("%s", employee1.address_info.city);
    printf("Enter zip code: ");
    scanf("%d", &employee1.address_info.zip_code);
    printf("Enter salary: ");
    scanf("%f", &employee1.salary);
    printf("Employee details:\n");
    printf("Name: %s, Age: %d, Height: %.2f\n", employee1.personal_info.name, employee1.personal_info.age, employee1.personal_info.height);
    printf("Address: %s, %s, %d\n", employee1.address_info.street, employee1.address_info.city, employee1.address_info.zip_code);
    printf("Salary: %.2f\n", employee1.salary);

    return 0;
}
