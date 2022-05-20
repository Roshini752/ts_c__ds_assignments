//to find reverse of any number using recursion.

#include<stdio.h>
int rev=0;
int reverse(int n) //567 56 5
{
    if(n!=0)
    {
    int rem=n%10; // 7 6  5
    rev=(rev*10)+rem; //7 76 765
    reverse(n/10); //56 5 0
    return rev;
    }
    
}
int main()
{
    int n;
    printf("enter the number to reverse ");
    scanf("%d",&n);
    int reversed=reverse(n);
    printf("reversed number is %d",reversed);
}