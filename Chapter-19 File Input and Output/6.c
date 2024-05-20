#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d, m, y;
};

struct employee
{
    int empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
};

void sortEmployees(struct employee arr[], int n)
{
    int i, j;
    struct employee temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].join_date.y > arr[j + 1].join_date.y ||
                (arr[j].join_date.y == arr[j + 1].join_date.y &&
                 (arr[j].join_date.m > arr[j + 1].join_date.m ||
                  (arr[j].join_date.m == arr[j + 1].join_date.m &&
                   arr[j].join_date.d > arr[j + 1].join_date.d))))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void readAndWriteRecords()
{
    FILE *sourceFile, *targetFile;
    struct employee employees[10];
    int i;
    sourceFile = fopen("employee_records.dat", "rb");
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return;
    }

    fread(employees, sizeof(struct employee), 10, sourceFile);

    fclose(sourceFile);

    sortEmployees(employees, 10);

    targetFile = fopen("sorted_employee_records.dat", "wb");
    if (targetFile == NULL)
    {
        perror("Error opening target file");
        return;
    }

    fwrite(employees, sizeof(struct employee), 10, targetFile);

    fclose(targetFile);

    printf("Employee records sorted and written to file successfully.\n");
}

int main()
{
    readAndWriteRecords();
    return 0;
}

// Content of employee_records.dat : 1. { {1, 1, 2020}, "John Doe", {1, 1, 2020}, 50000.00 }
// 2. { {2, 2, 2021}, "Jane Smith", {2, 2, 2021}, 60000.00 }
// 3. { {3, 3, 2019}, "Alice Johnson", {3, 3, 2019}, 45000.00 }
// 4. { {4, 4, 2022}, "Bob Brown", {4, 4, 2022}, 70000.00 }
// 5. { {5, 5, 2018}, "Eve Williams", {5, 5, 2018}, 40000.00 }
// 6. { {6, 6, 2023}, "Michael Wilson", {6, 6, 2023}, 75000.00 }
// 7. { {7, 7, 2017}, "Sarah Jones", {7, 7, 2017}, 38000.00 }
// 8. { {8, 8, 2024}, "David Brown", {8, 8, 2024}, 80000.00 }
// 9. { {9, 9, 2016}, "Karen Davis", {9, 9, 2016}, 35000.00 }
// 10. {{10, 10, 2025}, "Peter Miller", {10, 10, 2025}, 85000.00}

// Content of sorted_employee_records.dat:
// 1. { {9, 9, 2016}, "Karen Davis", {9, 9, 2016}, 35000.00 }
// 2. { {7, 7, 2017}, "Sarah Jones", {7, 7, 2017}, 38000.00 }
// 3. { {5, 5, 2018}, "Eve Williams", {5, 5, 2018}, 40000.00 }
// 4. { {3, 3, 2019}, "Alice Johnson", {3, 3, 2019}, 45000.00 }
// 5. { {1, 1, 2020}, "John Doe", {1, 1, 2020}, 50000.00 }
// 6. { {2, 2, 2021}, "Jane Smith", {2, 2, 2021}, 60000.00 }
// 7. { {4, 4, 2022}, "Bob Brown", {4, 4, 2022}, 70000.00 }
// 8. { {6, 6, 2023}, "Michael Wilson", {6, 6, 2023}, 75000.00 }
// 9. { {8, 8, 2024}, "David Brown", {8, 8, 2024}, 80000.00 }
// 10. { {10, 10, 2025}, "Peter Miller", {10, 10, 2025}, 85000.00 }
