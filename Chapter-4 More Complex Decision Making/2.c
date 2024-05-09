#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int x)
{
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
        return true;
    else
        return false;
}

int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);
    if (isLeapYear(y))
        printf("%d is Leap Year", y);
    else
        printf("%d is not a Leap Year", y);
    return 0;
}