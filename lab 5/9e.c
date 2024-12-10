#include <stdio.h>
int sum(int n);
int main()
{
	int n,a;
	printf("Enter a number:\n");
	scanf("%d",&n);
	a=sum(n);
	printf("The sum of the digits is %d",a);
}
int sum(int n)
{
	int rem=0, c=0;
	while(n!=0){
		rem=n%10;
		c=c+rem;
		n=n/10;
	}
	return(c);
}
