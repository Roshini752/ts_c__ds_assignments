#include<stdio.h>
int main()
{
    int i,j,n=5,k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2 == 1)
            {
                printf("0 ");
            }
            else
                printf("1 ");
        }
        printf("\n");
    }
}