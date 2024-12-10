#include <stdio.h>
int main()
{
	int n,c=0,i;
	printf("enter a number: ");
	scanf("%d",&n);i=1;
	while(i<=n){
		if(n%i==0){
			c++;
		}
		i++;
	}
	if(c==2){
		printf("prime number");
	}else{
		printf("not a prime number");
	}
	printf("\nAayushma Kafle");
	return 0;
}
