#include <stdio.h>
void rev(int);
void rev(int num)
{
    int rem = 0;
    while (num != 0)
    {
        int a = num % 10;
        rem = rem * 10 + a;
        num = num / 10;
    }
    printf("Reverse of a number is:%d", rem);
}
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    rev(num);
    return 0;
}