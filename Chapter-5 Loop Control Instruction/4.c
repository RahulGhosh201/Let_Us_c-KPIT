// Write a program to enter numbers till the user wants. At the end it
// should display the count of positive, negative and zeros entered.

#include <stdio.h>

int main()
{
    int choice = 1, num = 0;
    int cntPos = 0, cntNeg = 0, cntZero = 0;

    while (choice)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0)
            cntZero++;
        else if (num < 0)
            cntNeg++;
        else
            cntPos++;
        printf("Enter '1' if you want to continue and Enter '0' if you don't.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    printf("Count of positive numbers: %d\n", cntPos);
    printf("Count of zero: %d\n", cntZero);
    printf("Count of negative numbers: %d\n", cntNeg);

    return 0;
}