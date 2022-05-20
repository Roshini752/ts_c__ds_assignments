#include <stdio.h>
int main()        
{

    int arr[]={2,4,1,6,5,3,7,8};
    int i,j,n,temp,flag;
    n=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++) 
    {
        flag=0;
        for(j=i+1;j<n;j++) 
        {
        if(arr[i]>arr[j]) 		    
        {
            temp=arr[i];  	//
            arr[i]=arr[j]; 	//
            arr[j]=temp;  	//
            flag=1;            
        }
        }
        if(flag==0)
        {
            break;
        }

    }
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
    printf("\nsecond largest is %d",arr[n-2]);

}
