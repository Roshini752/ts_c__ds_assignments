//to append content to a file.

#include<stdio.h>  // fprintf(file_pointer,"format specifier",variable name)
int main()
{
    FILE *fp;
    fp=fopen("rosh.xlsx","a"); // append the contents
    if(fp == NULL)
    {
        printf("unable to open");

    }
    else{
        fprintf(fp,"%d",27); // write the data into the file
        printf("contents successfully append");
        fclose(fp);
    }
}