#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0){
		printf("It is positive");
	}else if(a<0){
		printf("It is negative");
	}else{
		printf("Zero");
	}
	printf("\n Aayushma Kafle");
	return 0;
}
