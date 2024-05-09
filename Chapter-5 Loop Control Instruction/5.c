// Write a program to receive an integer and find its octal equivalent.
// (Hint: To obtain octal equivalent of an integer, divide it continuously
// by 8 till dividend doesn’t become zero, then write the remainders
// obtained in reverse direction.)

#include <stdio.h>

void decimalToOctal(int n)
{
    int ans[100], i = 0, x = n;
    while (n != 0)
    {
        ans[i] = n % 8;
        n /= 8;
        i++;
    }
    printf("Decimal: %d -> Octal: ", x);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", ans[j]);
    }
    printf("\n");
}

int main()
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    decimalToOctal(n);
    return 0;
}