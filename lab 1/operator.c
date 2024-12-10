#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	char ch;
	printf("Enter any two numbers:");
	scanf("%f %f",&x,&y);
	printf("Enter the operator to operate value:");
	ch= getche();
	if(ch=='+'){
		printf("\nThe sum is %f",x+y);
	}else if(ch=='-'){
		printf("\nThe difference if %f",x-y);
	}else if(ch=='*'){
		printf("\nThe product is %f",x*y);
	}else if(ch=='/'){
		printf("\nThe division is %f",x/y);
	}
	printf("\nAayushma Kafle");
	return 0;
}
