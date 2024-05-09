// Any year is entered through the keyboard. Write a function to
// determine whether the year is a leap year or not.

#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int y)
{
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
        return true;
    else
        return false;
}

int main()
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if (isLeapYear(y))
        printf("%d is a Leap Year\n", y);
    else
        printf("%d is not a Leap Year\n", y);
    return 0;
}