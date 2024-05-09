// According to Gregorian calendar, it was Monday on the date
// 01/01/01. If any year is input through the keyboard write a program
// to find out what is the day on 1st January of this year.

#include <stdio.h>

int dayOfWeek(int year)
{
    int day[] = {2, 3, 4, 5, 6, 0, 1};
    int offset = year - 2001;
    int ans = (day[0] + offset) % 7;
    return ans;
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    int day = dayOfWeek(year);
    char days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("On January 1st, %d, it was %s\n", year, days[day]);
    return 0;
}
