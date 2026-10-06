#include <stdio.h>
void prime(int);
void prime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
    {
        printf("Number is prime:");
    }
    else
    {
        printf("Number is not prime:");
    }
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    prime(num);
    return 0;
}