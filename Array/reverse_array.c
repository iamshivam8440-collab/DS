/*  Reverse array number using loop */
#include<stdio.h>
#define SIZE 100
void input(int [],int );
void display(int [],int );
void rev(int [],int ,int );
void length(int [],int );
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
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void length(int arr[SIZE],int n)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        ++count;
    }
    int l=count;
    rev(arr,n,l);
}
void rev(int arr[SIZE],int n,int l)
{
  int i;
  int temp;
  for(i=0;i<l/2;i++)
  {
    temp=arr[l-1-i];
    arr[l-1-i]=arr[i];
    arr[i]=temp;
  }
  printf("\nAfter reverse:");
  display(arr,n);
}
int main()
{
    int arr[SIZE],n;
    int i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    input(arr,n);
    printf("Before reverse:");
    display(arr,n);
    length(arr,n);
    return 0;
}
