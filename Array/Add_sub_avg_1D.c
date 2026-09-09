/* Addition,subtraction of 1D array and average of five student marks */
#include<stdio.h>
#define SIZE 50
void input(int [],int );
void display(int [],int );
void add(int [],int [],int [],int );
void sub(int [],int [],int [],int );
void avg(int [],int );
void input(int mat1[SIZE],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the element at %d index:",i);
		scanf("%d",&mat1[i]);
	}
}
void display(int mat1[SIZE],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",mat1[i]);
	}
	printf("\n");
}
void add(int mat1[SIZE],int mat2[SIZE],int mat3[SIZE],int n)
{
	int i;
	printf("Addition of 1D array is:");
	for(i=0;i<n;i++)
	{
		mat3[i]=mat1[i]+mat2[i];
	}
}
void sub(int mat1[SIZE],int mat2[SIZE],int mat3[SIZE],int n)
{
	int i;
	printf("Subtraction of 1D array is:");
	for(i=0;i<n;i++)
	{
		mat3[i]=mat1[i]-mat2[i];
	}
}
void avg(int mat1[SIZE],int n)
{
	int i;
	float avrg;
	int mat3=0;
	for(i=0;i<n;i++)
	{
		mat3+=mat1[i];	
	}
	printf("Total marks:%d\n",mat3);
	avrg=mat3/n;
	printf("Average of marks:%.2f\n",avrg);
}
int main()
{
	int mat1[SIZE],mat2[SIZE],mat3[SIZE],n;
	int choice;
	do{
		printf("-------------------------------------------\n");
		printf("Press 1 for addition of 1D array:\n");
		printf("Press 2 for subtraction of 1D array:\n");
		printf("Press 3 for average of 5 subject marks:\n");
		printf("Press 4 for exit program:\n");
		printf("-------------------------------------------\n\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Addition of 1D array:\n");
				   printf("Enter the size of array:");
			       scanf("%d",&n);
			       input(mat1,n);
			       printf("First 1D matrix is:");
				   display(mat1,n);
				   input(mat2,n);
				   printf("Second 1D matrix is:");
				   display(mat2,n);
				   printf("*************************************\n");
				   add(mat1,mat2,mat3,n);
				   display(mat3,n);
				   printf("*************************************\n\n");
				   break;
			case 2:printf("Subtraction of 1D array:\n");
				   printf("Enter the size of array:");
			       scanf("%d",&n);
			       input(mat1,n);
			       printf("First 1D matrix is:");
				   display(mat1,n);
				   input(mat2,n);
				   printf("Second 1D matrix is:");
				   display(mat2,n);
				   printf("*************************************\n");
				   sub(mat1,mat2,mat3,n);
			       display(mat3,n);
			       printf("*************************************\n\n");
			       break;
			case 3:printf("Average of 5 subject marks of a student:\n");
				   input(mat1,5);
	               display(mat1,5);
	               printf("******************************\n");
	               avg(mat1,5);
	               printf("******************************\n\n");
	               break;
			case 4:printf("Exit from program:\n");
				   exit(0);
				   break;
		}
	}while(choice!=4);
	return 0;
}
