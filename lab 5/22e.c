#include <stdio.h>

#define IS_EVEN(n) ((n) % 2 == 0) // parameterized macro

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (IS_EVEN(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

