#include <stdio.h>

int modify(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 3;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    modify(arr, n);
    printf("Modified array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}