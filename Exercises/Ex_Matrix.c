#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int main()
{
    int row1, col1, row2, col2, sum = 0;
    printf("Enter number of rows for Matrix A\n");
    scanf("%d", &row1);
    printf("Enter number of columns for Matrix A\n");
    scanf("%d", &col1);
    printf("Enter the first matrix\n");
    int matrixA[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter number of rows for Matrix B\n");
    scanf("%d", &row2);
    printf("Enter number of columns for Matrix B\n");
    scanf("%d", &col2);
    printf("Enter the second Matrix\n");
    int matrixB[row2][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }
    if (col1 != row2)
    {
        printf("Matrix of such matrix is not possible. Since number column of Matrix A is equal to number Row of Matrix B \n");
    }
    else
    {
        int matrixC[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    sum += matrixA[i][k] * matrixB[k][j];
                }
                matrixC[i][j] = sum;
                sum = 0;
            }
        }
        for (int i = 0; i < row1; i++)
        {
            printf("|");
            for (int j = 0; j < col2; j++)
            {
                printf(" %d ", matrixC[i][j]);
            }
            printf("|\n");
        }
    }

    return 0;
    getch();
}