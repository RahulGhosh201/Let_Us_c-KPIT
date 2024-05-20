#include <stdio.h>

int main()
{
    int x = 5;
    printf("%dkg\n", x);   // it's the normal
    printf("%2dkg\n", x);  // it will took 2 int places
    printf("%-3dkg\n", x); // after the integer it will take 3 places
    char str[100];
    // gets(str);//gets() is dangerous, we should always use fgets(str,sizeof(str),stdin) instead
    fgets(str, sizeof(str), stdin);
    puts(str);
    printf("%c", str[2]);
    // puts() does not print print this, instead we have to use %c and printf() here
    int n;
    // gets(n);
    // puts(n);//we should use scanf() instead
}
// we should not use scanf("%s",str) ; beacuse it stops reading when it encounters whitespace
// so we should always gets(str) OR fgets(str,sizeof(str),stdin), that over comes this limitation
