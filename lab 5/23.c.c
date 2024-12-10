#include <stdio.h>

#define ADD(x, y) ((x) + (y)) // parameterized macro

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = ADD(num1, num2);

    printf("Sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}

