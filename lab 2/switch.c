#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	switch(a%2){
		case 1:
			printf("It is odd");
			break;
		case 0:
			printf("It is even");
			break;
		default:
			printf("Invalid number");
			break;
	}
	printf("\nAayushma Kafle");
	return 0;
}
