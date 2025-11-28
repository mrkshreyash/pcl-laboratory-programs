/*
   Write a C program to show the sum of 10 elements of an array and their average.
*/

#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0;
    float avg;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 10.0;

    printf("Sum of elements = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
