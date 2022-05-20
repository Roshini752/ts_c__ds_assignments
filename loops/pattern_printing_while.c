#include <stdio.h>

int main()
{
    int i=0,j,n=6;
    int k;
    while(++i<=n)       
    {
        for (k = 1; k <= n - i; ++k) 
        {
            printf(" ");                              
        }
        
        printf("%c",47);         
        j=i;                 
        if(j<n)
        {
        while(j!=1)     
        {
            
            j--; 
                 
            printf("  ");  
            
        }
        }
        else
        {
            while(k<j)
            {
                printf("__");
                k++;
            }
        }
        printf("%c\n",92);  
        //printf("\n");
       
               
    }
    return 0;
}