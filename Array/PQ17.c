#include <stdio.h>
#define SIZE 50
void input(int[], int);
void display(int[], int);
void add(int[], int[], int);
void input(int arr[SIZE], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element at %d index:", i);
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
void add(int arr1[SIZE], int arr2[SIZE], int n)
{
    int arr[SIZE];
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = arr1[i] + arr2[i];
    }
    printf("\nAddition of two array is:");
    display(arr, n);
}
int main()
{
    int n, arr1[SIZE], arr2[SIZE];
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter 1st array:\n");
    input(arr1, n);
    printf("Enter 2nd array:\n");
    input(arr2, n);
    printf("\nDisplay 1st array:");
    display(arr1, n);
    printf("\nDisplay 2nd array:");
    display(arr2, n);
    add(arr1, arr2, n);
    return 0;
}