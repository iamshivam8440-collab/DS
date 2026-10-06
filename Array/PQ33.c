#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
void input(int[][SIZE], int, int);
void display(int[][SIZE], int, int);
void add(int[][SIZE], int[][SIZE], int, int);
void sub(int[][SIZE], int[][SIZE], int, int);
void mul(int[][SIZE], int[][SIZE], int, int, int);
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
void mul(int arr1[][SIZE], int arr2[][SIZE], int r1, int c1, int c2)
{
    int c[SIZE][SIZE];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Matrix multiplication is:\n");
    display(c, r1, c2);
}

int main()
{
    int arr1[SIZE][SIZE], arr2[SIZE][SIZE];
    int rows, column, r1, r2, c1, c2;
    int choice;
    do
    {
        printf("\n--------------------------------------------\n");
        printf("Press 1 for addition of 2D matrix:\n");
        printf("Press 2 for subtraction of 2D matrix:\n");
        printf("Press 3 for matrix multiplication:\n");
        printf("Press 4 for transpose of 2D matrix:\n");
        printf("Press 5 for exit program:\n");
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
            printf("Matrix multiplication:\n");
            printf("Enter the numbers of rows for 1st matrix:");
            scanf("%d", &r1);
            printf("Enter the numbers of column for 1st matrix:");
            scanf("%d", &c1);
            printf("Enter the numbers of rows for 2st matrix:");
            scanf("%d", &r2);
            printf("Enter the numbers of column for 2st matrix:");
            scanf("%d", &c2);
            printf("Enter fisrt matrix:\n");
            input(arr1, r1, c1);
            printf("Enter second matrix:\n");
            input(arr2, r2, c2);
            printf("Matrix 1st is %d x %d form:\n", r1, c1);
            display(arr1, r1, c1);
            printf("Matrix 2nd is %d x %d form:\n", r2, c2);
            display(arr2, r2, c2);
            if (c1 == r2)
            {
                mul(arr1, arr2, r1, c1, c2);
                break;
            }
            else
            {
                printf("Matrix multiplication not perform:");
                break;
            }
        case 4:
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
        case 5:
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