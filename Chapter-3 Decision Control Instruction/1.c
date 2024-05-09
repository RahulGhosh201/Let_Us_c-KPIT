// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine whether
// the original and reversed numbers are equal or not.

#include <stdio.h>

int rev(int n)
{
    int ans;
    while (n != 0)
    {
        int rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n = 12321;
    int ans = rev(n);
    if (n == ans)
    {
        printf("Original and reversed numbers are equal");
    }
    else
    {
        printf("Original and reversed numbers are not equal");
    }
}