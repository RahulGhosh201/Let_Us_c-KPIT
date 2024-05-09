#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int countDigits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

bool isArmstrong(int n)
{
    int x = n;
    int cnt = countDigits(n);
    int ans = 0;
    while (x != 0)
    {
        int rem = x % 10;
        ans += pow(rem, cnt);
        x /= 10;
    }
    if (ans == n)
        return true;
    else
        return false;
}

int main()
{
    printf("The Armstring numbers are: ");
    for (int i = 1; i <= 500; i++)
    {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    return 0;
}