#include <stdio.h>
#include "const.h"
#include "array_input.h" // function input & display declare , define in array_input.h
int main()
{
    int n, arr[SIZE];
    printf("Enter the size of array:");
    scanf("%d", &n);
    input(arr, n);
    printf("Array is:");
    display(arr, n);
    return 0;
}