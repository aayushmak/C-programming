#include<stdio.h>
int main()
{
	int m,n,o;
	printf("Enter no. of table,row and column:- ");
	scanf("%d %d %d",&m,&n,&o);
	int a[m][n][o],i,j,k,s=0,y=0,z=0;
	printf("Enter the value of: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
			{
				printf("[%d %d %d] : ",i+1,j+1,k+1);
				scanf("%d",&a[i][j][k]);
				if(a[i][j][k]>0)
				{
					s++;;
				}
				else if(a[i][j][k]<0)
				{
					y++;
				}
				else
				{
					z++;;
				}
			}
		}
	}
	printf("The no. of positive, negative and zero are %d, %d and %d respectively",s,y,z);
	printf("\nAayushma Kafle");
	return 0;
}
