#include <stdio.h>

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("Sum of %d and %d is %d.\n", num1, num2, sum);

}

