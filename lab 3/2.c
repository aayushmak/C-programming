#include <stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("the sum is:%d",sum);
	printf("\n Aayushma Kafle");
	return 0;
}
