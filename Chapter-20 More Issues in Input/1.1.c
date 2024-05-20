#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination file name: ");
    scanf("%s", destFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL)
    {
        printf("Cannot open file %s\n", sourceFilename);
        return 1;
    }
}
// Content of source.txt:
// This is the source file.
// It contains some text.

// Content of destination.txt:
// This is the source file.
// It contains some text.
