// Armstrong tempber
#include <stdio.h>
void armstrong(int);
void armstrong(int num)
{
    int rem = 0;
    int temp = num;
    while (temp != 0)
    {
        int a = temp % 10;
        rem = rem + (a * a * a);
        temp = temp / 10;
    }
    if (rem == num)
    {
        printf("%d is armstrong number:", rem);
    }
    else
    {
        printf("%d is not armstrong number:", rem);
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    armstrong(num);
    return 0;
}