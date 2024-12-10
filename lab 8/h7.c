#include <stdio.h>
int main()
{
	FILE *fp;
	int roll;
	char name[30];
	float per;
	
	printf("\nData from the file\n");
	fp = fopen("student.txt","r");
	while(fscanf(fp,"%d %s %f",&roll,name,&per)!= EOF)
	{
		printf("\n%d\t%s\t%f",roll,name,per);
	}
	fclose(fp);
	return 0;
}
