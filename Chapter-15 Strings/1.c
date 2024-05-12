//  If the string "Alice in wonder land" is fed to the following scanf( )
// statement, what will be the contents of arrays str1, str2, str3 and
// str4?
// scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ;

#include <stdio.h>
#include <string.h>


int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", &str);
    char delimeters[]=" ";
    char *token;

    //split the input string into words using strtok 
    token=strtok(str,delimeters);
    while(token!=NULL){
        printf("%s\n",token);
        token=strtok(NULL, delimeters);
    }
    return 0;
}