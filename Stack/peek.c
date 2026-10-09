#include <stdio.h>
#define MAX 100
int top = -1;
void input(int[], int);
void display(int[], int);
void peek(int[], int);
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
void peek(int arr[MAX], int top)
{
    if (top == -1)
    {
        printf("\nStack is empty:");
    }
    else
    {
        printf("\nPeek of element is:%d", arr[top - 1]);
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
    peek(arr, top);
    return 0;
}