#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The series is:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d  ",i*i*i);
	}
	return 0;
}
