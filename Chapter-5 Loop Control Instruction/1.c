#include <stdio.h>

int main()
{
    int asciiValue = 0;
    printf("ASCII Values and their Equivalent Characters:\n");
    while (asciiValue <= 255)
    {
        printf("ASCII value: %d, Characters:%c\n", asciiValue, asciiValue);
        asciiValue++;
    }
    return 0;
}