#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isLower(char c)
{
    return (c >= 'a' && c <= 'z');
}

bool isSpecial(char c)
{
    if (!isalpha(c) && !isdigit(c))
        return true;
    else
        return false;
    // isalpha() determines if the caracter is character or not
    // isdigit() determines if the character is digit or not
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isLower(ch))
        printf("%c is a lowercase letter \n", ch);
    else if (isSpecial(ch))
        printf("%c is a special character", ch);
    else
        printf("%c is neither", ch);
    return 0;
}