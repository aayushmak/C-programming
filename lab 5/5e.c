#include <stdio.h>

char getcharacter(char c) {
    printf("Enter a character: ");
    scanf(" %c", &c);
    return c;
}

int main() {
    char ch;

    ch = getcharacter(ch);

    printf("The character entered is: %c\n", ch);

    return 0;
}

