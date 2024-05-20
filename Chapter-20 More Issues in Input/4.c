#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <switch> <n> <m>\n", argv[0]);
        return 1;
    }

    char *switchCase = argv[1];
    int n = atoi(argv[2]);
    int m = atoi(argv[3]);
    int result;
    bool comparison = false;

    if (strcmp(switchCase, "+") == 0)
    {
        result = n + m;
    }
    else if (strcmp(switchCase, "-") == 0)
    {
        result = n - m;
    }
    else if (strcmp(switchCase, "*") == 0)
    {
        result = n * m;
    }
    else if (strcmp(switchCase, "/") == 0)
    {
        if (m != 0)
        {
            result = n / m;
        }
        else
        {
            printf("Error: Division by zero\n");
            return 1;
        }
    }
    else if (strcmp(switchCase, "==") == 0)
    {
        comparison = n == m;
    }
    else if (strcmp(switchCase, "!=") == 0)
    {
        comparison = n != m;
    }
    else if (strcmp(switchCase, ">") == 0)
    {
        comparison = n > m;
    }
    else if (strcmp(switchCase, "<") == 0)
    {
        comparison = n < m;
    }
    else if (strcmp(switchCase, ">=") == 0)
    {
        comparison = n >= m;
    }
    else if (strcmp(switchCase, "<=") == 0)
    {
        comparison = n <= m;
    }
    else
    {
        printf("Invalid switch case\n");
        return 1;
    }

    if (comparison)
    {
        printf("True\n");
    }
    else if (!comparison && (strcmp(switchCase, "==") == 0 || strcmp(switchCase, "!=") == 0 ||
                             strcmp(switchCase, ">") == 0 || strcmp(switchCase, "<") == 0 ||
                             strcmp(switchCase, ">=") == 0 || strcmp(switchCase, "<=") == 0))
    {
        printf("False\n");
    }
    else
    {
        printf("%d\n", result);
    }

    return 0;
}

// + 5 3
// 8

// == 5 5
// True

// < 10 5
// False

// / 10 3
// 3

// != 5 3
// True
