
#include<stdio.h>

void swap(void *a,void *b)
{
	//p=&n1 so p store the address of n1, so *p store the value of n1
	//q=&n2 so q store the address of n2, so *q store the value of n2

    int tmp;
    tmp = *(int*)a; // tmp store the value of n1
    *(int*)a=*(int*)b;    // *p store the value of *q that is value of n2
    *(int*)b=tmp;   // *q store the value of tmp that is the value of n1
}
int main()
{

    int n,m;  
    printf("Enter the number n : ");
    scanf("%d",&n);
    printf("Enter the number m : ");
    scanf("%d",&m);	

    printf("Before swapping: n = %d, m = %d ",n,m);
	//pass the address of both variables to the function.
    swap(&n,&m);

    printf("\nAfter swapping: n = %d, m = %d \n\n",n,m);
    return 0;
}

