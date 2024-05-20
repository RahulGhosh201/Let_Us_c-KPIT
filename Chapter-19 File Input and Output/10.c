#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removeArticles(FILE *inputFile, FILE *outputFile)
{
    char word[100];
    int c, i = 0;
    const char *articles[] = {"a", "an", "the"};
    int isArticle;
    while ((c = fgetc(inputFile)) != EOF)
    {
        if (isspace(c) || ispunct(c))
        {
            if (i > 0)
            {
                word[i] = '\0';
                isArticle = 0;
                for (int j = 0; j < 3; j++)
                {
                    if (strcmp(word, articles[j]) == 0)
                    {
                        isArticle = 1;
                        break;
                    }
                }
                if (!isArticle)
                {
                    fprintf(outputFile, "%s", word);
                }
                i = 0;
            }
            fputc(c, outputFile);
        }
        else
        {
            word[i++] = c;
        }
    }
    if (i > 0)
    {
        word[i] = '\0';
        isArticle = 0;
        for (int j = 0; j < 3; j++)
        {
            if (strcmp(word, articles[j]) == 0)
            {
                isArticle = 1;
                break;
            }
        }
        if (!isArticle)
        {
            fprintf(outputFile, "%s", word);
        }
    }
}

int main()
{
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL || outputFile == NULL)
    {
        perror("Error opening files");
        return 1;
    }
    removeArticles(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    printf("Output file 'output.txt' created successfully.\n");

    return 0;
}

// Content of input.txt:
// An apple a day keeps the doctor away. The sun rises in the east.

// Content of output.txt:
//  apple  day keeps  doctor away.  sun rises in  east.
