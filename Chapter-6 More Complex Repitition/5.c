// generate all pythagorean triplets with side length less than or equal to 30

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Pythagorean Triplates with side length or equal to 30\n");
    for (a = 1; a <= 30; a++)
    {
        for (b = a; b <= 30; b++)
        {
            for (c = b; c <= 30; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("(%d,%d,%d)\n", a, b, c);
                }
            }
        }
    }
    return 0;
}