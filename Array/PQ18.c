#include <stdio.h>
#define SIZE 50
void input(int[], int);
void display(int[], int n);
void input(int arr[SIZE], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d subject marks:", i + 1);
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
void average(int arr[SIZE], int n)
{
    int temp = 0, i;
    for (i = 0; i < n; i++)
    {
        temp += arr[i];
    }
    printf("\nTotal marks of all subject:%d\n", temp);
    int avrg = temp / n;
    printf("Average of total marks is:%d\n", avrg);
}
int main()
{
    int n;
    int arr[SIZE];
    printf("Enter the size of array:");
    scanf("%d", &n);
    input(arr, n);
    printf("Array is:");
    display(arr, n);
    average(arr, n);
    return 0;
}
