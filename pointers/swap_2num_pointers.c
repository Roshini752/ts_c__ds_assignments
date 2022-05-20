#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=5,y=9;
    printf("before swappping: x=%d y=%d\n",x,y);
    swap(&x,&y);

    printf("after swapping x=%d y=%d\n",x,y);
}