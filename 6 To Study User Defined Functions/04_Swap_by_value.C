/*
   Write a C program for swapping of two numbers using call by value.
*/

#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping inside function (call by value): a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After function call (original values remain unchanged): x = %d, y = %d\n", x, y);

    return 0;
}
