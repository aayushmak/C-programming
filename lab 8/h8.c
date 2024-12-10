#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    char address[100];
    char faculty[50];
    int mm, dd, yy;
};

int main() {
    struct Student students[5];
    FILE *fp;
    int i;

   
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Faculty: ");
        scanf("%s", students[i].faculty);
        printf("Date of Birth (mm dd yy): ");
        scanf("%d %d %d", &students[i].mm, &students[i].dd, &students[i].yy);
    }

   
    fp = fopen("student.txt", "w");


    for (i = 0; i < 5; i++) {
        fprintf(fp, "%d %s %s %s %d %d %d\n", students[i].roll_no, students[i].name, students[i].address, students[i].faculty, students[i].mm, students[i].dd, students[i].yy);
    }

   
    fclose(fp);

    printf("Data saved to file \"student.txt\".\n");

    return 0;
}

