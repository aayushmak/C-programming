
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "WORLD";
    char str3[] = "Hello, World!";
    char str4[20];
    char str5[] = "Computer";

    // strlen(): returns the length of a string
    int len = strlen(str1);
    printf("Length of \"%s\": %d\n", str1, len);

    // strlwr(): converts a string to lowercase
    printf("Lowercase version of \"%s\": %s\n", str2, strlwr(str2));

    // strupr(): converts a string to uppercase
    printf("Uppercase version of \"%s\": %s\n", str1, strupr(str1));

    // strcat(): concatenates two strings
    strcpy(str4, str1);
    strcat(str4, str2);
    printf("\"%s\" concatenated with \"%s\": %s\n", str1, str2, str4);

    // strcpy(): copies one string to another
    char str6[20];
    strcpy(str6, str1);
    printf("\"%s\" copied to \"%s\": %s\n", str1, str6, str6);

    // strncpy(): copies a specified number of characters from one string to another
    char str7[20];
    strncpy(str7, str1, 3);
    printf("First 3 characters of \"%s\" copied to \"%s\": %s\n", str1, str7, str7);

    // strcmp(): compares two strings lexicographically
    int cmp = strcmp(str1, str2);
    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str2, cmp);

    // strncmp(): compares a specified number of characters from two strings lexicographically
    int cmp2 = strncmp(str1, str2, 2);
    printf("Comparison of first 2 characters of \"%s\" and \"%s\": %d\n", str1, str2, cmp2);

    // stricmp(): compares two strings ignoring the case
    int cmp3 = stricmp(str1, "hElLo");
    printf("Case-insensitive comparison of \"%s\" and \"hElLo\": %d\n", str1, cmp3);

    // strnicmp(): compares a specified number of characters from two strings ignoring the case
    int cmp4 = strnicmp(str1, "hElLo", 3);
    printf("Case-insensitive comparison of first 3 characters of \"%s\" and \"hElLo\": %d\n", str1, cmp4);

    // strrev(): reverses a string
    strrev(str5);
    printf("Reversed string of \"%s\": %s\n", "Computer", str5);
    printf("\nDilasha Nakarmi");

    return 0;
}
