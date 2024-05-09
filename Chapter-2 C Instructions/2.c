#include <stdio.h>
#include <math.h>

void soln(float x, float y)
{
    float r, s;
    float temp = pow(x, 2) + pow(y, 2);
    r = sqrt(temp);
    float angle = atan(y/x);
    s = angle * (180 / 3.14);
    printf("Polar co-ordiantes:\n");
    printf("r: %.2f ", r);
    printf("s:%.2f", s);
}

int main()
{
    float x, y;
    printf("Enter cartesian co-ordinates:\n");
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);
    soln(x, y);
}