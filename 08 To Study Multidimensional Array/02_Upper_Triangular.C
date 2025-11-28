/*
   Updated Statement:
   Write a C program to calculate the sum of the upper triangular elements of a matrix.
   (Matrix size taken from user)
*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) // j >= i => upper triangular
            sum += matrix[i][j];

    printf("Sum of upper triangular elements = %d\n", sum);

    return 0;
}
