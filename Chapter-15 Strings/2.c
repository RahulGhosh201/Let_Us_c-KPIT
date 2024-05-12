// To uniquely identify a book a 10-digit ISBN (International Standard
// Book Number) is used. The rightmost digit in ISBN is a checksum
// digit. This digit is determined from the other 9 digits using the
// condition that d1 + 2d2 + 3d3 + ... + 10d10 must be a multiple of 11
// (where di denotes the ith digit from the right). The checksum digit d1
// can be any value from 0 to 10: the ISBN convention is to use the
// value X to denote 10. Write a program that receives a 10-digit
// integer, computes the checksum, and reports whether the ISBN
// number is correct or not

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidISBN(char *isbn)
{
    if (strlen(isbn) != 10)
    {
        return false;
    }

    int checksum = 0;
    for (int i = 0; i < 10; i++)
    {
        int digit = isbn[i] - '0';
        checksum += (i + 1) * digit;
    }

    if (checksum % 11 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char isbn[11];
    printf("Enter a 10 digit ISBN: ");
    scanf("%s", isbn);

    if (isValidISBN(isbn))
        printf("The ISBN number is correct");
    else
        printf("The ISBN number is not correct");
    return 0;
}