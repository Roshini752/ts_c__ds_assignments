//to copy contents from one file to another file.
#include<stdio.h>   // fgets(variable to store,length,fp)
int main()
{
    FILE *fp;
    FILE *fp2;
    char ch;
    fp=fopen("example.txt","w");
    fp2=fopen("rosh.txt","r");
    if(fp == NULL || fp2 == NULL)
    {
        printf("unable to open");
    }
    else{
        while(!feof(fp2))  // to check end of the file
        {
            ch=fgetc(fp2);   // read the string from the data
            fputc(ch,fp);
            printf("%c",ch);
        }
        printf("\nopened");
        fclose(fp);
        fclose(fp2);
        
    }
}