#include<stdio.h>
int main()
{
    int var,n;
    scanf("%d %d",&var,&n);
    int get = (var>>n) & 1; // right shift var and operation with 1
    //int num = var & (1<<n) ;
    /*  var -->12 n-->3
         1100 >> 3
         0001  & 0001  ==> 0001 */
    printf("%d bit is %d ",n,get);
}