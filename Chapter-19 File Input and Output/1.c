#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_RECORDS 1000

typedef struct
{
    char name[MAX_NAME_LENGTH];
    int age;
} Student;

int compareByName(const void *a, const void *b)
{
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    return strcmp(studentA->name, studentB->name);
}

int main()
{
    FILE *file;
    Student students[MAX_RECORDS];
    int count = 0;

    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(file, "%s %d", students[count].name, &students[count].age) != EOF)
    {
        count++;
        if (count >= MAX_RECORDS)
        {
            printf("Reached maximum number of records.\n");
            break;
        }
    }
    fclose(file);

    qsort(students, count, sizeof(Student), compareByName);

    printf("Sorted student records:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s %d\n", students[i].name, students[i].age);
    }

    return 0;
}

// Content of students.txt
// Alice 20
// Bob 22
// Charlie 19
// David 21
// Eve 20
// Frank 23
// Grace 22
// Heidi 20
// Ivan 21
// Judy 19

// Output:
// Sorted student records:
// Alice 20
// Bob 22
// Charlie 19
// David 21
// Eve 20
// Frank 23
// Grace 22
// Heidi 20
// Ivan 21
// Judy 19
