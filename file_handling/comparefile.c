//to copy contents from one file to another file.
#include<stdio.h>   // fgets(variable to store,length,fp)
int main()
{
    FILE *fp;
    FILE *fp2;
    char ch,cp;
    int pos=0,line=0,err=0;
    fp=fopen("example.txt","r");
    fp2=fopen("rosh.txt","r");
    if(fp == NULL || fp2 == NULL)
    {
        printf("unable to open");
    }
    else{
        
        while(!feof(fp2) && !feof(fp))  // to check end of the file
        {
            ch=fgetc(fp2);   // read the string from the data
            cp=fgetc(fp);
            pos++;
            if(ch == '\n' && cp == '\n')
            {
                line++;
                pos=0;
            }
            if(ch != cp)
            {
                err++;
                printf("error pos %c,%c",cp,ch);
            }
        }
        if(err==0)
        {
            printf("both files are same\n");
        }
        else
            printf("both file are different\n");
        printf("%d\n",err);
        fclose(fp);
        fclose(fp2);
        
    }
}