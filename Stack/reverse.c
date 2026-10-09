#include <stdio.h>
#define MAX 100
int top = -1;
void input(int[], int);
void display(int[], int);
void rev(int[], int);
void input(int arr[MAX], int top)
{
    for (int i = 0; i < top; i++)
    {
        printf("Enter the element at %d index in stack:", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[MAX], int top)
{
    for (int i = 0; i < top; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rev(int arr[MAX], int top)
{
    if (top == -1)
    {
        printf("\nStack is empty:");
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[MAX];
    printf("Enter the size of stack:");
    scanf("%d", &top);
    input(arr, top);
    printf("Stack is:");
    display(arr, top);
    printf("\nReverse of stack is:");
    rev(arr, top);
    return 0;
}