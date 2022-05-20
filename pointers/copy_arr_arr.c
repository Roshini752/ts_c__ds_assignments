#include<stdio.h>
int main()
{
    int arr[]={1,2,3,6,7};
    int brr[10],i;
    int n=sizeof(arr)/sizeof(arr[0]);
    int *p=&arr;  // pointer always stores the bae address
    for(i=0;i<n;i++)
    {
        brr[i]=p[i];  // here arr is copied to the brr by using pointer p
    }
    printf("brr[%d] is ",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
}