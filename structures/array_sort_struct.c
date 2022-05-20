#include<stdio.h>
struct ch
{
	char c;
}str;                             //taking a structure having char data type
int main()
{
	int n,i;
	struct ch str[10];//array of stuctures are genarally used to store multiple struct variables.
	printf("enter how many  characters to sort : ");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	scanf(" %c",&str[i].c);//reading a dat from user
    for(i=0;i<n;i++)
	{
		 for(int j=i;j<n;j++)
		 {
		 	if(str[i].c>str[j].c)
		 	{
		 		char temp=str[i].c;
		 		str[i].c=str[j].c;   //done sorting.
		 		str[j].c=temp;
			 }
		 }
	}
	for(i=0;i<n;i++)
	{
    	printf("%c",str[i].c);//printing the sorted array
    }	
}