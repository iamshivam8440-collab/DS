#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void input(int [],int );
void display(int [],int );
void insert(int [],int*);
void insertatend(int [],int*);
void insertatbig(int [],int*);
void input(int arr[SIZE],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the elememt at %d index:",i);
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
void insert(int arr[SIZE],int *n)
{
    /* Insertion at any position */
    int i;
    int pos,value;
    printf("\nEnter the value who insert:");
    scanf("%d",&value);
    printf("Enter the number which index insert:");
    scanf("%d",&pos);
    if(pos<0 || pos>*n)
    {
        printf("Invalid position!:\n");
    }
    else
    {
        for(i=*n-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=value;
        (*n)++;
        display(arr,*n); 
    }
}
void insertatend(int arr[SIZE],int *n)
{
    /* Insertion at end */
    int value;
    printf("\nEnter the number who insert:");
    scanf("%d",&value);
    arr[*n]=value;
    (*n)++;
    display(arr,*n);
}
void insertatbig(int arr[SIZE],int *n)
{
    /* Insertion at beginning */
    int value,i;
    printf("\nEnter the number who insert:");
    scanf("%d",&value);
    for(i=*n-1;i>=0;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[0]=value;
    (*n)++;
    display(arr,*n);   
}
int main()
{
    int arr[SIZE],n;
    int choice;
    do
    {
        printf("\n---------------------------------------------------\n");
        printf("Press 1 for Inserting element at any position:\n");
        printf("Press 2 for Inserting element at the end:\n");
        printf("Press 3 for Inserting element at the beginning:\n");
        printf("Press 4 for Exit for program:\n");
        printf("---------------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("Inserting at any position:\n");
               printf("Enter the size of array:");
               scanf("%d",&n);
               input(arr,n);
               display(arr,n);
               insert(arr,&n);
               break;
        case 2:printf("Inserting at the end:\n");
               printf("Enter the size of array:");
               scanf("%d",&n);
               input(arr,n);
               display(arr,n);
               insertatend(arr,&n);
               break;
        case 3:printf("Inserting at the biginning:\n");
               printf("Enter the size of array:");
               scanf("%d",&n);
               input(arr,n);
               display(arr,n);
               insertatbig(arr,&n);
               break;
        case 4:printf("Exit for program:\n");
               exit(0);
               break;
        default:printf("Invalid input:");
                break;
        }       
    } while (choice!=4);
    
    return 0;
}   