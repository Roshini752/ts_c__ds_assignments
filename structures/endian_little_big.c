#include<stdio.h>
int main()
{
	int a=1;
	char *ptr = (char*)&a;//explicit type casting is done here
	if(*ptr==1)//if num at that paticular is not 1 then it is big endian
	 printf("little endian ");
	else
	 printf("big endian");
}