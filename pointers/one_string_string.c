#include<stdio.h>
#include<string.h>
int main()
{
    char str[12]="thundersoft";
    char str2[12];
    char *ptr=str;
    int i;
    for(i=0;i<=12;i++)
    {
        str2[i]=ptr[i]; // by using pointer coping the str to str2
    }
    printf("%s\n",str2);
    char *ptr2=str2;  //it will store the base address of string 
    int count=0;
    while(*ptr2 != '\0')  // it will check upto null point
    {
        count++; // to find the length of the string
        ptr2++;
    }
    printf("length of the string %d\n",count);
    int l=strlen(str2); // string function to find the length
    printf("%d\n",l);
}
