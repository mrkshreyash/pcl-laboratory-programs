/*
   Develop a function to accept array arguments using pointer, modify, and display
   contents of the array using pointer.
*/

#include <stdio.h>

void modifyArray(int *arr, int size)
{
    printf("Modifying array by adding 1 to each element.\n");
    for (int i = 0; i < size; i++)
    {
        *(arr + i) += 1; // modify element using pointer
    }
}

void displayArray(int *arr, int size)
{
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    modifyArray(arr, n);
    displayArray(arr, n);

    return 0;
}
