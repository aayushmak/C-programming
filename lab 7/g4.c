#include <stdio.h>
struct student
{
	char name[50];
	char gender[50];
	int roll;
}s[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
	printf("\nEnter the name:");
	scanf("%s",s[i].name);
	printf("\nEnter the gender:");
	scanf("%s",s[i].gender);
	printf("\nEnter the roll no:");
	scanf("%d",&s[i].roll);
	}
	for(i=0;i<3;i++){
	printf("Name:%s\nGender:%s\nRoll no:%d",s[i].name,s[i].gender,s[i].roll);
	printf("\n\n");
	}
}
