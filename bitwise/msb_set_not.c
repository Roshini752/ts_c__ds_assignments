#include<stdio.h>
int main()
{
    int var;
    scanf("%d",&var);
    int tb = sizeof(int) * 8; //total bits
    printf("%d\n",tb);
    int msb = var >> (tb-1);
    printf("%d\n",msb);
    if(msb & 1)
    printf("msb is set");
    else
    printf("msb is not set");
}