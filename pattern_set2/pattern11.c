#include<stdio.h>
int main()
{
    int i,j,n=5,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j%2 == 1 )
            {
                printf("%d ",-i);
            }
            else{
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}
