#include<stdio.h>
int main()
{
    typedef int array[5];
    array x= {1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d",x[i]);
    }
}