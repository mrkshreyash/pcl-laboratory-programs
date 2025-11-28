/*
   Write a C program that converts a lowercase character to uppercase using a user-defined function.
*/

#include <stdio.h>

char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    else
        return ch; 
}

int main() {
    char ch;

    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);

    printf("Uppercase: %c\n", toUpper(ch));

    return 0;
}
