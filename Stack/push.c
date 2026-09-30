// Push element in stack

#include <stdio.h>
#define SIZE 50
void input(int[], int);
void display(int[], int);
void push(int[], int);
void input(int arr[SIZE], int top)
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("Enter number in stack of %d index:", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[SIZE], int top)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
}
void push(int arr[SIZE], int top)
{
    int value;
    printf("\nEnter number push in stack:");
    scanf("%d", &value);
    top++;
    arr[top] = value;
    printf("Pushed element of stack is:");
    display(arr, top);
}
int main()
{
    int arr[SIZE], n;
    int top = -1;
    printf("How many number push in array:");
    scanf("%d", &n);
    top += n;
    input(arr, top);
    printf("Stack is:");
    display(arr, top);
    push(arr, top);
    return 0;
}