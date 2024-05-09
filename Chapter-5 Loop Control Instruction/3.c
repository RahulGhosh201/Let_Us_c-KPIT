//  Write a program for a matchstick game being played between the
// computer and a user. Your program should ensure that the
// computer always wins. Rules for the game are as follows:
//  There are 21 matchsticks.
//  The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
//  After the person picks, the computer does its picking.
//  Whoever is forced to pick up the last matchstick loses the game.

#include <stdio.h>

int main()
{
    int matchSticks = 21;
    int playerChoice, computerChoice;

    printf("Welcome to the MAtchstick game!\n");
    printf("Rules: There are 21 matchsticks.\n");
    printf("You and the computer take turns picking 1, 2, 3, or 4 matchsticks.\n");
    printf("The player who picks the last matchstick loses the game.\n");

    while (matchSticks > 1)
    {
        printf("Remaining matchsticks: %d\n", matchSticks);
        printf("Your turn: Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &playerChoice);
        if (playerChoice < 1 || playerChoice > 4 || playerChoice > matchSticks)
        {
            printf("Invalid choice. Please pick between 1 and 4 matchsticks. \n");
            continue;
        }
        matchSticks -= playerChoice;
        computerChoice = 5 - playerChoice;
        printf("Computer picks %d matchsticks. \n", computerChoice);
        matchSticks -= computerChoice;
    }

    printf("Sorry you loose.\n");
    return 0;
}

// in this case as total match sticks are 21 and the computer is making sure in each turn the (player choice + computer choice =5) so 5*4=20, so te player always have to peek the last time and that's how the player always looses.