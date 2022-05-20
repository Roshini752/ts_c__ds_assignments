#include<stdio.h>
int main()
{
    char str[]="first occurence of a word";
    char sub[]="occurence";
    int i=0,j=0,count;
    while(str[i] != '\0') // to check the end of the string
    {
        if(str[i]==sub[0]) // to check if the first letter of sub string matches or not
        {
          count=1;
          while(sub[j] != '\0') // to check the end of the sub string
          {
              if(str[i+j] != sub[j]) // to check sub strng matches or not
              {
                  count = 0;
                  break; //if it is not mtching it will break the loop
              }
              j++;
          }  

        }
        if(count == 1)
        {
            break; // is to break when the sub string is occured in main string
        }
        i++;
    }
    if(count == 1)
    {
        printf("%s is occured at %d\n",sub,i);
    }
    else{
        printf("%s is not found\n",sub);
    }
    return 0;
}




            
               
    
  