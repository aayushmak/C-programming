#include <stdio.h>

double power(double x, int n);

int main() {
    double x;
    int n;
    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("Enter a non-negative integer power: ");
    scanf("%d", &n);
    printf("%.2lf^%d = %.2lf", x, n, power(x, n));
    return 0;
}

double power(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return x * power(x, n - 1);
    } else {
        return 1 / x * power(x, n + 1);
    }
}

