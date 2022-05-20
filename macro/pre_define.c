#include<stdio.h>
int main()
{
    printf("FILE : %s\n",__FILE__); // print the file name
    printf("date : %s\n",__DATE__);  // todays date
    printf("Time : %s\n",__TIME__); // present time
    printf("LINE : %d\n",__LINE__);  // this line number
}