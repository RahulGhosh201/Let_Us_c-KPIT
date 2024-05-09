#include <stdio.h>

float areaOfrectangle(float a, float b)
{
    return a * b;
}

float circumferenceOfrectangle(float a, float b)
{
    float ans = 2 * (a + b);
    return ans;
}

float areaOfcircle(float r)
{
    float ans = 3.14 * r * r;
    return ans;
}

float circumferenceOfcircle(float r)
{
    float ans = 2 * 3.14 * r;
    return ans;
}

int main()
{
    float r, l, b;

    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    printf("Area of Circle: %.2f\n", areaOfcircle(r));
    printf("Circumference of Circle: %.2f\n", circumferenceOfcircle(r));
    printf("Area of Rectangle: %.2f\n", areaOfrectangle(l, b));
    printf("Circumference of Rectangle: %.2f\n", circumferenceOfrectangle(l, b));
    return 0;
}