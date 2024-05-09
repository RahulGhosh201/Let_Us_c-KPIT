// Twenty-five numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are positive, how
// many are negative, how many are even and how many odd.

#include <stdio.h>
#include <stdbool.h>

#define isPositive(x) ((x > 0) ? 1 : 0)
#define isNegative(x) ((x < 0) ? 1 : 0)
#define isEven(x) ((x % 2 == 0) ? 1 : 0)
#define isOdd(x) ((x % 2 != 0) ? 1 : 0)

int main()
{
    int arr[5];
    int p = 0, n = 0, e = 0, o = 0;
    printf("Enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (isPositive(arr[i]))
            p++;
        if (isNegative(arr[i]))
            n++;
        if (isEven(arr[i]))
            e++;
        if (isOdd(arr[i]))
            o++;
    }

    printf("Positive: %d, Negative: %d, Even: %d, Odd: %d ", p, n, e, o);
    return 0;
}