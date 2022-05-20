#include<stdio.h>
#include<string.h>
char pallindrome(char str[])
{
    char cpy[20];
    strcpy(cpy,str);
    strrev(str);
    printf("%s\n",str);
    if(strcmp(cpy,str)==0)
    printf("%s is a pallindrome",cpy);
    else
    printf("%s is not a pallindrome",cpy);
}
int main()
{
    char str[10];
    scanf("%s",&str);
    printf("%s\n",str);
    pallindrome(str);
    
}