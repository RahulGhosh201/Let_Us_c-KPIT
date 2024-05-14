// A record contains name of cricketer, his age, number of test
// matches that he has played and the average runs that he has
// scored. Create an array of structures to hold records of 20 such
// cricketers and then write a program to read these records and
// arrange them in ascending order by average runs. Use the qsort( )
// standard library function.

#include <stdio.h>
#include <stdlib.h>

struct player
{
    char name[20];
    int age;
    int no_of_test;
    float average;
};

int compare(void const *a, void const *b)
{
    struct player *playerA = (struct player *)a;
    struct player *playerB = (struct player *)b;
    return (playerA->average > playerB->average) - (playerA->average < playerB->average);
}

int main()
{
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    struct player players[n];

    for (int i = 0; i < n; i++)
    {
        printf("Player %d details: \n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("age: ");
        scanf("%d", &players[i].age);
        printf("Number of tests: ");
        scanf("%d", &players[i].no_of_test);
        printf("Average score: ");
        scanf("%f", &players[i].average);
    }

    qsort(players, n, sizeof(struct player), compare);

    printf("After rearranging player details: \n");

    for (int i = 0; i < n; i++)
    {
        printf("Player %d details: \n", i + 1);
        printf("Name: ");
        printf("%s\n", players[i].name);
        printf("age: ");
        printf("%d\n", players[i].age);
        printf("Number of tests: ");
        printf("%d\n", players[i].no_of_test);
        printf("Average score: ");
        printf("%.2f\n", players[i].average);
    }
    return 0;
}