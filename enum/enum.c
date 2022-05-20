#include<stdio.h>
enum days {sat,sun};
int macro_check()
{
    #define MAX 50 // scope - global
}
int enum_switch()  // enum in switch case
{
    int num;
    printf("enter the case");
    scanf("%d",&num);
    switch(num)
    {
        case sat:
            printf("sat is %d\n",sat);
        case sun:
            printf(" sun is %d\n",sun);
        default:
            break;
    }
}
int main()
{
    enum week_days {sun,mon=2,tue,wed};  // if we give mon = 2.5 
                                        // enumerator value for mon is not an integer
                                        // constant
    enum week_days d;
    //enum days {sat,sun};    redeclaration of enumerator
    d = sun;
    printf("d is %d\n",d);
    printf(" tue is %d\n",tue);
    macro_check();
    printf("%d",MAX);
    enum_switch();
}

