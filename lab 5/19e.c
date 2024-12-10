#include <stdio.h>

int globalVariable = 10; // global variable

int main() {
    int localVariable = 5; // local variable
    printf("globalVariable = %d, localVariable = %d\n", globalVariable, localVariable);
    {
        int nestedLocalVariable = 20; // nested local variable
        printf("globalVariable = %d, localVariable = %d, nestedLocalVariable = %d\n", globalVariable, localVariable, nestedLocalVariable);
    }
    printf("globalVariable = %d, localVariable = %d\n", globalVariable, localVariable);
    return 0;
}

