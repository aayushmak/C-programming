#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char address[100];
    char faculty[20];
    char program[20];
    float gpa;
};

int main() {
    struct student s[5];
    FILE *fp;
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Address: ");
        scanf("%s", s[i].address);
        printf("Faculty: ");
        scanf("%s", s[i].faculty);
        printf("Program: ");
        scanf("%s", s[i].program);
        printf("GPA: ");
        scanf("%f", &s[i].gpa);
    }

    // Write student records to file
    fp = fopen("Result.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(fp, "%s %s %s %s %.2f\n", s[i].name, s[i].address, s[i].faculty, s[i].program, s[i].gpa);
    }

    fclose(fp);

    // Display records of students from Engineering with GPA > 3.5
    fp = fopen("Result.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("\nRecords of students from Engineering with GPA > 3.5:\n");
    printf("Name\tAddress\tFaculty\tProgram\tGPA\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(s[i].faculty, "Engineering") == 0 && s[i].gpa > 3.5) {
            printf("%s\t%s\t%s\t%s\t%.2f\n", s[i].name, s[i].address, s[i].faculty, s[i].program, s[i].gpa);
        }
    }

    fclose(fp);

    return 0;
}

