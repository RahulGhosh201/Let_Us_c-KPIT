#include <stdio.h>
#include <math.h>

void soln(float x)
{
    float ans = (x - 1) / x;
    for (int i = 2; i <= 7; i++)
    {
        float temp = (x - 1) / x;
        ans += 0.5 * pow(temp, i);
    }
    printf("Ans: %.2f", ans);
}

int main()
{
    float x;
    printf("Enter x: ");
    scanf("%f", &x);
    soln(x);
    return 0;
}