#include <stdio.h>
struct student
{
	char name[50];
	char gender[50];
	int roll;
};
int main()
{
	struct student s;
	printf("\nEnter the name:");
	scanf("%s",s.name);
	printf("\nEnter the gender:");
	scanf("%s",s.gender);
	printf("\nEnter the roll no:");
	scanf("%d",&s.roll);
	printf("Name:%s\nGender:%s\nRoll no:%d",s.name,s.gender,s.roll);
}
