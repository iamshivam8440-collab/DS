#include <stdio.h>
#include "const.h"
void input(int[][SIZE], int, int);
void display(int[][SIZE], int, int);
void input(int arr[SIZE][SIZE], int rows, int column)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the element at %d%d index:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void display(int arr[SIZE][SIZE], int rows, int column)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}