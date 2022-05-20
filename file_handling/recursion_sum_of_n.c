 //to find sum of all natural numbers between 1 to n using recursion.

#include<stdio.h>
int sum(int n)
{
    
    if(n!=0)
    {
        n=n+sum(n-1);
    
    }
    return n;
    
}
int main()
{
    int n,res;
    scanf("%d",&n);
    
    int tot=sum(n);
    printf("result is %d",tot);
}