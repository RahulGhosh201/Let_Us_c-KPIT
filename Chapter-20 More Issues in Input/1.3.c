#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;
    printf("Enter the file name: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Cannot open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}

// Content of existingfile.txt:
// This is some text in an existing file.
// It will be displayed by the program.
