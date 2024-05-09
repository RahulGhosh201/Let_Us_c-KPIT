#include <stdio.h>
#include <math.h>

void soln(int n)
{
    int temp = n, cnt = 0;
    for (int i = 1; i <= cbrt(n); i++)
    {
        for (int j = i + 1; j <= cbrt(n); j++)
        {
            if ((pow(i, 3) + pow(j, 3)) == temp)
                cnt++;
        }
    }
    if (cnt >= 2)
        printf("%d, ", n);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The Ramanujan numbers are: ");
    for (int i = 1; i <= n; i++)
    {
        soln(i);
    }
    return 0;
}