#include <stdio.h>
int main()
{
	int n,rem=0,sum=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("the sum is %d\n",sum);
	printf("Aayushma Kafle");
	return 0;
}
