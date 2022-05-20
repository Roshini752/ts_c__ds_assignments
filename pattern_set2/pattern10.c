#include<stdio.h>
int main()
{
    int i,j,n=5,k=0;
    for(i=1;i<=n;i++)
    {
        if(i%2 == 1 )
        {
            k++;
        }
        for(j=1;j<=i;j++)
        {
            if(i%2 == 1 )
            {
                printf("%d ",k);
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}
