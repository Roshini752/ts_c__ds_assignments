/*
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *         */

    #include<stdio.h>
    int main()
    {
        int i,j,k,n=5;
        
        
        for(i=n;i>=1;i--)//4
        {
            for(k=n-i;k>=1;k--)
            {
                printf("  ");
            }
            //i=i+1;
            for(j=(i*2)-1;j>=1;j--)
            {
                printf("*");
                printf(" ");

            }
            printf("\n");
        }
    }
