#include <stdio.h>
int main()
{
	int n,a=0,b=1,c,i=3;
	printf("enter a number: ");
	scanf("%d",&n);
	printf("fibonacci series: %d  %d  ",a,b);
	c=a+b;
	while(i<=n){
		printf("%d  ",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
	printf("\nAayushma Kafle");
	return 0;
}
