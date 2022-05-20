#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *a=arr,sum=0;
    for(a=&arr[0][0];a<=&arr[2][2];a++)
    {
        sum += *a; //a points to the array 
        
    }
    printf("%d\n",sum);
    }
