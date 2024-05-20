#include <stdio.h>

struct customer
{
    int accno;
    char name[30];
    float balance;
};

struct trans
{
    int accno;
    char trans_type;
    float amount;
};

void updateCustomerFile()
{
    FILE *customerFile, *transactionFile;
    struct customer cust;
    struct trans tr;

    customerFile = fopen("CUSTOMER.DAT", "r+");
    if (customerFile == NULL)
    {
        perror("Error opening CUSTOMER.DAT file");
        return;
    }

    transactionFile = fopen("TRANSACTIONS.DAT", "r");
    if (transactionFile == NULL)
    {
        perror("Error opening TRANSACTIONS.DAT file");
        fclose(customerFile);
        return;
    }

    while (fread(&tr, sizeof(struct trans), 1, transactionFile) == 1)
    {
        rewind(customerFile);
        while (fread(&cust, sizeof(struct customer), 1, customerFile) == 1)
        {
            if (cust.accno == tr.accno)
            {
                if (tr.trans_type == 'D')
                {
                    cust.balance += tr.amount;
                }
                else if (tr.trans_type == 'W')
                {
                    if (cust.balance - tr.amount >= 100)
                    {
                        cust.balance -= tr.amount;
                    }
                    else
                    {
                        printf("Cannot withdraw. Minimum balance of 100 Rs. should remain.\n");
                    }
                }
                fseek(customerFile, -sizeof(struct customer), SEEK_CUR);
                fwrite(&cust, sizeof(struct customer), 1, customerFile);
                break;
            }
        }
    }

    fclose(customerFile);
    fclose(transactionFile);

    printf("Customer file updated successfully.\n");
}

int main()
{
    updateCustomerFile();
    return 0;
}

// Content of COSTOMER.DAT:
// 1 John Doe 1000.00
// 2 Jane Smith 2000.00
// 3 Alice Johnson 1500.00

// Content of TRANSACTIONS.DAT:
// 1 D 500.00
// 2 W 300.00
// 3 D 200.00

// Content of CUSTOMER.DAT(After update):
// 1 John Doe 1500.00
// 2 Jane Smith 1700.00
// 3 Alice Johnson 1700.00