#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="roshini";
    char str2[]="peyyala";
    strcat(str1,str2);
    printf("merged=%s\n",str1);
    int l=strlen(str1);
    printf("length of concatemated string is %d\n",l);

}