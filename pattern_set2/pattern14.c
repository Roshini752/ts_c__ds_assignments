#include<stdio.h>
int main()
{
    int i,j,n=5;
    
    for(i=1;i<=n;i++)
    {
        char c='a';
    c--;
        for(j=1;j<=i;j++)
        {
            printf("%c",++c);
        }
        printf("\n");
    }
}
