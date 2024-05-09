// Given a point (x, y), write a program to find out if it lies on X-axis, Y-axis or origin.

#include <stdio.h>

void soln(int x, int y)
{
    if (x == 0)
        printf("The point lies on X-axis");
    else if (y == 0)
        printf("The point lies on Y-axis");
    else if (x == y)
        printf("The point lies on origin");
}

int main()
{
    int x, y;
    printf("Enter a point(x,y): ");
    scanf("%d %d", &x, &y);
    soln(x, y);
    return 0;
}