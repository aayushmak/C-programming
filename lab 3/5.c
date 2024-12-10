#include <stdio.h>
int main()
{
	int n,c=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
			c=c+1;
	}
	printf("count= %d\n",c);
	printf("Aayushma Kafle");
	return 0;
}
