#include <stdio.h>
#include <math.h>
int quad1(int,int,int);
int quad2(int,int,int);
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c:");
	scanf("%d  %d  %d",&a,&b,&c);
	printf("Root 1:%d",quad1(a,b,c));
	printf("Root 2:%d",quad2(a,b,c));
}
int quad1(int a ,int b,int c)
{
	int n1;
	n1=(-b + sqrt(b * b - 4 *a*c))/(2*a);
	return (n1);
}
int quad2(int a ,int b,int c)
{
	int n2;
	n2=(-b - sqrt(b * b - 4 *a*c))/(2*a);
	return (n2);
}

