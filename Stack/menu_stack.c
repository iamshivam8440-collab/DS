#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int top = -1;
void input(int[], int);
void display(int[], int);
void push(int[], int);
void pop(int[], int);
void peek(int[], int);
void rev(int[], int);
// Input function
void input(int arr[MAX], int top)
{
    for (int i = 0; i < top; i++)
    {
        printf("Enter number in stack of %d index:", i);
        scanf("%d", &arr[i]);
    }
}
// Display function
void display(int arr[MAX], int top)
{
    for (int i = 0; i < top; i++)
    {
        printf("%d ", arr[i]);
    }
}
// Push function
void push(int arr[MAX], int top)
{
    int value;
    if (top == (MAX - 1))
    {
        printf("\nStack is full:");
    }
    else
    {
        printf("\nEnter the element push in stack:");
        scanf("%d", &value);
        arr[top] = value;
        top++;
        printf("New stack is:");
        display(arr, top);
    }
}
// POP function
void pop(int arr[MAX], int top)
{
    int element;
    if (top == -1)
    {
        printf("\nStack is empty:");
    }
    else
    {
        printf("\nHow many number pop in the stack:");
        scanf("%d", &element);
        top -= element;
        printf("New stack is:");
        display(arr, top);
    }
}
// Peek function
void peek(int arr[MAX], int top)
{
    if (top == -1)
    {
        printf("\nStact is empty:");
    }
    else
    {
        printf("\nPeek element of stack is:%d", arr[top - 1]);
    }
}
// Revese function
void rev(int arr[MAX], int top)
{
    if (top == -1)
    {
        printf("\nStack is empty:");
    }
    else
    {
        printf("\nPeek of stack is:");
        for (int i = top - 1; i > -1; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[MAX];
    int choice;
    do
    {
        printf("\n--------------------------------------------\n");
        printf("Press 1 for push element in stack:\n");
        printf("Press 2 for pop element of stack:\n");
        printf("Press 3 for peek element of stack:\n");
        printf("Press 4 for reverse element of stack:\n");
        printf("Press 5 for exit:\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nPush element in stack:\n");
            printf("Enter the size of stack:");
            scanf("%d", &top);
            input(arr, top);
            printf("\nStack is:");
            display(arr, top);
            push(arr, top);
            break;
        case 2:
            printf("\nPop element in stack:\n");
            printf("Enter the size of stack:");
            scanf("%d", &top);
            input(arr, top);
            printf("\nStack is:");
            display(arr, top);
            pop(arr, top);
            break;
        case 3:
            printf("\nPeek element of stack:\n");
            printf("Enter the size of stack:");
            scanf("%d", &top);
            input(arr, top);
            printf("\nStack is:");
            display(arr, top);
            peek(arr, top);
            break;
        case 4:
            printf("\nReverse element of stack:\n");
            printf("Enter the size of stack:");
            scanf("%d", &top);
            input(arr, top);
            printf("\nStack is:");
            display(arr, top);
            printf("\nReverse of stack is:");
            rev(arr, top);
            break;
        case 5:
            printf("\nEXIT");
            exit(0);
            break;
        default:
            printf("\nInvalid input!!");
            break;
        }
    } while (choice != 5);

    return 0;
}