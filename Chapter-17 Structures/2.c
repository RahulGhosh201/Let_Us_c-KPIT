// Create a structure that can contain data of customers in a bank. The
// data to be stored is Account number, Name and Balance in account.
// Assume maximum of 200 customers in the bank.
// (1) Define a function to print the Account number and name of
// each customer with balance below Rs. 1000.
// (2) If a customer requests for withdrawal or deposit, it should
// receive as input Account number, amount and code (1 for
// deposit, 0 for withdrawal).
// Define a function that prints a message, “The balance is
// insufficient for the specified withdrawal”, if on withdrawal the
// balance falls below Rs. 1000.

#include <stdio.h>

struct customer
{
    int acc_no;
    char name[20];
    float balance;
};

void soln1(struct customer customers[], int n)
{
    printf("Details of the customers with balance below 1000:\n");
    for (int i = 0; i < n; i++)
    {
        if (customers[i].balance < 1000)
        {
            printf("Account number: %d\n", customers[i].acc_no);
            printf("Name: %s\n", customers[i].name);
        }
    }
    printf("There is no customer with balance below 1000\n");
}

void soln2(struct customer customers[], int n, int ano, int amount, int code)
{
    for (int i = 0; i < n; i++)
    {
        if (customers[i].acc_no == ano)
        {
            customers[i].balance -= amount;
            if (customers[i].balance < 1000)
            {
                printf("The balance is insufficient for the specified withdrawal");
            }
            else
            {
                printf("You have withdrawn %d and your remaining balance is %d", amount, customers[i].balance);
            }
        }
    }
    printf("Invalid account number\n");
}

int main()
{
    printf("Enter number of customers: ");
    int n;
    scanf("%d", &n);

    struct customer customers[n];
    printf("Enter customer details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter customer %d account number:\n", i + 1);
        scanf("%d", &customers[i].acc_no);
        printf("Enter customer %d name:\n", i + 1);
        scanf(" %[^\n]", customers[i].name);
        printf("Enter customer %d balance:\n", i + 1);
        scanf("%f", &customers[i].balance);
    }

    soln1(customers, n);
    printf("Enter 1 for deposit and Enter 0 for withdrawl\n");
    int code;
    scanf("%d", &code);
    printf("Enter the amount of withdrawl: \n");
    int amount = 0;
    scanf("%d", &amount);
    printf("Enter your account no: \n");
    int ano = 0;
    scanf("%d", &ano);
    if (code == 0)
        soln2(customers, n, ano, amount, code);
    else
        printf("You choose to make a deposit of amount %d\n", amount);

    return 0;
}