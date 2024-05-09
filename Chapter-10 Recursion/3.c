// tower of hanoi using recursion
#include <stdio.h>

void moveDisk(int num_disks, char source, char destination)
{
    printf("Move disk %d from %c to %c \n", num_disks, source, destination);
}

void towerOfHanoi(int num_disks, char source, char auxiliary, char destination)
{
    if (num_disks == 1)
    {
        moveDisk(num_disks, source, destination);
        return;
    }

    towerOfHanoi(num_disks - 1, source, destination, auxiliary);
    moveDisk(num_disks, source, destination);
    towerOfHanoi(num_disks - 1, auxiliary, source, destination);
}

int main()
{
    int num_disks;
    printf("Enter number of disks: ");
    scanf("%d", &num_disks);

    printf("Tower of Hanoi solution with %d disks: \n", num_disks);
    towerOfHanoi(num_disks, 'A', 'B', 'C');
    return 0;
}