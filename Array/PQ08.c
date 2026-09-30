#include <stdio.h>
void dsum(int);
void dsum(int num)
{
    int result = 0;
    while (num != 0)
    {
        int a = num % 10;
        result += a;
        num = num / 10;
    }
    printf("The sum of digit is:%d ", result);
}
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    dsum(num);
    return 0;
}