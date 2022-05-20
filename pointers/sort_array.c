#include <stdio.h>
#define MAX  6
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int arr[MAX]={10,12,15,16,56,23};
  int i,j;
  printf("before swap\n");
  for(i=0;i<MAX;i++)
  {
    printf("%d\n",arr[i]);
  }

  printf("after swap\n");
  for(i=0;i<MAX;i++)
  {
    for(j=i+1;j<MAX;j++)
    {
      if(arr[i]<arr[j])
      swap(&arr[i],&arr[j]); // funtion calling for swappig
    }
  }
  for(i=0;i<MAX;i++)
  printf("%d  ",arr[i]);

}