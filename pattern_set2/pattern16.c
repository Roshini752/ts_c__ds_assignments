#include<stdio.h>
int main()
{
    int i,j,n=5;
    char c = 'a';
    c--;
    for(i=n;i>=1;i--)
    {
        for (j=n;j>=i;j--)
        {
            printf("%c ",c+j);
        }
        printf("\n");
    }
}