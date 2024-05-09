// Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle,
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void soln(int x, int y, int a, int b, int r)
{
    int dist = sqrt(pow((x - a), 2) + pow((y - b), 2));
    if (dist < r)
        printf("Point lies inside the circle");
    else if (dist == r)
        printf("Point lies on the circle");
    else
        printf("Point lies outside the circle");
}

int main()
{
    int x, y;
    printf("Give the co-ordinate of center of a circle: ");
    scanf("%d %d", &x, &y);
    int a, b;
    printf("Give another co-ordinate: ");
    scanf("%d %d", &a, &b);
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    soln(x, y, a, b, r);
    return 0;
}