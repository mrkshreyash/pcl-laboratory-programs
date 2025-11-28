
/*
   Updated Statement:
   Implement Matrix Addition, Subtraction and Multiplication using 2D array.
*/

#include <stdio.h>

int main()
{
    int m, n, p, q;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (m != p || n != q)
    {
        printf("Addition and Subtraction not possible for these dimensions.\n");
    }

    int mat1[m][n], mat2[p][q], sum[m][n], diff[m][n];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &mat2[i][j]);

    // Addition
    if (m == p && n == q)
    {
        printf("Sum of matrices:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        // Subtraction
        printf("Difference of matrices:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                diff[i][j] = mat1[i][j] - mat2[i][j];
                printf("%d ", diff[i][j]);
            }
            printf("\n");
        }
    }

    // Multiplication
    if (n != p)
    {
        printf("Matrix multiplication not possible.\n");
    }
    else
    {
        int prod[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                prod[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    prod[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        printf("Product of matrices:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", prod[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
