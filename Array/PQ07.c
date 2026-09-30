#include <stdio.h>
void table(int);
void table(int num)
{
    int i;
    int n;
    printf("Enter which terms do you want:");
    scanf("%d", &n);
    printf("Table of %d of %d terms:\n", num, n);
    for (i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
int main()
{
    int num;
    printf("Enter the number for table:");
    scanf("%d", &num);
    table(num);
    return 0;
}