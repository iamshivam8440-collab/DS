/* Searching an element in array */
#include<stdio.h>
#define SIZE 50
void input(int [],int );
void display(int [],int );
int find(int [],int* ,int );
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
int find(int arr[SIZE],int *n,int search)
{
    int i;
    for(i=0;i<*n;i++)
    {
        if(arr[i]==search)
        {
            return i;
        }
    }
     return -1;
}
int main()
{
    int arr[SIZE],n,search;
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    input(arr,n);
    display(arr,n);
    printf("Enter the number who search:");
    scanf("%d",&search);
    int result=find(arr,&n,search);
    if(result==-1)
    {
        printf("Number is not present:");
    }
    else
    {
        printf("Number is present:");
    }
    return 0;
}