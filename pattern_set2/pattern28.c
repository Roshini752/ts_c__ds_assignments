#include<stdio.h>
int main()
{
    int i,j,n=5,k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k==0)
            {
                printf("%d ",k);
                k++;
                k=-k;
                continue;
            }
            if(k<0)
            {       
                printf("%d ",k);
                k=k * -1;
                k++;
               //
                printf("k is %d",k);
                
            }
            else
            {
                printf("%d ",k);
                k++;
                k= -k;
            }
        }
        printf("\n");

    }
}