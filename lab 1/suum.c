#include <stdio.h>
int main()
{
	int sum,n,rem;
	printf("Enter a four digit number:");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("The sum is %d\n",sum);
	printf("Aayushma Kafle");
	return 0;
}
