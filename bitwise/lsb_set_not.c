#include<stdio.h>
int main()
{
    int var;
    scanf("%d",&var);
    if(var & 1) // and operation between var and 1 // if == 1 it is set else 0
        printf("lsb is set\n");
    else
        printf("lsb bit is not set\n");
    
}