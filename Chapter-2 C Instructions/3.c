#include <stdio.h>
#include <math.h>

// float soln(float l1, float l2, float g2, float g1)
// {
//     float l1_radian = l1 * (3.14 / 180);
//     float l2_radian = l2 * (3.14 / 180);
//     float g1_radian = g1 * (3.14 / 180);
//     float g2_radian = g2 * (3.14 / 180);

//     float temp = (sin(l1_radian) * sin(l2_radian)) + (cos(l1_radian) * cos(l2_radian) * cos(g2_radian - g1_radian));

//     float a = acos(temp);
//     float b = a * (180 / 3.14);
//     return 3963*b;
// }

// angle theke radian e convert korte x*(3.14/180) korte hoy.
// radian theke angle e convert korte x*(180/3.14) korte hoy.
// cos^-1 holo acos
// tan^-1 holo atan
// sin^-1 holo asin

float soln(float l1, float l2, float g2, float g1)
{
    return (3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1)));
}

int main()
{
    float l1, l2, g1, g2;
    printf("Enter l1: ");
    scanf("%f", &l1);

    printf("Enter l2: ");
    scanf("%f", &l2);

    printf("Enter g1: ");
    scanf("%f", &g1);

    printf("Enter g2: ");
    scanf("%f", &g2);

    printf("Ans: %.2f", soln(l1, l2, g2, g1));
    return 0;
}