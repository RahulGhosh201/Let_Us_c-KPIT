// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
// check if the three points fall on one straight line.

#include <stdio.h>
#include <stdbool.h>

bool soln(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int area = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    if (area == 0)
        return true;
    else
        return false;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter first co-ordinate: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter second co-rodinate: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter third co-ordinate: ");
    scanf("%d %d", &x3, &y3);
    if (soln(x1, y1, x2, y2, x3, y3))
        printf("These three points fall on one straight line");
    else
        printf("These three points don't fall on one straight line");
}