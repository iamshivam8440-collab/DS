#include <stdio.h>
void palindrome(int);
void palindrome(int num)
{
    int temp = num;
    int rem = 0;
    while (temp != 0)
    {
        int a = temp % 10;
        rem = rem * 10 + a;
        temp = temp / 10;
    }
    if (temp == rem)
    {
        printf("Number is palindrome:");
    }
    else
    {
        printf("Number is not palindrome:");
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}