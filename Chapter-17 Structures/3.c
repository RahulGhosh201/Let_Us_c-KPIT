// An automobile company has serial number for engine parts starting
// from AA0 to FF9. The other characteristics of parts are year of
// manufacture, material and quantity manufactured.
// (1) Create a structure to store information corresponding to a
// part.
// (2) Write a program to retrieve information on parts with serial
// numbers between BB1 and CC6.

#include <stdio.h>

struct part
{
    char serial_number[3];
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
};

void retrieveParts(struct part parts[], int n)
{
    printf("Information on parts with serial numbers between B1 and C3:\n");
    for (int i = 0; i < n; i++)
    {
        if ((parts[i].serial_number[0] >= 'B' && parts[i].serial_number[0] <= 'C') && (parts[i].serial_number[1] >= '1' && parts[i].serial_number[1] <= '3'))
        {
            printf("Serial number: %s\n", parts[i].serial_number);
            printf("Manufacturing year: %d\n", parts[i].year_of_manufacture);
            printf("Material of the part: %s\n", parts[i].material);
            printf("Manufacturing quantity: %d\n", parts[i].quantity_manufactured);
        }
    }
}

int main()
{
    int n;
    printf("Enter number of parts: ");
    scanf("%d", &n);
    struct part parts[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter part %d details: \n", i + 1);
        printf("Enter serial number: ");
        scanf(" %[^\n]", parts[i].serial_number);
        printf("Enter year of manufacturing: ");
        scanf("%d", &parts[i].year_of_manufacture);
        printf("Enter material: ");
        scanf(" %[^\n]", parts[i].material);
        printf("Enter manufacturing quantity of this part: ");
        scanf("%d", &parts[i].quantity_manufactured);
    }

    retrieveParts(parts, n);
    return 0;
}