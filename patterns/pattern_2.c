#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=n;i>=1;i--)
    {
        for(k = (n-i+1);k<=n;k++ )
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
            printf(" ");
            
        }
        printf("\n");
    }
}