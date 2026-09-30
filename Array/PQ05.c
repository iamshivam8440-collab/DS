#include <stdio.h>
void sum(int);
void sum(int num)
{
    int count = 0;
    int a, rem = 0;
    while (num != 0)
    {
        count++;
        a = num % 10;
        if (count == 3 || count == 5)
        {
            rem += a;
        }
        num = num / 10;
    }
    printf("Sum of first and third digit:%d", rem);
}
int main()
{
    int num;
    printf("Enter five digit number:");
    scanf("%d", &num);
    sum(num);
    return 0;
}