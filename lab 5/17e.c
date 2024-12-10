#include <stdio.h>

int fibonacci(int n);

int main() 
{
	int n,i;
    printf("Fibonacci sequence starting from 2:\n");
    for ( i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i + 1));
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

