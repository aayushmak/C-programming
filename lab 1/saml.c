#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers");
	scanf("%d %d %d",&a,&b,&c);
	int small = (a<b)?(a<c?a:c):(b<c?b:c);
	printf("The smallest number is %d",small);
	printf("\n Aayushma Kafle");
	return 0;
}
