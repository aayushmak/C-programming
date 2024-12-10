#include <stdio.h>
int main()
{
	FILE *fp;
	int roll;
	char name[30];
	float per;
	int i=1;
	fp=fopen("student.txt","w");
	while(i<=5)
	{
	printf("\nEnter roll no:");
	scanf("%d",&roll);
	printf("\nEnter name:");
	scanf("%s",name);
	printf("\nEnter percentage:");
	scanf("%f",&per);
	fprintf(fp,"\n%d\t\t%s\t\t%f",roll,name,per);
	i++;	
	}
	fclose(fp);
}
