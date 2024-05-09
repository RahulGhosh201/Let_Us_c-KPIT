#include <stdio.h>

int main()
{
    printf("24 hours of the day with suitable suffixes: \n");
    for (int i = 0; i < 24; i++)
    {
        if (i == 0)
        {
            printf("12 AM Midnight\n");
        }
        else if (i == 12)
        {
            printf("12 PM Noon\n");
        }
        else if (i < 12)
        {
            printf("%d AM\n", i);
        }
        else
        {
            printf("%d PM\n", i - 12);
        }
    }
    return 0;
}