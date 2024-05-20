#include <stdio.h>
#include <stdbool.h>

bool isSet(char *str)
{
    if (str[2] == '1' && str[5] == '1' && str[6] == '1')
    {
        return true;
    }
    return false;
}

int main()
{
    char str[8];
    printf("Enter an 8-bit number: ");
    fgets(str, sizeof(str), stdin);
    if (isSet(str))
        printf("It's valid");
    else
        printf("It's invalid");
    return 0;
}

// Output:
// Enter an 8-bit number: 10100110
// It's valid
