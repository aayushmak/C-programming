#include<stdio.h>
int main()
{
	int mat1[2][3],mat2[2][3],i,j,add[2][3];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("mat1[%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
		
		}
	}
	
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("mat2[%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		
		}
	}
	
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",mat2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			add[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
	printf("\nAayushma Kafle");

	
}
