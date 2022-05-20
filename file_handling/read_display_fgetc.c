//to read file contents and display on console.
#include<stdio.h>   // fgetc(file_pointer)
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("rosh.xlsx","r");
    if(fp == NULL)
    {
        printf("unable to open");

    }
    else{
        while(!feof(fp))  // to check end of the file
        {
            ch = fgetc(fp);  //reads a character from a file
            printf("%c\n",ch); // to print the contents
        }
        printf("\nopened");
        fclose(fp);
    }
}