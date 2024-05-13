// Write a program to count the number of occurrences of any two
// vowels in succession in a line of text. For example, in the following
// sentence:
// “Please read this application and give me gratuity”
// such occurrences are ea, ea, ui.

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isVowel(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
}

int cntOccurences(char *str)
{
    int n = strlen(str);
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (isVowel(str[i]) && isVowel(str[i + 1]))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    char str[] = "Please read this application and give me gratuity";
    printf("Number of occurences of any two vowels in succession are: %d", cntOccurences(str));
    return 0;
}