// Add element of 2D array:
#include <stdio.h>
#include "const.h"
void input(int[][SIZE], int, int);
void display(int[][SIZE], int, int);
void add(int[][SIZE], int, int);
void input(int mat[][SIZE], int rows, int column)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the element at %d%d index:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void display(int mat[][SIZE], int rows, int column)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void add(int mat[][SIZE], int rows, int column)
{
    int result = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result = result + mat[i][j];
        }
    }
    printf("Sum the element of 2D matrix is:%d", result);
}
int main()
{

    int rows, column;
    int mat[SIZE][SIZE];
    printf("Enter the numbers of rows:");
    scanf("%d", &rows);
    printf("Enter the numbers of column:");
    scanf("%d", &column);
    input(mat, rows, column);
    printf("Matrix of %d x %d is:\n", rows, column);
    display(mat, rows, column);
    add(mat, rows, column);
    return 0;
}