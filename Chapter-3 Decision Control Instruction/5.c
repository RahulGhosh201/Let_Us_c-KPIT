// Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.

#include <stdio.h>
#include <stdbool.h>

bool soln(int l, int b)
{
    int perimeter = 2 * (l + b);
    int area = l * b;
    if (area > perimeter)
        return true;
    else
        return false;
}

int main()
{
    int l = 5, b = 4;
    if (soln(l, b))
        printf("Area of rectangle is greater than its perimeter");
    else
        printf("Area of rectangle is not greater than its perimeter");
}