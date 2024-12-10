#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct person {
    char name[50];
    struct date dob;
    char address[100];
};

int main() {
    struct person p;

    
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter date of birth (yyyy mm dd): ");
    scanf("%d %d %d", &p.dob.year, &p.dob.month, &p.dob.day);
    printf("Enter address: ");
    scanf("%s", p.address);

    
    printf("\nName: %s\n", p.name);
    printf("Date of birth: %d/%d/%d\n", p.dob.year, p.dob.month, p.dob.day);
    printf("Address: %s\n", p.address);

    return 0;
}

