#include<stdio.h>
int main()
{
    int var,n;
    scanf("%d",&var);
    scanf("%d",&n);
    var = var & ~(1 << n);  // here 1 is left shited to the n times ~  and operation with var
                 // 0000 0001 << n-->2                        
                 // 0000 0100  --> shifting
                 // 1111 1011  -->  ~
    // var --> 8 >> 0000 1000  --> and operation   
    //              0000 1000 --> 8
    printf("%d\n",var);

}