#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3],sum[3][3],i,j,k;
	printf("Enter matrix 1 elements :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
   printf("Enter matrix 2 elements:- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=0;
			for(k=0;k<3;k++)
			{
				sum[i][j]=sum[i][j]+mat1[i][k]*mat2[k][j];
			}
		}
	}
	 printf("Multiplication: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",sum[i][j]);
		
		}
		printf("\n");
	}
	printf("\nAayushma Kafle");
	return 0;
	}
