#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char text[] = "This is some text that will be written to the file.\n";
    printf("Enter the file name: ");
    scanf("%s", filename);
    file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Cannot open file %s\n", filename);
        return 1;
    }
    fputs(text, file);

    fclose(file);

    printf("Text written to file %s\n", filename);

    return 0;
}

// Content of newfile.txt:
// This is some text that will be written to the file.
