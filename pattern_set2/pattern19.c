#include<stdio.h>
int main()
{
    int i,j,n=5,k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k==1)
            {
                k--;
                printf("%d ",k);
            }
            else
            {
                k++;
                printf("%d ",k);
            }
            
        }
        printf("\n");
    }


}