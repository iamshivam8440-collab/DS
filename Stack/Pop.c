// pop element in stack

#include <stdio.h>
#define MAX 50
int top = -1;
void input(int[], int);
void display(int[], int);
void pop(int[], int);
void input(int arr[MAX], int top)
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("Enter number in stack of %d index:", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[MAX], int top)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
}
void pop(int arr[MAX], int top)
{
    int element = arr[top];
    if (top == -1)
    {
        printf("Stack is empty:");
    }
    else
    {
        printf("\npoped element of stack is:");
        printf("%d", arr[top]);
        top--;
        printf("\nStack is:");
        display(arr, top);
    }
}
int main()
{
    int arr[MAX];
    printf("Enter the size of stack:");
    scanf("%d", &top);
    top = top - 1;
    if (top == -1)
    {
        printf("Empty");
    }
    else
    {
        input(arr, top);
        printf("Stack is:");
        display(arr, top);
        pop(arr, top);
    }

    return 0;
}