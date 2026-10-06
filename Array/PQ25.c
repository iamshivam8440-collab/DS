#include <stdio.h>
#define SIZE 50
void input(int[], int);
int search(int[], int, int);
void input(int arr[SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at %d index:", i);
        scanf("%d", &arr[i]);
    }
}
int search(int arr[SIZE], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int value, n, arr[SIZE];
    printf("Enter the size of array:");
    scanf("%d", &n);
    input(arr, n);
    printf("Enter the value for search in array:");
    scanf("%d", &value);
    int result = search(arr, n, value);
    if (result == -1)
    {
        printf("Value is not present in array:");
    }
    else
    {
        printf("Value is present in array:");
    }
    return 0;
}