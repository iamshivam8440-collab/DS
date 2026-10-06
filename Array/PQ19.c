// Incomplete

#include <stdio.h>
void binary(int);
void binary(int num)
{
    int a;
    int rem = 0, rev;
    while (num != 0)
    {
        a = num % 2;
        printf("%d", a);
        rem = rem + a;
        num = num / 2;
    }
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    binary(num);
    return 0;
}