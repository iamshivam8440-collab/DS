#include <stdio.h>
#include "matrix_input.h"
void sparse(int[][SIZE], int, int);
void sparse(int arr[SIZE][SIZE], int rows, int column)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == 0)
            {
                ++count;
            }
        }
    }
    if (count >= (rows * column) / 2)
        printf("Matrix is sparse matrix:");
    else
        printf("Matrix is not sparse matrix:");
}
int main()
{
    int arr[SIZE][SIZE];
    int rows, column;
    printf("Enter the numbers of rows:");
    scanf("%d", &rows);
    printf("Enter the numbers of column:");
    scanf("%d", &column);
    input(arr, rows, column);
    printf("Matrix is:");
    display(arr, rows, column);
    sparse(arr, rows, column);
    return 0;
}