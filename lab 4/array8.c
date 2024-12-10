#include<stdio.h>
int main()
{
	int a[3][3],i,j,c=0,d=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix form: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				c++;
			}
			
			if(a[i][j]%2!=0)
			{
				d++;
			}
		}
	}
	printf ("No of even num: %d\n",c);
	printf("No of odd num: %d",d);
	printf("\nAayushma Kafle");
}
