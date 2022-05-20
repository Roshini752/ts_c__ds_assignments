/*
*
* *
* * *
* * * *
* * * * *
  * * * *
    * * *
      * *
        *    */

#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
            printf(" ");
            
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=i;k<=n-1;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            printf(" ");
            
        }
        printf("\n");
    }
}