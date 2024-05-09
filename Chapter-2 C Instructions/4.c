#include <stdio.h>
#include <math.h>

float soln(float t, float v)
{
    return (35.74 + (.6215 * t) + ((.4275 * t) - 35.75) * pow(v, .16));
}

int main()
{
    float t, v;
    printf("Enter t & v: ");
    scanf("%f %f", &t, &v);
    float ans = soln(t, v);
    printf("Ans: %.2f", ans);
    return 0;
}