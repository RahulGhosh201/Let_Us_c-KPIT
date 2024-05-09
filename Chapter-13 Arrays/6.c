// mean and standard deviation
#include <stdio.h>
#include <math.h>

float mean(float arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

float sd(float arr[], int n)
{
    float avg = mean(arr, n);
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        float temp = pow((arr[i] - avg), 2);
        ans += temp;
    }
    return sqrt(ans / n);
}

int main()
{
    float arr[] = {-6,
                   -12,
                   8,
                   13,
                   11,
                   6,
                   7,
                   2,
                   -6,
                   -9,
                   -10, 11, 10, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Standard deviation: %.2f", sd(arr, n));
}