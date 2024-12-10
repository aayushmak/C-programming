#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	int small= (a<b)?a:b;
	printf("The smallest among %d and %d is %d\n",a,b,small);
	printf("Aayushma Kafle");
	return 0;
}
