#include<stdio.h>
int copyarray(int arr[],int n)
{
    int i,brr[n];
    printf("brr[%d] is\t",n);
    for(i=0;i<n;i++)
    {
        brr[i]=arr[i];
        printf("%d ",brr[i]);
    }
}
int main()
{
    int arr[]={2,4,3,8,3,9,6,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    copyarray(arr,n);
    
}