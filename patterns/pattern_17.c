/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/



#include<stdio.h>
int main()
{
    int i,j,n=5;
    
    for(i=n;i>=1;i--)
    {
        int a = 0;
        for(j=i;j<=n;j++)
        {
            printf("%d",++a);
            printf(" ");
            
        }
        printf("\n");
    }
     for(i=n-1;i>=1;i--)
    {
        int a = 0;
        for(j=1;j<=i;j++)
        {
            printf("%d",++a);
            printf(" ");
            
        }
        printf("\n");
    }
}