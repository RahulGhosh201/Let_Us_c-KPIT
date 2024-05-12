// A Credit Card number is usually a 16-digit number. A valid Credit
// Card number would satisfy a rule explained below with the help of a
// dummy Credit Card number—4567 1234 5678 9129. Start with the
// rightmost - 1 digit and multiply every other digit by 2.
// 4 5 6 7 1 2 3 4 5 6 7 8 9 1 2 9
// 8 12 2 6 10 14 18 4
// Then subtract 9 from numbers that are larger than 10. Thus, we get:
// 8 3 2 6 1 5 9 4
// Add them all up to get 38.
// Add all the other digits (5, 7, 2, 4, 6, 8, 1, 9) to get 42.
// Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card
// number is valid.
// Write a program that receives a Credit Card number and checks
// using the above rule whether the Credit Card number is valid.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char *str)
{
    int n = strlen(str);
    int sum = 0;

    // Iterate over the digits from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = str[i] - '0'; // Convert character to integer

        // Double every other digit starting from the second rightmost
        if ((n - i) % 2 == 0)
        {
            digit *= 2;

            // If the result is greater than 9, subtract 9
            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit; // Add the digit (doubled if necessary) to the sum
    }

    // Check if the sum is divisible by 10
    return sum % 10 == 0;
}

int main()
{
    char str[20];
    printf("Enter a credit card number: ");
    scanf("%s", str);

    if (isValid(str))
    {
        printf("%s is a valid Credit Card number\n", str);
    }
    else
    {
        printf("%s is an invalid Credit Card number\n", str);
    }

    return 0;
}
