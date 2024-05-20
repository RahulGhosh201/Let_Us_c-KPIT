#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int roll_number;
    char name[50];
};

void updateStudentList(FILE *masterFile, FILE *transactionFile, FILE *updatedFile)
{
    struct student masterStudent, transactionStudent;
    int masterEOF = 0, transactionEOF = 0;
    fread(&masterStudent, sizeof(struct student), 1, masterFile);
    fread(&transactionStudent, sizeof(struct student), 1, transactionFile);

    while (!masterEOF && !transactionEOF)
    {
        if (masterStudent.roll_number < transactionStudent.roll_number)
        {
            fwrite(&masterStudent, sizeof(struct student), 1, updatedFile);
            if (fread(&masterStudent, sizeof(struct student), 1, masterFile) != 1)
            {
                masterEOF = 1;
            }
        }
        else if (masterStudent.roll_number > transactionStudent.roll_number)
        {
            fwrite(&transactionStudent, sizeof(struct student), 1, updatedFile);
            if (fread(&transactionStudent, sizeof(struct student), 1, transactionFile) != 1)
            {
                transactionEOF = 1;
            }
        }
        else
        {
            if (transactionStudent.name[0] == '*')
            {
                if (fread(&transactionStudent, sizeof(struct student), 1, transactionFile) != 1)
                {
                    transactionEOF = 1;
                }
            }
            else
            {
                fwrite(&transactionStudent, sizeof(struct student), 1, updatedFile);
                if (fread(&transactionStudent, sizeof(struct student), 1, transactionFile) != 1)
                {
                    transactionEOF = 1;
                }
            }
            if (fread(&masterStudent, sizeof(struct student), 1, masterFile) != 1)
            {
                masterEOF = 1;
            }
        }
    }
    while (!masterEOF)
    {
        fwrite(&masterStudent, sizeof(struct student), 1, updatedFile);
        if (fread(&masterStudent, sizeof(struct student), 1, masterFile) != 1)
        {
            masterEOF = 1;
        }
    }
    while (!transactionEOF)
    {
        fwrite(&transactionStudent, sizeof(struct student), 1, updatedFile);
        if (fread(&transactionStudent, sizeof(struct student), 1, transactionFile) != 1)
        {
            transactionEOF = 1;
        }
    }
}

int main()
{
    FILE *masterFile, *transactionFile, *updatedFile;
    masterFile = fopen("master.txt", "rb");
    transactionFile = fopen("transaction.txt", "rb");
    updatedFile = fopen("updated.txt", "wb");

    if (masterFile == NULL || transactionFile == NULL || updatedFile == NULL)
    {
        perror("Error opening files");
        return 1;
    }
    updateStudentList(masterFile, transactionFile, updatedFile);

    fclose(masterFile);
    fclose(transactionFile);
    fclose(updatedFile);

    printf("Updated file 'updated.txt' created successfully.\n");

    return 0;
}

// Content of master.txt:
// 1 Alice
// 2 Bob
// 3 Charlie
// 4 David
// 5 Eve

// Content of transaction.txt:
// 2 *
// 3 Delta
// 6 Frank

// Content of updated.txt:
// 1 Alice
// 3 Charlie
// 4 David
// 5 Eve
// 6 Frank
