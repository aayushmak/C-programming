#include <stdio.h>

void func() {
    static int staticVar = 0; // static variable
    int nonStaticVar = 0; // non-static variable

    staticVar++; // increment static variable
    nonStaticVar++; // increment non-static variable

    printf("staticVar = %d, nonStaticVar = %d\n", staticVar, nonStaticVar);
}

int main() {
    func(); // call function
    func(); // call function
    func(); // call function
    return 0;
}

