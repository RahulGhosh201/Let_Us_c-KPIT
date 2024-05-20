#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <old word> <new word> <filename>\n", argv[0]);
        return 1;
    }
    char *oldWord = argv[1];
    char *newWord = argv[2];
    char *filename = argv[3];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    char buffer[MAX_LEN];
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);
    int bytesRead;

    while ((bytesRead = fread(buffer, 1, MAX_LEN, file)) > 0)
    {
        for (int i = 0; i < bytesRead - oldWordLen; ++i)
        {
            if (strncmp(buffer + i, oldWord, oldWordLen) == 0)
            {
                memcpy(buffer + i, newWord, newWordLen);
                i += newWordLen - 1;
            }
        }
        fwrite(buffer, 1, bytesRead, stdout);
    }

    fclose(file);
    return 0;
}

// gcc change.c - o change
// ./change <old word> <new word> <filename>
