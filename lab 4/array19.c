#include<stdio.h>
int main()
{
	int x,y,z,a[50][50][50],i,j,k;
	printf("Enter the no of tables,rows & column: \n");
	scanf("%d %d %d",&x,&y,&z);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("[%d %d %d] : ",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Entered values are:-\n");

	for(i=0;i<x;i++)
	{
		printf("Table %d :-\n",i+1);
		for(j=0;j<y;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("%2d",a[i][j][k]);
		
			}
			printf("\n");
		}
		
	}
	printf("\nAayushma Kafle");
	return 0;
}
