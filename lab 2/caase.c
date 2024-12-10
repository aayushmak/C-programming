#include <stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("a.Addition\nb.Subtraction\nc.Multiplication\nd.Division\n");
	printf("Choose your option\n");
	scanf("%c",&ch);
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	switch(ch){
		case 'a':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case 'b':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case 'c':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case 'd':
			printf("%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("choose from a to b\n");
			break;
	}
	printf("\nAayushma Kafle");
	return 0;
}
