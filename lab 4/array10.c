#include<stdio.h>
int main()
{
	int a[4][4],i,j,sum;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix form: \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("Sum of 2nd row: %d",sum);
	printf("\nAayushma Kafle");

}
