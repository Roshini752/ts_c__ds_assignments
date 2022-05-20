int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if(i <= n/2)
        {
            for (int j = 0; j < n/2-1; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i ; j++)
            {
                printf("*");
            }
        }
        else
        {
            //for(int j = i-n/2;j<=n/2;j++)
            for(int j = 1;j<=n/2;j++)
            {
               if(j>=i-n/2)
               {
                   printf("*");
               }
               else
                    printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
