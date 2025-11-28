/*
   Write a C program to print Fibonacci series up to the number entered by the user.
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    if (n >= 0) printf("%d ", a);
    if (n >= 1) printf("%d ", b);

    while (1) {
        c = a + b;
        if (c > n)
            break;

        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
