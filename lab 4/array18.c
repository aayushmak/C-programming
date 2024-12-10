#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter [%d %d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
				b[j][i]=a[i][j];
			
		}
	}
		
	printf("\nThe transpose is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	printf("\nAayushma Kafle");
	
	return 0;
}
