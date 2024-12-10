#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix form: \n");
	
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("Sum: %d",sum);
	printf("\nAayushma Kafle");
	}
