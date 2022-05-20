#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);  // x = 2 y = 4  
    printf("before swaping :: ");
    printf("x = %d , y = %d \n",x,y);
    x = x ^ y;   // 0010 
                 // 0100 --> 0110 --> x = 6
    y = x ^ y;   // 0110
                 // 0100 --> 0010 --> y = 2
    x = x ^ y;   // 0110 
                 // 0010 --> 0100 --> x = 4
    printf("after swapping :: ");
    printf("x = %d , y = %d ",x,y);

}