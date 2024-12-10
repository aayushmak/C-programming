#include <stdio.h>
int main()
{
	int a,i=1,prod;
	printf("enter a number: ");
	scanf("%d",&a);
	while(i<=10){
		prod=a*i;
		printf("%d * %d = %d \n",a,i,prod);
		i=i+1;
	}
	return 0;
}
