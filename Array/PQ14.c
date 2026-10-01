#include <stdio.h>
#define SIZE 50
void input(int[], int);
void display(int[], int);
void input(int arr[SIZE], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element at %d index:", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[SIZE], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, arr[SIZE];
    printf("Enter the size of n:");
    scanf("%d", &n);
    input(arr, n);
    printf("Array is:");
    display(arr, n);
    return 0;
}