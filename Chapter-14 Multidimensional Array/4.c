// Given an array p[ 5 ], write a function to shift it circularly left by two
// positions. Thus, if the original array is { 15, 30, 28, 19, 61 } then after
// shifting it will be { 28, 19, 61, 15, 30 } Call this function for a 4 x 5
// matrix and get its rows left shifted.

#include <stdio.h>

void circularShiftLeft(int arr[], int n, int k)
{
    // temporary array to store shifted elements
    int temp[n];

    // copy elements from arr to temp after circular shift
    for (int i = 0; i < n; i++)
    {
        temp[(i - k + n) % n] = arr[i];
    }

    // copy elements from temp back to arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void printArr(int matrix[][5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
    printf("Origianl matrix: ");
    printArr(matrix);

    // shift each rows of the matrix circularly to the left by two positions
    for (int i = 0; i < 4; i++)
    {
        circularShiftLeft(matrix[i], 5, 2);
    }

    printf("Shifted array: ");
    printArr(matrix);
    return 0;
}