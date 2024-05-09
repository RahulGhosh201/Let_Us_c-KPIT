#include <stdio.h>

int main()
{
    int rows = 4;
    int number = 1;

    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        // Print numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%3d ", number++);
        }

        printf("\n");
    }

    return 0;
}
