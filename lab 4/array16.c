#include<stdio.h>
int main()
{
	int m,a[10][10],i,j,s=0;
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
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j>i)
			{
				s=s+a[i][j];
			}
		}
	}
	printf("Sum of upper triangle is: %d",s);
	printf("\nAayushma Kafle");
	
	
	
}
