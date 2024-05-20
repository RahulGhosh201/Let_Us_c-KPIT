#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void storeNamesToFile(char names[MAX_NAMES][MAX_NAME_LENGTH], int count)
{
    FILE *file;
    int i;
    file = fopen("student_names.txt", "w");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }
    for (i = 0; i < count; i++)
    {
        fprintf(file, "%s\n", names[i]);
    }

    fclose(file);

    printf("Names stored in file 'student_names.txt' successfully.\n");
}

void displayNthName(int n)
{
    FILE *file;
    char name[MAX_NAME_LENGTH];
    int count = 0;

    file = fopen("student_names.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    while (fgets(name, sizeof(name), file) != NULL)
    {
        count++;
        if (count == n)
        {
            printf("The %dth name in the list is: %s", n, name);
            break;
        }
    }

    fclose(file);
}

int main()
{
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int count = 0, n, i;

    printf("Enter the number of names: ");
    scanf("%d", &count);

    printf("Enter %d names:\n", count);
    for (i = 0; i < count; i++)
    {
        scanf("%s", names[i]);
    }

    storeNamesToFile(names, count);

    printf("\nEnter the value of n to display the nth name: ");
    scanf("%d", &n);

    displayNthName(n);

    return 0;
}

// input:
// 5
// Alice Bob Charlie David Eve
// 3

// content of student_names.txt:
// Alice
// Bob
// Charlie
// David
// Eve

// Output:
// Names stored in file 'student_names.txt' successfully.
// The 3th name in the list is: Charlie
