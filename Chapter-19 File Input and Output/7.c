#include <stdio.h>
#include <stdlib.h>

struct donor
{
    char name[21];
    char address[41];
    int age;
    int bloodType;
};

void printDonorsBelow25WithType2()
{
    FILE *file;
    struct donor d;

    file = fopen("blood_donors.dat", "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    while (fread(&d, sizeof(struct donor), 1, file) == 1)
    {
        if (d.age < 25 && d.bloodType == 2)
        {
            printf("Name: %s\n", d.name);
            printf("Address: %s\n", d.address);
            printf("Age: %d\n", d.age);
            printf("Blood Type: %d\n", d.bloodType);
            printf("\n");
        }
    }

    fclose(file);
}

int main()
{
    printDonorsBelow25WithType2();
    return 0;
}

// Contents of blood_donors.dat : 1. { "Alice Smith", "123 Main St, City", 20, 1 }
// 2. { "Bob Johnson", "456 Elm St, Town", 30, 2 }
// 3. { "Charlie Brown", "789 Oak St, Village", 22, 2 }
// 4. { "David Williams", "101 Pine St, Countryside", 24, 3 }
// 5. {"Eve Davis", "202 Cedar St, Suburb", 18, 2}

// Output:
// Donors below 25 with blood type 2:
// Name: Alice Smith
// Address: 123 Main St, City
// Age: 20
// Blood Type: 1

// Name: Eve Davis
// Address: 202 Cedar St, Suburb
// Age: 18
// Blood Type: 2
