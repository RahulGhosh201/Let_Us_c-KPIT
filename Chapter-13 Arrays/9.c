// The X and Y coordinates of 10 different points are entered through
// the keyboard. Write a program to find the distance of last point
// from the first point (sum of distances between consecutive points).

#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x1 - y1), 2) + pow((x2 - y2), 2));
}

float totalDistance(float x[], float y[])
{
    float ans = 0;
    for (int i = 1; i <= 10; i++)
    {
        ans += distance(x[i - 1], y[i - 1], x[i], y[i]);
    }
    return ans;
}

int main()
{
    float x[10], y[10];
    printf("Enter 10 co-ordinates: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }
    printf("Total distance: %.2f", totalDistance(x, y));
    return 0;
}