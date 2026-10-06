#include <stdio.h>
void GCD(int, int);
int gcd(int, int);
void GCD(int num1, int num2)
{
    for (int i = ((num1 < num2) ? num1 : num2); i >= 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("GCD of %d and %d is:%d ", num1, num2, i);
            break;
        }
    }
}
// Recursion
int gcd(int x, int y)
{
    int r;
    if (y == 0)
        return x;
    else
    {
        r = x % y;
        return gcd(y, r);
    }
}

int main()
{
    int num1, num2;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);
    GCD(num1, num2);
    int result = gcd(num1, num2);
    printf("\nGCD of %d and %d is:%d", num1, num2, result);
    return 0;
}