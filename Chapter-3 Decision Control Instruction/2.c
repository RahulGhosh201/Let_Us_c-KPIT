// If ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.

#include <stdio.h>

int main()
{
    int ram = 15, shyam = 10, ajay = 20;
    if (ram < shyam && ram < ajay)
    {
        printf("Ram is the youngest of the three");
    }
    else if (shyam < ram && shyam < ajay)
    {
        printf("Shyam is the youngest of the three");
    }
    else
    {
        printf("Ajay is the youngest of the three");
    }
    return 0;
}