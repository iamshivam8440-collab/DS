#include <stdio.h>
void input(int arr[][3]);
void display(int arr[][3]);
void lower(int arr[][3]);
void input(int mat[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element at %d%d index:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void lower(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                arr[i][j] = 0;
            }
        }
    }
    display(arr);
}
void display(int mat[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3];
    printf("Enter the element of matrix 3 x 3 is:\n");
    input(arr);
    printf("Matrix is:\n");
    display(arr);
    printf("Lower triangular matrix is:\n");
    lower(arr);
    return 0;
}