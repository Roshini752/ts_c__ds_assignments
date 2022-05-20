#include<stdio.h>
int main()
{
    int i,j,n=5;
    char c = 'a';
    
    for(i=n;i>=1;i--)
    {
        for (j=i;j<=n;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
}