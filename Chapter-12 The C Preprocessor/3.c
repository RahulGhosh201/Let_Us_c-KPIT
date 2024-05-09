#include <stdio.h>

#define simpleInterest(p, r, t) ((p * r * t) / 100)

#define amount(p, r, t) (p + ((p * r * t) / 100))

int main()
{
    int p, r, t;
    printf("Enter principal: ");
    scanf("%d", &p);

    printf("Enter rate of interest: ");
    scanf("%d", &r);

    printf("Enter time: ");
    scanf("%d", &t);

    printf("Simple interest: %d\n", simpleInterest(p, r, t));
    printf("Amount: %d\n", amount(p, r, t));
    return 0;
}