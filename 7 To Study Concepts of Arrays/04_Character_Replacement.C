/*
   Write a C program to replace a specified character from a string 
   with another character.
*/

#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    printf("Updated string: %s\n", str);

    return 0;
}
