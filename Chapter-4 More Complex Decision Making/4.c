#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isProper(int y)
{
    int x = y * (3.14 / 180);
    int a = sin(x) * sin(x);
    int b = cos(x) * cos(x);
    if ((a + b) == 1)
        return true;
    else
        return false;
}

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    if (isProper(x))
        printf("It's proper");
    else
        printf("It's not proper");
    return 0;
}