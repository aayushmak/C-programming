#include <stdio.h>
int main()
{
	int n,rev=0,rem=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("the reversed number is %d\n",rev);
	printf("Aayushma Kafle");
	return 0;
}
