#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    char address[100];
    char faculty[20];
};

int main() {
    struct student s[5];
    FILE *fp;
    int i;

   
    for (i = 0; i < 2; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Address: ");
        scanf("%s", s[i].address);
        printf("Faculty: ");
        scanf("%s", s[i].faculty);
    }

    
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    for (i = 0; i < 2; i++) {
        fprintf(fp, "%d %s %s %s\n", s[i].roll_no, s[i].name, s[i].address, s[i].faculty);
    }

    fclose(fp);

  
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("\nRecords of students from Pokhara:\n");
    printf("Roll No.\tName\tAddress\tFaculty\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 2; i++) {
        if (strstr(s[i].address, "Pokhara") != NULL) {
            printf("%d\t\t%s\t%s\t%s\n", s[i].roll_no, s[i].name, s[i].address, s[i].faculty);
        }
    }
    printf("\nRecords of students not from Pokhara:\n");
    printf("Roll No.\tName\tAddress\tFaculty\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 2; i++) {
        if (strstr(s[i].address, "Pokhara") == NULL) {
            printf("%d\t\t%s\t%s\t%s\n", s[i].roll_no, s[i].name, s[i].address, s[i].faculty);
        }
    }

    fclose(fp);

    return 0;
}

