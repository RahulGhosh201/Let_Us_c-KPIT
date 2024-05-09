#include <stdio.h>

float fToc(float x)
{
    float ans = (x - 32) * 5 / 9;
    return ans;
}

int main()
{
    float f = 0.0;
    printf("Enter farenhite: ");
    scanf("%f", &f);
    float c = fToc(f);
    printf("Centigrade degrees: %.2f\n", c);
    return 0;
}