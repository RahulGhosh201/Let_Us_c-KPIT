// Create a structure called library to hold accession number, title of
// the book, author name, price of the book, and flag indicating
// whether book is issued or not. Write a menu-driven program that
// implements the working of a library. The menu options should be:
// 1. Add book information
// 2. Display book information
// 3. List all books of given author
// 4. List the title of book specified by accession number
// 5. List the count of books in the library
// 6. List the books in the order of accession number
// 7. Exit

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct library
{
    int accession_number;
    char title[20];
    float price;
    char author[20];
    int flag;
};

int compare(void const *a, void const *b)
{
    return (*(int *)a, *(int *)b);
}

void exitProgram()
{
    printf("Exiting the program. Goodbye\n");
}

void bookDetails(struct library *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Book %d\n", i + 1);
        printf("Accession number: %d\n", books[i].accession_number);
        printf("Title: %s\n", books[i].title);
        printf("Price: %.2f\n", books[i].price);
        printf("Author: %s\n", books[i].author);
        if (books[i].flag == 1)
            printf("Book is issued\n");
        else
            printf("Book is not issued\n");
    }
}

void addInfo(struct library *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter accession number: ");
        scanf("%d", &books[i].accession_number);
        printf("Enter title: ");
        scanf("%s", books[i].title);
        printf("Enter price: ");
        scanf("%f", &books[i].price);
        printf("Enter author name: ");
        scanf("%s", books[i].author);
        printf("Enter 1 if book is issued and Enter 0 if book is not issued: ");
        scanf("%d", &books[i].flag);
    }
}

void displayByAuthor(struct library *books, int n, char *author_name)
{
    printf("Book details of %s\n", author_name);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(books[i].author, author_name) == 0)
        {
            printf("Accession number: %d\n", books[i].accession_number);
            printf("Title: %s\n", books[i].title);
            printf("Price: %.2f\n", books[i].price);
            // printf("Author: %s\n",books[i].author);
            if (books[i].flag == 1)
                printf("Book is issued\n");
            else
                printf("Book is not issued\n");
        }
    }
}

void displayByAccession(struct library *books, int n, int accession_no)
{
    printf("Books having accession number: %d\n", accession_no);
    for (int i = 0; i < n; i++)
    {
        if (books[i].accession_number == accession_no)
        {
            // printf("Accession number: %d\n",books[i].accession_number);
            printf("Title: %s\n", books[i].title);
            printf("Price: %.2f\n", books[i].price);
            printf("Author: %s\n", books[i].author);
            if (books[i].flag == 1)
                printf("Book is issued\n");
            else
                printf("Book is not issued\n");
        }
    }
}

int main()
{
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct library books[n];
    int choice;
    do
    {
        printf("Enter-1 to Add book information \nEnter-2 to Display book information\nEnter-3 to List all books of given author \nEnter-4 to List the title of book specified by accession number \nEnter-5 to List the count of books in the library \nEnter-6 to List the books in the order of accession number\n Enter-7 to Exit\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addInfo(books, n);
            break;
        case 2:
            bookDetails(books, n);
            break;
        case 3:
            printf("Give the author name: ");
            char author_name[20];
            scanf("%s", author_name);
            displayByAuthor(books, n, author_name);
            break;
        case 4:
            printf("Give accession number: ");
            int accession;
            scanf("%d", &accession);
            displayByAccession(books, n, accession);
            break;
        case 5:
            printf("Number of books in the library: %d\n", n);
            break;
        case 6:
            printf("After rearranging the books in the order of accession number: \n");
            qsort(books, n, sizeof(struct library), compare);
            bookDetails(books, n);
            break;
        case 7:
            exitProgram();
            break;
        default:
            printf("Thank you for visiting our library\n");
        }
    } while (choice != 7);

    return 0;
}