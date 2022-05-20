#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    char ch = 'A';
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%d",i%2);
            if(i%2 != 0){
                printf("%c",ch);
                printf(" ");
            }
            else{
                printf("%c",ch+32);
                printf(" ");
            }
        }
        ch++;
            
        printf("\n");

    }
}