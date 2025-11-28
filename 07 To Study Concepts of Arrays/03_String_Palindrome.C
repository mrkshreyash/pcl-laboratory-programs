/*
   Write a program to check whether a given string is palindrome or not
   using string handling functions.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev, str); // copy string
    strrev(rev);      // reverse string (works in many compilers like TurboC)

    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
