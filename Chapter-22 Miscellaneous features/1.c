#include <stdio.h>

struct Date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};

void readDate(struct Date *date)
{
    printf("Enter day (1-31): ");
    scanf("%u", &date->day);
    printf("Enter month (1-12): ");
    scanf("%u", &date->month);
    printf("Enter year (0-4095): ");
    scanf("%u", &date->year);
}

void displayDate(struct Date date)
{
    printf("%02u-%02u-%04u\n", date.day, date.month, date.year);
}

void sortDates(struct Date dates[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (dates[j].year > dates[j + 1].year)
            {
                struct Date temp = dates[j];
                dates[j] = dates[j + 1];
                dates[j + 1] = temp;
            }
            else if (dates[j].year == dates[j + 1].year && dates[j].month > dates[j + 1].month)
            {
                struct Date temp = dates[j];
                dates[j] = dates[j + 1];
                dates[j + 1] = temp;
            }
            else if (dates[j].year == dates[j + 1].year && dates[j].month == dates[j + 1].month && dates[j].day > dates[j + 1].day)
            {
                struct Date temp = dates[j];
                dates[j] = dates[j + 1];
                dates[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct Date employees[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter date of joining for employee %d:\n", i + 1);
        readDate(&employees[i]);
    }
    sortDates(employees, 10);
    printf("\nDates of joining in ascending order of year:\n");
    for (int i = 0; i < 10; i++)
    {
        displayDate(employees[i]);
    }

    return 0;
}

// Enter date of joining for employee 1:
// Enter day (1-31): 15
// Enter month (1-12): 8
// Enter year (0-4095): 2020
// Enter date of joining for employee 2:
// Enter day (1-31): 23
// Enter month (1-12): 7
// Enter year (0-4095): 2018
// Enter date of joining for employee 3:
// Enter day (1-31): 5
// Enter month (1-12): 3
// Enter year (0-4095): 2019
// Enter date of joining for employee 4:
// Enter day (1-31): 11
// Enter month (1-12): 12
// Enter year (0-4095): 2022
// Enter date of joining for employee 5:
// Enter day (1-31): 29
// Enter month (1-12): 4
// Enter year (0-4095): 2017
// Enter date of joining for employee 6:
// Enter day (1-31): 10
// Enter month (1-12): 1
// Enter year (0-4095): 2016
// Enter date of joining for employee 7:
// Enter day (1-31): 25
// Enter month (1-12): 9
// Enter year (0-4095): 2021
// Enter date of joining for employee 8:
// Enter day (1-31): 14
// Enter month (1-12): 2
// Enter year (0-4095): 2015
// Enter date of joining for employee 9:
// Enter day (1-31): 17
// Enter month (1-12): 11
// Enter year (0-4095): 2019
// Enter date of joining for employee 10:
// Enter day (1-31): 8
// Enter month (1-12): 6
// Enter year (0-4095): 2020

// Dates of joining in ascending order of year:
// 14-02-2015
// 10-01-2016
// 29-04-2017
// 23-07-2018
// 05-03-2019
// 17-11-2019
// 08-06-2020
// 15-08-2020
// 25-09-2021
// 11-12-2022
