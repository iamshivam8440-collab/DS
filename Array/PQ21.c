#include <stdio.h>
#define SIZE 50
void input(int[], int);
void even_odd(int[], int);
void input(int arr[SIZE], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element at %d index:", i);
        scanf("%d", &arr[i]);
    }
}
void even_odd(int arr[SIZE], int n)
{
    int i;
    int even_count = 0;
    int odd_count = 0;
    printf("Even number in array is:");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
        printf("\nOdd number in array is:");
        if (!(arr[i] % 2 == 0))
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int n, arr[SIZE];
    printf("Enter the size of array:");
    scanf("%d", &n);
    input(arr, n);
    even_odd(arr, n);
    return 0;
}