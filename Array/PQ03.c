// Greater among two
#include <stdio.h>
void greater(int, int);
void greater(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("%d is greater:", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is greater:", num2);
    }
    else
    {
        printf("Both number is same:");
    }
}
int main()
{
    int num1, num2;
    printf("Enter two number:");
    scanf("%d %d", &num1, &num2);
    greater(num1, num2);
    return 0;
}