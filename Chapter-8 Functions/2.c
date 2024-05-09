// A positive integer is entered through the keyboard. Write a function
// to obtain the prime factors of this number.
// For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
// factors of 35 are 5 and 7.

#include <stdio.h>

void primeFactors(int n)
{
    printf("Prime factors of %d are: ", n);
    while (n % 2 == 0)
    {
        printf("%d, ", 2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            printf("%d, ", i);
            n /= i;
        }
    }

    if (n > 2)
        printf("%d", n);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}