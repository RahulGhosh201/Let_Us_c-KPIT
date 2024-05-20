#include <stdio.h>

int main()
{
    unsigned short int num, swapped_num;
    unsigned char byte1, byte2;

    printf("Enter an unsigned 16-bit integer: ");
    scanf("%hu", &num);
    byte1 = (num & 0xFF);
    byte2 = ((num >> 8) & 0xFF);
    swapped_num = (byte2 << 8) | byte1;

    printf("Original number: %hu\n", num);
    printf("Number after swapping bytes: %hu\n", swapped_num);

    return 0;
}

// Output:
// Enter an unsigned 16-bit integer: 12345

// Original number: 12345
// Number after swapping bytes: 17729
