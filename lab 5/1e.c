#include <stdio.h>
int add();

int add() {
	int num1 , num2,sum;
	printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
	 sum = num1 + num2;
    printf("Sum of %d and %d is %d.\n", num1, num2, sum);
 
}

int main() {
    int  sum;
    sum = add();
    return 0;
}

