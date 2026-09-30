// Leap year
#include <stdio.h>
void leap(int);
void leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) && (year % 400 == 0))
    {
        printf("%d is leap year:", year);
    }
    else
    {
        printf("%d is not leap year:", year);
    }
}
int main()
{
    int year;
    printf("Enter your year:");
    scanf("%d", &year);
    leap(year);
    return 0;
}