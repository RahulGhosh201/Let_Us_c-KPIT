#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return 1;
    }

    destFile = fopen(destFilename, "w");
    if (destFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(toupper(ch), destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied and converted successfully.\n");

    return 0;
}

// Contents of sourceFilename.txt:
// Hello, this is a test file.
// It contains multiple lines.
// This is the third line.

// Output:
// Enter the source filename: sourceFilename.txt
// Enter the destination filename: destFilename.txt
// File copied and converted successfully.

// Contents of destFilename.txt:
// HELLO, THIS IS A TEST FILE.
// IT CONTAINS MULTIPLE LINES.
// THIS IS THE THIRD LINE.
