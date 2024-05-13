// Write a program that stores a set of names of individuals and
// abbreviates the first and middle name to their first letter

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *abbrevation(char *s)
{
    int n = strlen(s);
    char *str = (char *)malloc((n + 1) * sizeof(char));
    int k = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            cnt++;
            str[k++] = s[i];
            str[k++] = ' ';
        }
        if (cnt == 3)
        {
            str[k++] = s[i];
        }
    }
    str[k] = '\0';
    return str;
}

int main()
{
    int n = 0;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char names[n][20];
    printf("Enter the names: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            scanf("%s", names[i][j]);
        }
    }

    printf("Abbreviated names are: ");
    for (int i = 0; i > n; i++)
    {
        char *str = abbrevation(names[i]);
        printf("%d. %s \n", i + 1, str);
    }
    return 0;
}