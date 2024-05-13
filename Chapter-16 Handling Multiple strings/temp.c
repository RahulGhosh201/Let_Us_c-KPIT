#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isTrespasser(char list[][20], char *name)
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(list[i], name) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char list[5][20];
    printf("Enter 5 names: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", list[i]);
    }
    printf("Enter your name: ");
    char name[10];
    scanf("%s", name);
    if (isTrespasser(list, name))
        printf("Welcome, you can enter the palace");
    else
        printf("Sorry, you are a trespasser");
    return 0;
}