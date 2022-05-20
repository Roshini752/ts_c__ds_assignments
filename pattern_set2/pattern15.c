#include<stdio.h>
int main()
{
    int i,j,n=5;
    char c = 'a';
    c--;
    for(i=1;i<=n;i++)
    {
        for (j=i;j>=1;j--)
        {
            printf("%c ",c+j);
        }
        printf("\n");
    }
}