#include <stdio.h>
int prime(int);
int main()
{
	int n,a;
	printf("Enter a number:\n");
	scanf("%d",&n);
	a=prime(n);
	if(a==2){
		printf("It is a prime number");
	}else{
		printf("It is not a prime number");
	}
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c=c+1;
		}
	}
	return(c);
}
