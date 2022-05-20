#include<stdio.h>
int insertionSort(int arr[ ], int n)      
{
               int i, temp, j;
               for(i=1; i<n; i++)    
               {   
                      temp=arr[ i ]; 
                      j= i-1; 
                      while(j>=0 && arr[ j ] > temp)
                      { 
                                 arr[ j+1] = arr[ j ]; 
                                 j--; 
                      }
                      arr[ j+1 ] = temp;  
               }
}
int main()
{
    int i, arr[]={5,1,6,2,4,3};
    int n=sizeof(arr)/sizeof(int);
    printf("%d\n",n);
    insertionSort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}