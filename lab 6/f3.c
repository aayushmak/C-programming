#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,c;
	printf("Aayushma Kafle\n");
	p1=&a;
	p2=&b;
	a=10;
	b=5;
	printf("pointer arithmetic:");
	printf("Sum:%d+%d=%d\n",*p1,*p2,*p1+*p2);
	printf("Difference:%d-%d=%d\n",*p1,*p2,*p1-*p2);
	printf("Product:%d*%d=%d\n",*p1,*p2,*p1**p2);
	c=*p1/(*p2);
	printf("Division:%d/%d=%d\n",*p1,*p2,c);
	
}
