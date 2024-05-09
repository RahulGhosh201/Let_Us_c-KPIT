// 1 4 9 16 25 using a dynamic array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr;
    printf("Enter n: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i * i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}