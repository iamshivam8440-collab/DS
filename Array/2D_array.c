#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
void input(int[][SIZE], int, int);
void display(int[][SIZE], int, int);
void add(int[][SIZE], int[][SIZE], int, int);
void sub(int[][SIZE], int[][SIZE], int, int);
void trans(int[][SIZE], int, int);
void input(int arr[SIZE][SIZE], int row, int column)
{
    /* Input function*/
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the element at %d%d index:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void display(int arr[SIZE][SIZE], int row, int column)
{
    /* Display function */
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void add(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int column, int row)
{
    /* Addition of 2D array */
    int arr[SIZE][SIZE];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    display(arr, row, column);
}
void sub(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int column, int row)
{
    /* Subtraction of 2D array */
    int arr[SIZE][SIZE];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            arr[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    display(arr, row, column);
}
void trans(int arr[SIZE][SIZE], int row, int column)
{
    /* Transose of 2D array */
    int arr1[SIZE][SIZE];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
    display(arr1, row, column);
}
int main()
{
    int arr1[SIZE][SIZE], arr2[SIZE][SIZE];
    int rows, column;
    int choice;
    do
    {
        printf("\n--------------------------------------------\n");
        printf("Press 1 for addition of 2D matrix:\n");
        printf("Press 2 for subtraction of 2D matrix:\n");
        printf("Press 3 for transpose of 2D matrix:\n");
        printf("Press 4 for exit program:\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Addition of 2D matrix:\n");
            printf("Enter the numbers of rows:");
            scanf("%d", &rows);
            printf("Enter the number of column:");
            scanf("%d", &column);
            printf("Enter first matrix:\n");
            input(arr1, rows, column);
            printf("Enter second matrix:\n");
            input(arr2, rows, column);
            printf("First matrix is:\n");
            display(arr1, rows, column);
            printf("Second matrix is:\n");
            display(arr2, rows, column);
            printf("Adiition of matrix is:\n");
            add(arr1, arr2, rows, column);
            break;
        case 2:
            printf("Subtraction of 2D matrix:\n");
            printf("Enter the numbers of rows:");
            scanf("%d", &rows);
            printf("Enter the number of column:");
            scanf("%d", &column);
            printf("Enter first matrix:\n");
            input(arr1, rows, column);
            printf("Enter second matrix:\n");
            input(arr2, rows, column);
            printf("First matrix is:\n");
            display(arr1, rows, column);
            printf("Second matrix is:\n");
            display(arr2, rows, column);
            printf("Subtraction of matrix is:\n");
            sub(arr1, arr2, rows, column);
            break;
        case 3:
            printf("Transpose of a matrix:\n");
            printf("Enter the rows:");
            scanf("%d", &rows);
            printf("Enter the column:");
            scanf("%d", &column);
            printf("Enter matrix:\n");
            input(arr1, rows, column);
            printf("Matrix is:\n");
            display(arr1, rows, column);
            printf("Transpose matrix is:\n");
            trans(arr1, rows, column);
            break;
        case 4:
            printf("Exit for program:\n");
            exit(0);
            break;
        default:
            printf("Invalid Input!:\n");
            break;
        }
    } while (choice != 4);
    return 0;
}