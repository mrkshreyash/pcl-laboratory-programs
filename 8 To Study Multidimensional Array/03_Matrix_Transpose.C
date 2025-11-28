/*
   Updated Statement:
   Write a C program to generate the transpose of a matrix.
*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n], transpose[n][m];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Generating transpose
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
