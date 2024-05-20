#include <stdio.h>

int main()
{
    unsigned char num, swapped_num;
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);
    swapped_num = ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);

    printf("Original number: %u\n", num);
    printf("Number after swapping nibbles: %u\n", swapped_num);

    return 0;
}

// Enter an 8 - bit number(0 - 255) : 240
// Original number: 240
// Number after swapping nibbles: 15
