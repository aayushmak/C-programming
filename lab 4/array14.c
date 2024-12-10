
#include<stdio.h>
int main()
{
	int m,a[10][10],i,j;
	printf("Enter order of square matrix: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Matrix form:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Upper trianlge matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i>j)
			{
				printf("0\t");	
			}
			else{
			printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\nAayushma Kafle");
	
}
