#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The swapped value of a is %d\n",a);
	printf("The swapped value of b is %d\n",b);
	printf("Aayushma Kafle");
	return 0;
	
}
