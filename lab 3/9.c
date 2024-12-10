#include <stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("enter a number: ");
	scanf("%d",&n);
	printf("Factorial:\n");
	while(i<=n){
		fact*=i;
		i++;
	}
	printf("%d\t\n",fact);
	printf("Aayushma Kafle");
	return 0;
}
