/*

1
3 3
5 5 5
7 7 7 7
9 9 9 9 9
8 8 8 8
6 6 6
4 4
2

*/

#include<stdio.h>
int main()
{
    int i,j,n=5;
    int a = 1;
    for(i=n;i>=1;i--)
    {
        
        for(j=i;j<=n;j++)
        {
            printf("%d",a);
            printf(" ");
            
        }
        a=a+2;
        printf("\n");
    }
   a=a-3;
     for(i=n-1;i>=1;i--)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            printf(" ");
            
        }
        a=a-2;
        printf("\n");
    }
}