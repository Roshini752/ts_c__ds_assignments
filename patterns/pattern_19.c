/*
1 
* * 
2 2 2 
* * * * 
3 3 3 3 3 
* * * * * *
*/




#include<stdio.h>
int main()
{
    int i,j,n=6,k=0;
    for(i=1;i<=n;i++)
    {
        if(i%2 != 0){
               k++;
            }
        for(j=1;j<=i;j++)
        {
            if(i%2 != 0){
                printf("%d",k);
                printf(" ");
            }
            else{
                printf("*");
                printf(" ");
            }
        }
        printf("\n");

    }
}