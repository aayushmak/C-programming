#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	(n%5==0 && n%8==0)?printf("It is divisible by 5 & 8"):printf("It is not divisible by 5 & 8");
	printf("\nAayushma Kafle");
	return 0;
}
