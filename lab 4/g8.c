#include <stdio.h>
#include <string.h>

struct Date {
    int mm;
    int dd;
    int yr;
};

struct Employee {
    int emp_id;
    char emp_name[50];
    char address[100];
    char department[20];
    struct Date date_of_birth;
};

int main() {
    struct Employee emp[5];
    int i;








    for (i = 0; i < 5; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Enter employee name: ");
        scanf("%s", emp[i].emp_name);

        printf("Enter employee address: ");
        scanf("%s", emp[i].address);

        printf("Enter employee department: ");
        scanf("%s", emp[i].department);

        printf("Enter date of birth (MM DD YYYY): ");
        scanf("%d %d %d", &emp[i].date_of_birth.mm, &emp[i].date_of_birth.dd, &emp[i].date_of_birth.yr);
    }

    
    printf("\nEmployee records in Sales department:\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(emp[i].department, "Sales") == 0) {
            printf("Employee ID: %d\n", emp[i].emp_id);
            printf("Employee Name: %s\n", emp[i].emp_name);
            printf("Employee Address: %s\n", emp[i].address);
            printf("Employee Date of Birth: %d/%d/%d\n", emp[i].date_of_birth.mm, emp[i].date_of_birth.dd, emp[i].date_of_birth.yr);
            printf("\n");
        }
    }

    return 0;
}

