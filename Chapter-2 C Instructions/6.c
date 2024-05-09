#include <stdio.h>

int main()
{
    int c = 3, d = 5;
    printf("Before interchange: ");
    printf("c:%d d:%d", c, d);
    // int temp = c;
    // c = d;
    // d = temp;
    c = c + d;
    d = c - d;
    c = c - d;
    printf("After interchange: ");
    printf("c:%d d:%d", c, d);
    return 0;
}