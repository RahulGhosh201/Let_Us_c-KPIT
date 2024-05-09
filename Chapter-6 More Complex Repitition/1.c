// Write a program to print the multiplication table of the number
// entered by the user. The table should get displayed in the following
// form:
// 29 * 1 = 29
// 29 * 2 = 58

#include <stdio.h>

void multiplicationTable(int n)
{
    printf("Multiplication table of %d\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    multiplicationTable(n);
    return 0;
}