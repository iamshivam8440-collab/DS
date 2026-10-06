#include <stdio.h>
long long int fact(int);
void nCr(int, int);
long long int fact(int num)
{
    if (num == 1)
        return num;
    else
        return num * fact(num - 1);
}
void nCr(int n, int r)
{
    long int result;
    result = fact(n) / (fact(r) * fact(n - r));
    printf("nCr is:%ld", result);
}
int main()
{
    int n, r;
    printf("Enter the number for nCr:");
    scanf("%d", &n);
    scanf("%d", &r);
    nCr(n, r);
    return 0;
}