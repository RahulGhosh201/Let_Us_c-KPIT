#include <stdio.h>

unsigned char setOddBits(unsigned char num)
{
    for (int i = 0; i < 8; i += 2)
    {
        num |= (1 << i); // Set the i-th bit to 1
    }
    return num;
}

int main()
{
    unsigned char num;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Before setting odd bits to 1: %u\n", num);

    num = setOddBits(num);

    printf("After setting odd bits to 1: %u\n", num);

    return 0;
}

// Enter an 8-bit number (0-255): 170
// Before setting odd bits to 1: 170
// After setting odd bits to 1: 255
