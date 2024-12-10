#include <stdio.h>
#include <string.h>

union Student {
    int roll;
    char name[50];
    char gender;
};

int main() {
    union Student student;

    
    student.roll = 1;
    strcpy(student.name, "John");
    student.gender = 'M';

    printf("Roll: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("Gender: %c\n", student.gender);

    
    printf("Size of Student union: %lu bytes\n", sizeof(student));
    printf("Address of Roll: %p\n", &student.roll);
    printf("Address of Name: %p\n", &student.name);
    printf("Address of Gender: %p\n", &student.gender);

    return 0;
}

