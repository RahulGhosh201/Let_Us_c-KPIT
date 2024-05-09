#include <stdio.h>

void sum(int a[][6], int b[][6])
{
    int c[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of two matrices: ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[6][6], b[6][6];
    printf("Enter elements of first matrix: ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix: ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    sum(a, b);
    return 0;
}