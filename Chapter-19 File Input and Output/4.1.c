#include <stdio.h>
#include <stdlib.h>

#define OFFSET 128

void encryptOffsetCipher(const char *sourceFile, const char *targetFile)
{
    FILE *src, *tgt;
    int ch;

    src = fopen(sourceFile, "r");
    if (src == NULL)
    {
        perror("Error opening source file");
        exit(1);
    }

    tgt = fopen(targetFile, "w");
    if (tgt == NULL)
    {
        perror("Error opening target file");
        fclose(src);
        exit(1);
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch + OFFSET, tgt);
    }

    fclose(src);
    fclose(tgt);

    printf("File encrypted successfully using Offset Cipher.\n");
}

void decryptOffsetCipher(const char *sourceFile, const char *targetFile)
{
    FILE *src, *tgt;
    int ch;

    src = fopen(sourceFile, "r");
    if (src == NULL)
    {
        perror("Error opening source file");
        exit(1);
    }

    tgt = fopen(targetFile, "w");
    if (tgt == NULL)
    {
        perror("Error opening target file");
        fclose(src);
        exit(1);
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch - OFFSET, tgt);
    }

    fclose(src);
    fclose(tgt);

    printf("File decrypted successfully using Offset Cipher.\n");
}

int main()
{
    char sourceFile[100], targetFile[100];
    int choice;

    printf("Enter the source filename: ");
    scanf("%s", sourceFile);
    printf("Enter the target filename: ");
    scanf("%s", targetFile);

    printf("Enter 1 for encryption or 2 for decryption: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        encryptOffsetCipher(sourceFile, targetFile);
    }
    else if (choice == 2)
    {
        decryptOffsetCipher(sourceFile, targetFile);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}

// Content of sourceFile.txt:
// Hello, World !

// Content of targetFile.txt:
// ÈÅÒÌÌÂläÎÇÎÕá

// Content of decryptedFile.txt:
// Hello, World!
