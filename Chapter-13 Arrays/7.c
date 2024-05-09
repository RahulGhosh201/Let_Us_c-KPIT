#include <stdio.h>
#include <math.h>

#define largest(a, b) ((a > b) ? a : b)

float largestArea(float a[], float b[], float angle[], int n)
{
    float areas[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        areas[k++] = 0.5 * a[i] * b[i] * sin(angle[i]);
    }

    float ans = areas[0];
    for (int i = 0; i < k; i++)
    {
        ans = largest(ans, areas[i]);
    }
    return ans;
}

int main()
{
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[] = {80.9, 92.62, 97., 93, 100.25, 68.95, 120.0};
    float angle[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Largest area: %.2f", largestArea(a, b, angle, n));
    return 0;
}