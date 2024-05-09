// Given three variables x, y, z, write a function to circularly shift their
// values to right. In other words, if x = 5, y = 8, z = 10, after circular
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
// circularly shift values

#include <stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int x = 5, y = 8, z = 10;
    printf("Before circularly shifting values: %d, %d, %d\n", x, y, z);
    swap(&x, &y);
    swap(&y, &z);
    swap(&z, &x);
    printf("After circularly shifting values: %d, %d, %d\n", x, y, z);
    return 0;
}