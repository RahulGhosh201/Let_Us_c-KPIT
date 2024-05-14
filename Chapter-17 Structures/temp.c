#include <stdio.h>

struct book
{
    char name[100];
    float price;
    int pages;
};

int main()
{
    int n = 0;
    printf("Enter no of books: ");
    scanf("%d", &n);
    struct book b[n];
    printf("Enter names, prices & no of pages of 3 books: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }
    printf("These are the book details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Book-%d\n", i + 1);
        printf("=======================");
        printf("Name: %s\n", b[i].name);
        printf("Price: %.2f\n", b[i].price);
        printf("Pages: %d\n", b[i].pages);
    }
    return 0;
}

// instead of using scanf(), we can use struct book b[1] ={"Math", 10.75, 150}; like this
