//to count characters, words and lines in a text file.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words =0 , lines =0;
    fp = fopen("rosh.txt", "r"); //to open a file

    if (fp == NULL)   // to check file is open or not
    {
        printf("\nUnable to open file.\n");
        exit(EXIT_FAILURE);
    }   
    while (!feof(fp)) // to check end of the file
    {
        ch=fgetc(fp);
        characters++; // chaacters count
        if (ch == '\n' || ch == '\0') // logic to count lines
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') // logic to count words
            words++;
    }
    if (characters > 0)
    {
        words++;  // increment word ond line ch is at end of file
        lines++;
    }
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fp);

    return 0;
}