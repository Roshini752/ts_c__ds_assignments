#include<stdio.h>
int main()
{
    int i,j,n=5,k=0,l=1,c;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1)
            {
                printf("%d ",k);
                continue;
            }
            if(i==2 && j==1)
                printf("%d ",l);
            else{
                c=k+l;
                printf("%d ",c);
                k=l;
                l=c;
            }
           
        }
        printf("\n");
    }
}