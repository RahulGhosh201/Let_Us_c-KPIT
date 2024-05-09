// If an array arr contains n elements, then write a program to check if
// arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on

#include <stdio.h>

int soln(int *arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Ans: %d", soln(arr, n));
    return 0;
}