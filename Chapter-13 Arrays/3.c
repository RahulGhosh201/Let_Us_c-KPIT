// Write a program using pointers to find the smallest number in an
// array of 25 integers

#include <stdio.h>

#define MIN(a, b) (a < b) ? a : b

int smallest(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        ans = MIN(arr[i], ans);
    }
    return ans;
}

int main()
{
    int arr[10] = {8, -2, 1, 5, 10, -5, 15, 6, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Smallest in the array: %d", smallest(arr, n));
    return 0;
}