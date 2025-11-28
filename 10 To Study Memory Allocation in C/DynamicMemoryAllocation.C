/*
   Write a program for dynamic array creation (allocation) using malloc()/calloc()
   and deallocation using free() function.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate memory
    free(arr);
    printf("Memory freed successfully.\n");

    // Example using calloc
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Array initialized with calloc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // all elements will be 0
    }
    printf("\n");

    free(arr);
    printf("Memory freed successfully.\n");

    return 0;
}
