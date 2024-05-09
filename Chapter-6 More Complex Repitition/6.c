#include <stdio.h>

int main()
{
    int p = 100000;
    float r = 0.10;
    printf("Population at the end of each year: \n");
    for (int i = 1; i <= 10; i++)
    {
        float temp = p * (1 + i * r);
        printf("Year: %d -> Population: %d\n", i, (int)temp);
    }
    return 0;
}