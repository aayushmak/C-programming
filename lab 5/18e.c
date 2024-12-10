#include <stdio.h>

int hcf(int a, int b);

int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = hcf(num1, num2);
    printf("The HCF of %d and %d is %d\n", num1, num2, result);
    return 0;
}

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return hcf(b, a % b);
    }
}

