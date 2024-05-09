#include <stdio.h>

void soln(int prevWidth, int prevHeight, int n)
{
    int newWidth = prevHeight;
    int newHeight = prevWidth / 2;
    printf("A%d: %d mm x %d mm\n", n, newWidth, newHeight);
}

int main()
{
    int width = 1189, height = 841;
    printf("A0: %d mm x %d mm\n", width, height);
    for (int i = 1; i <= 8; i++)
    {
        soln(width, height, i);
        width = height;
        height = width / 2;
    }
    return 0;
}