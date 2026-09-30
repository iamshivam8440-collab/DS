// Greater among three number
#include <stdio.h>
void greater(int, int, int);
void greater(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greater:", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is greater:", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is greater:", num3);
    }
    else
    {
        printf("all number is same:");
    }
}
int main()
{
    int num1, num2, num3;
    printf("Enter three number:");
    scanf("%d %d %d", &num1, &num2, &num3);
    greater(num1, num2, num3);
    return 0;
}