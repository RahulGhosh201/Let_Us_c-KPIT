// Write a program to delete all vowels from a sentence

#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool isVowel(char c){
    c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

void soln(char *str)
{
    int j=0;
    char ans[10];
    for (int i=0;i<strlen(str);i++){
        if(!isVowel(str[i])){
            ans[j++]=str[i];
        }
    }
    ans[j]='\0';
    printf("Ans without vowel: %s",ans);
}

int main()
{
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    soln(str);
    return 0;
}