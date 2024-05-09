// decimal to binary

#include <stdio.h>

// without recursion
// void decimalToBinary(int n)
// {
//     int binary[32];
//     int k = 0;
//     while (n != 0)
//     {
//         binary[k++] = n % 2;
//         n /= 2;
//     }

//     printf("Decimal: %d -> Binary: ");
//     for (int i = k - 1; i >= 0; i--)
//     {
//         printf("%d", binary[i]);
//     }
// }

// using recursion
void decimalToBinary(int n)
{
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    decimalToBinary(n);
}