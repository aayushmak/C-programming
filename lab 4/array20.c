#include<stdio.h>
int main()
{
	int c,d,e;
	printf("Enter no. of table,row & column:\n");
	scanf("%d %d %d",&c,&d,&e);
	int a[c][d][e],i,j,k,s=0;
	printf("Enter the value of: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			for(k=0;k<e;k++)
			{
				printf("[%d %d %d] : ",i,j,k);
				scanf("%d",&a[i][j][k]);
				s=s+a[i][j][k];
			}
		}
	}
	printf("The sum of 3d-array is: %d",s);
	printf("\nAayushma Kafle");
	return 0;
}
