#include<stdio.h>
struct student
{
    int num;
    char name[5];

};
typedef struct student stu;
stu var;
int main()
{
    scanf("%d",&var.num);
    printf("%d",var.num);
    scanf("%s",var.name);
    printf("%c",var.name);
}