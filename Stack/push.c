// Push element in stack(Insert)

#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int top = -1;
void input(int[], int);
void display(int[], int);
void push(int[], int);
void input(int arr[MAX], int top)
{
    int i;
    for (i = 0; i < top; i++)
    {
        printf("Enter number in stack of %d index:", i);
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
void push(int arr[MAX], int top)
{
    int value;
    if (top == MAX - 1)
    {
        printf("Stack is overflow:");
        exit(1);
    }
    else
    {
        printf("\nEnter number push in stack:");
        scanf("%d", &value);
        top += 1;
        arr[top] = value;
        printf("\nNew stack is:");
        display(arr, top);
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
    push(arr, top);
    return 0;
}