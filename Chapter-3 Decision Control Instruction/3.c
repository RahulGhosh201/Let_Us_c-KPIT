// Write a program to check whether a triangle is valid or not, if three
// angles of the triangle are entered through the keyboard. A triangle
// is valid if the sum of all the three angles is equal to 180 degrees.

#include <stdio.h>
#include <stdbool.h>

bool soln(int a, int b, int c)
{
    if (a + b + c == 180)
        return true;
    else
        return false;
}

int main()
{
    int a = 45, b = 45, c = 90;
    if (soln(a, b, c))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid");
    }
}