#include <stdio.h>
#include <math.h>

void soln(float x)
{
    float x_radian = x * (3.14 / 180);
    printf("sin(%f): %.2f", x, sin(x_radian));
    printf("cos(%f): %.2f", x, cos(x_radian));
    printf("tan(%f): %.2f", x, tan(x_radian));
}

int main()
{
    float x;
    printf("Enter x: ");
    scanf("%f", &x);
    soln(x);
    return 0;
}