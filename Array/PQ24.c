#include <stdio.h>
#define SIZE 50
void input(int[], int);
void display(int[], int);
void deletion(int[], int *);
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void deletion(int arr[SIZE], int *n)
{
    int index;
    printf("\nEnter the index number for delete value:");
    scanf("%d", &index);
    for (int i = index; i < *n; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("New array is:");
    display(arr, *n);
}
int main()
{
    int n, arr[SIZE];
    printf("Enter the size of array:");
    scanf("%d", &n);
    input(arr, n);
    printf("Array is:");
    display(arr, n);
    deletion(arr, &n);
    return 0;
}