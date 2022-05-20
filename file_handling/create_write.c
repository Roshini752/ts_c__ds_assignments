// to create a file and write contents, save and close the file.

#include<stdio.h>   // fgets(variable to store,length,fp)
int main()
{
    FILE *fp;
    char ch[100];
    fp=fopen("ts.txt","w");  //to open the file and write 
    if(fp == NULL)
    {
        printf("unable to open");

    }
    else
    {
        printf("opened");
        fgets(ch,100,stdin);   // read the string from the data
        fputs(ch,fp);  // print the data to files
        printf("%s",ch);
        fclose(fp);  // to close the file
    }
}