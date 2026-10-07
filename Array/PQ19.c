#include <stdio.h>
void binary(int);
void binary(int num)
{
    int a;
    int count = 0;
    int Bin[50];
    while (num != 0)
    {
        Bin[count] = num % 2;
        num = num / 2;
        ++count;
    }
    for (int j = count - 1; j >= 0; j--)
    {
        printf("%d", Bin[j]);
    }
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Binary number of %d is:", num);
    binary(num);
    return 0;
}