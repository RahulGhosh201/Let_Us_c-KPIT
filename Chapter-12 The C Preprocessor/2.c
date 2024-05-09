// Write macro definitions for the following:
// 1. To find arithmetic mean of two numbers.
// 2. To find absolute value of a number.
// 3. To convert an uppercase alphabet to lowercase.
// 4. To obtain the biggest of three numbers.

#include <stdio.h>

#define ARITHMETIC_MEAN(x, y) ((x + y) / 2)

#define ABSOLUTE_VALUE(x) ((x < 0) ? -x : x)

#define TO_LOWER_CASE(c) ((c >= 'A' && c <= 'Z') ? (c + 32) : c)

#define MAX_OF_THREE(x, y, z) (((x > y) && (x > z)) ? x : ((y > x) && (y > z)) ? y \
                                                                               : z)

int main()
{
    int a = 10, b = -5, c = 20;
    float d = -3.5;
    char ch = 'C';

    printf("Arithmetic mean of %d and %d: %d\n", a, b, ARITHMETIC_MEAN(a, b));

    printf("Absolute value of %f: %f\n", d, ABSOLUTE_VALUE(d));

    printf("Lower case of %c: %c\n", ch, TO_LOWER_CASE(ch));

    printf("Max of %d, %d, %d: %d\n", a, b, c, MAX_OF_THREE(a, b, c));

    return 0;
}