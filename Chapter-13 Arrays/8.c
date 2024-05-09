#include <stdio.h>
#include <math.h>

float soln(float x[], float y[], int n)
{
    float sx = 0, sy = 0, sxy = 0, sx2 = 0, sy2 = 0;
    for (int i = 0; i < n; i++)
    {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sx2 += pow(x[i], 2);
        sy2 += pow(y[i], 2);
    }
    float t1 = sxy - sx * sy;
    float t2 = n * sx2 - pow(sx, 2);
    float t3 = n * sy2 - pow(sy, 2);
    return (t1 / sqrt(t2 * t3));
}

int main()
{
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {10.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94., 85, 94.65};
    int n = sizeof(x) / sizeof(x[0]);
    printf("Correlation Co-efficient: %.2f", soln(x, y, n));
    return 0;
}