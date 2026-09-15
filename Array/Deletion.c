#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void input(int [],int );
void display(int [],int );
void deletion(int [],int*);
void deletionatend(int [],int*);
void deletionatbig(int [],int*);
void deletion(int arr[SIZE],int *n)
{
    /* Deletion at any of the index: */
    int i;
    int index;
    printf("\nEnter the index number who delete:");
    scanf("%d",&index);
    if(index<0 || index>*n)
    {
        printf("Invalid Index:\n");
    }
    else
    {
        for(i=index;i<*n;i++)
        {
         arr[i]=arr[i+1];
        }
        (*n)--;
        display(arr,*n);
    }
}
void deletionatend(int arr[SIZE],int *n)
{
    /* Deletion at end */
    (*n)--;
    display(arr,*n);
}
void deletionatbig(int arr[SIZE],int *n)
{
    /* Deletion at beginning */
    int i;
    for(i=0;i<*n;i++)
    {
        arr[i]=arr[i+1];
    }
    (*n)--;
    display(arr,*n);
}
void input(int arr[SIZE],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d index:",i);
        scanf("%d",&arr[i]);
    }
}
void display(int arr[SIZE],int n)
{
    int i;
    printf("Array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[SIZE],n;
    int choice;
    do
    {
        printf("\n------------------------------------------\n");
        printf("Press 1 for Deletion at any index:\n");
        printf("Press 2 for Deletion at end:\n");
        printf("Press 3 for Deletion at beginning:\n");
        printf("Press 4 for exit for program:\n");
        printf("------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("Deletion at any index:\n");
               printf("Enter the size of array:");
               scanf("%d",&n);
               input(arr,n);
               display(arr,n);
               deletion(arr,&n);               
               break;
        case 2:printf("Deletion at end:\n");
               printf("Enter the size of array:");
               scanf("%d",&n);
               input(arr,n);
               display(arr,n);
               deletionatend(arr,&n);               
               break;
        case 3:printf("Deletion at beginning:\n");
               printf("Enter the size of array:");
               scanf("%d",&n);
               input(arr,n);
               display(arr,n);
               deletionatbig(arr,&n);               
               break;
        case 4:printf("Exit for program:\n");
               exit(0);
               break;
        default:printf("Invalid Input!!\n");
               break;
        }
    } while (choice!=4);
    
    return 0;
}
