#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=n-i+1;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}