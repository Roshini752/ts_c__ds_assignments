#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=n;i>=1;i--)
    {
        for(k=i;k<=n;k++)
        {
            printf("  ");
        }
        for(j=1;j<=n;j++)
        {
            printf("*");
            printf(" ");
            
        }
        printf("\n");
    }

}