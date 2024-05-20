#include <stdio.h>
#include <string.h>

struct PolicyHolder
{
    unsigned int gender : 1;
    unsigned int is_minor : 1;
    unsigned int duration : 6;
    char policy_name[20];
};

void readPolicyHolder(struct PolicyHolder *holder)
{
    int gender, is_minor, duration;
    char policy_name[20];

    printf("Enter gender (0 for Female, 1 for Male): ");
    scanf("%d", &gender);
    printf("Enter minor status (0 for Major, 1 for Minor): ");
    scanf("%d", &is_minor);
    printf("Enter policy duration (0-63 years): ");
    scanf("%d", &duration);
    printf("Enter policy name: ");
    scanf("%s", policy_name);

    holder->gender = gender;
    holder->is_minor = is_minor;
    holder->duration = duration;
    strcpy(holder->policy_name, policy_name);
}

void displayPolicyHolder(struct PolicyHolder holder)
{
    printf("Gender: %s\n", holder.gender ? "Male" : "Female");
    printf("Minor: %s\n", holder.is_minor ? "Minor" : "Major");
    printf("Policy Duration: %d years\n", holder.duration);
    printf("Policy Name: %s\n", holder.policy_name);
}

int main()
{
    int n = 5;
    struct PolicyHolder holders[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for policy holder %d:\n", i + 1);
        readPolicyHolder(&holders[i]);
    }
    printf("\nPolicy Holders Information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nPolicy Holder %d:\n", i + 1);
        displayPolicyHolder(holders[i]);
    }

    return 0;
}

// Input:
// Enter details for policy holder 1:
// Enter gender (0 for Female, 1 for Male): 1
// Enter minor status (0 for Major, 1 for Minor): 0
// Enter policy duration (0-63 years): 15
// Enter policy name: LifeCover

// Enter details for policy holder 2:
// Enter gender (0 for Female, 1 for Male): 0
// Enter minor status (0 for Major, 1 for Minor): 1
// Enter policy duration (0-63 years): 10
// Enter policy name: HealthPlus

// Enter details for policy holder 3:
// Enter gender (0 for Female, 1 for Male): 1
// Enter minor status (0 for Major, 1 for Minor): 0
// Enter policy duration (0-63 years): 25
// Enter policy name: WealthBuilder

// Enter details for policy holder 4:
// Enter gender (0 for Female, 1 for Male): 0
// Enter minor status (0 for Major, 1 for Minor): 0
// Enter policy duration (0-63 years): 20
// Enter policy name: SecureFuture

// Enter details for policy holder 5:
// Enter gender (0 for Female, 1 for Male): 1
// Enter minor status (0 for Major, 1 for Minor): 0
// Enter policy duration (0-63 years): 30
// Enter policy name: PensionPlan

// Ouput:
// Policy Holders Information:

// Policy Holder 1:
// Gender: Male
// Minor: Major
// Policy Duration: 15 years
// Policy Name: LifeCover

// Policy Holder 2:
// Gender: Female
// Minor: Minor
// Policy Duration: 10 years
// Policy Name: HealthPlus

// Policy Holder 3:
// Gender: Male
// Minor: Major
// Policy Duration: 25 years
// Policy Name: WealthBuilder

// Policy Holder 4:
// Gender: Female
// Minor: Major
// Policy Duration: 20 years
// Policy Name: SecureFuture

// Policy Holder 5:
// Gender: Male
// Minor: Major
// Policy Duration: 30 years
// Policy Name: PensionPlan
