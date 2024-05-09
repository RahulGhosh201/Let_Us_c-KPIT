// Define a function to compute the distance between two points and
// use it to develop another function that will compute the area of the
// triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
// these functions to develop a function which returns a value 1 if the
// point (x, y) lines inside the triangle ABC, otherwise returns a value
// 0. Would you get any advantage if you develop these functions to
// work on call be reference principle?

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a = distance(x1, y1, x2, y2);
    float b = distance(x2, y2, x3, y3);
    float c = distance(x3, y3, x1, y1);
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool isInsideTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float p1, float p2)
{
    float totalArea = triangleArea(x1, y1, x2, y2, x3, y3);
    float area1 = triangleArea(x1, y1, x2, y2, p1, p2);
    float area2 = triangleArea(x2, y2, x3, y3, p1, p2);
    float area3 = triangleArea(x3, y3, x1, y1, p1, p2);

    return (totalArea > 0 && area1 + area2 + area3 == totalArea);
}

int main()
{
    float x1, y1, x2, y2, x3, y3, p1, p2;

    printf("Enter coordinates of vertex A: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of vertex B: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of vertex C: ");
    scanf("%f %f", &x3, &y3);

    printf("Enter coordinates of point P: ");
    scanf("%f %f", &p1, &p2);

    printf("Area of triangle ABC: %.2f\n", triangleArea(x1, y1, x2, y2, x3, y3));

    if (isInsideTriangle(x1, y1, x2, y2, x3, y3, p1, p2))
        printf("Point P is inside the triangle.\n");
    else
        printf("Point P is outside the triangle.\n");

    return 0;
}
