#include<stdio.h>
#include<string.h>
struct ch
{
	float cgpa;
	char name[10],branch[5];
	
}st;
int main()
{
	int n,i;
	struct ch st[10];
	printf("enter how many student details u want : ");
	scanf("%d",&n);
	printf("student name\nbranch\ncgpa");
	for( i=0;i<n;i++)
	{
	    scanf("%s",st[i].name);
        scanf("%s",st[i].branch);
        scanf("%f",&st[i].cgpa);
    }
    printf("student datils are : \n");
	for( i=0;i<n;i++)
	{
		printf("student name : ");
	    puts(st[i].name);
	    printf("student branch : ");
	    puts(st[i].branch);
	    printf("student cgpa : ");
	    printf("%.2f\n",st[i].cgpa);
    }	
}