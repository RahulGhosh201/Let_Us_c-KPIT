#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

void mergeFiles(const char *file1, const char *file2, const char *outputFile)
{
    FILE *fp1, *fp2, *fpOut;
    char line1[MAX_LINE_LENGTH];
    char line2[MAX_LINE_LENGTH];
    int read1, read2;

    fp1 = fopen(file1, "r");
    if (fp1 == NULL)
    {
        perror("Error opening file 1");
        exit(1);
    }

    fp2 = fopen(file2, "r");
    if (fp2 == NULL)
    {
        perror("Error opening file 2");
        fclose(fp1);
        exit(1);
    }

    fpOut = fopen(outputFile, "w");
    if (fpOut == NULL)
    {
        perror("Error opening output file");
        fclose(fp1);
        fclose(fp2);
        exit(1);
    }

    while (1)
    {
        read1 = (fgets(line1, MAX_LINE_LENGTH, fp1) != NULL);
        read2 = (fgets(line2, MAX_LINE_LENGTH, fp2) != NULL);
        if (read1)
        {
            fputs(line1, fpOut);
        }
        if (read2)
        {
            fputs(line2, fpOut);
        }
        if (!read1 && !read2)
        {
            break;
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fpOut);
}

int main()
{
    char file1[100], file2[100], outputFile[100];

    printf("Enter the first filename: ");
    scanf("%s", file1);
    printf("Enter the second filename: ");
    scanf("%s", file2);
    printf("Enter the output filename: ");
    scanf("%s", outputFile);

    mergeFiles(file1, file2, outputFile);

    printf("Files merged successfully.\n");

    return 0;
}

// Output:
// Enter the first filename: file1.txt
// Enter the second filename: file2.txt
// Enter the output filename: outputFile.txt

// Content of file1.txt:
// Line 1 from file 1
// Line 2 from file 1
// Line 3 from file 1

// Content of file2.txt:
// Line 1 from file 2
// Line 2 from file 2

// Content of outputFile.txt:
// Line 1 from file 1
// Line 1 from file 2
// Line 2 from file 1
// Line 2 from file 2
// Line 3 from file 1
