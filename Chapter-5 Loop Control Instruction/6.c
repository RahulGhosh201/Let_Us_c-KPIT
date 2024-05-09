// Write a program to find the range of a set of numbers entered
// through the keyboard. Range is the difference between the smallest
// and biggest number in the list

#include <stdio.h>

int soln(int arr[])
{
    int min = arr[0], max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    return abs(max - min);
}

int main()
{
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Range: %d\n", soln(arr));
    return 0;
}