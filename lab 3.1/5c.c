#include <stdio.h>
int main()
{
	int n,i,a=3;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("%d  ",a);
	for(i=1;i<n;i++)
	{
		printf("%d  ",a*a*a);
		a=a+1;
	}
	return 0;
}
