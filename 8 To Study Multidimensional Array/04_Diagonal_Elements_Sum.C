/*
   Updated Statement:
   Write a C program to calculate the sum of the primary diagonal elements of a 2x2 matrix.
*/

#include <stdio.h>

int main()
{
    int matrix[2][2], sum = 0;

    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &matrix[i][j]);

    // Sum of primary diagonal
    for (int i = 0; i < 2; i++)
        sum += matrix[i][i];

    printf("Sum of primary diagonal elements = %d\n", sum);

    return 0;
}
