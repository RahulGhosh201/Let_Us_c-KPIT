#include <stdio.h>
#include <string.h>  //for strlen()
#include <ctype.h>   //for tolower()
#include <stdbool.h> //for bool
#include <stdlib.h>  //for malloc

bool removeAble(char ch)
{
    char c = tolower(ch);
    if (c == 't' || c == 'h' || c == 'e')
    {
        return true;
    }

    return false;
}

// void removeThe(char *str)
// { // pass as *str not str[] because here I am trying to manipulate the given string
//     int n = strlen(str);

//     for (int i = 0; i < n; i++)
//     {
//         char ch = tolower(str[i]);
//         // if ch is 't' and the next two characters are 'h' and 'e'
//         if (ch == 't' && i + 2 < n && str[i + 1] == 'h' && str[i + 2] == 'e')
//         {
//             // shifting characters
//             for (int j = i; j < n - 2; j++)
//             {
//                 str[j] = str[j + 3];
//             }

//             // adjusting the length of the string
//             n -= 3;

//             // moving back one position to recheck for consecutive occurences of "the"
//             i--;
//         }
//     }

//     // terminating the string properly
//     str[n] = '\0';
// }

char *removeThe(char *str)
{
    int n = strlen(str);
    char *s = (char *)malloc((n + 1) * sizeof(char)); // allocate memory for the new string
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (!removeAble(str[i]))
        {
            s[k++] = str[i];
        }
    }
    s[k] = '\0';
    return s;
}

int main()
{
    char str[] = "The a bb a The bcd ";
    printf("Original string: %s\n", str);

    // removeThe(str);
    char *ans = removeThe(str);

    printf("String after removing 'the': %s\n", ans);
    return 0;
}

// creating a character array with dynamic memory size
//  char *S=(char*)malloc((n+1)*sizeof(char));