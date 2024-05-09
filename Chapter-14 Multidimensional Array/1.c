#include <stdio.h>
#include <stdbool.h>

bool isSymmetric(int matrix[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }
    return true;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {2, 4, 5},
                        {3, 5, 6}};
    if (isSymmetric(matrix))
        printf("It's a square symmetric matrix");
    else
        printf("It's an asymmetric matrix");
    return 0;
}