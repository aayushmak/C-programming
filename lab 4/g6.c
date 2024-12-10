#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 3

struct employee {
    int id;
    char name[50];
    int age;
    float salary;
    char address[100];
};

void read_records(struct employee employees[], int n);
void display_records(struct employee employees[], int n);
void display_salary_age(struct employee employees[], int n);
void display_pokhara(struct employee employees[], int n);

int main() {
    struct employee employees[MAX_EMPLOYEES];
    int n = 0;

    while (1) {
        printf("\nMENU:\n");
        printf("1. Read records\n");
        printf("2. Display records\n");
        printf("3. Display records of employees with salary > 10000 and age > 25\n");
        printf("4. Display records of employees from Pokhara\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                read_records(employees, MAX_EMPLOYEES);
                n = MAX_EMPLOYEES;
                break;
            case 2:
                display_records(employees, n);
                break;
            case 3:
                display_salary_age(employees, n);
                break;
            case 4:
                display_pokhara(employees, n);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

void read_records(struct employee employees[], int n) {
	int i;
    printf("\nEnter the records of %d employees:\n", n);
    for ( i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Address: ");
        scanf("%s", employees[i].address);
    }
}

void display_records(struct employee employees[], int n) {
	int i;
    printf("\nEmployee records:\n");
    printf("ID\tName\tAge\tSalary\t\tAddress\n");
    for ( i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary, employees[i].address);
    }
}

void display_salary_age(struct employee employees[], int n) {
	int i;
    printf("\nEmployees with salary > 10000 and age > 25:\n");
    printf("ID\tName\tAge\tSalary\t\tAddress\n");
    for ( i = 0; i < n; i++) {
        if (employees[i].salary > 10000 && employees[i].age > 25) {
            printf("%d\t%s\t%d\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary, employees[i].address);
        }
    }
}

void display_pokhara(struct employee employees[], int n) {
	int i;
    printf("\nEmployees from Pokhara:\n");
    printf("ID\tName\tAge\tSalary\t\tAddress\n");
    for (i = 0; i < n; i++) {
    	if(employees[i].address == "pokhara"){
    		printf("%d\t%s\t%d\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary, employees[i].address);
		}
	}
}

