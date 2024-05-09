// Write a program to find the absolute value of a number entered
// through the keyboard
#include <stdio.h>

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Absolute value of %d is %d", x, x);
    }
    else
    {
        printf("Absolute value of %d is %d", x, -1 * x);
    }
    return 0;
}

//otherwise we can use abs(x)