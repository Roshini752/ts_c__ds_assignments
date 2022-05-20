#include<stdio.h>
void push(int ele, int stack[], int *top, int ss){
 if(*top >= ss-1)
 {
     printf("\nstack is over flow\n");
 }
 else
 {
     (*top)++;
     stack[(*top)]=ele;
 }
}
void pop(int stack[], int *top, int stackSize){
 if(*top == -1)
 {
   printf("The stack is empty. \n");
 }
 else
 {
    printf("Element popped: %d \n", stack[(*top)]);
        (*top)--;
 }
 
}
int display(int stack[],int *top, int ss)
{
    
    for(int i= (*top);i>=0;i--)
    {
        printf("%d ",stack[(i)]);
    }
    printf("\n");
}
int main() {
  int stackSize = 3;
  int stack[stackSize];
  // A negative index shows that the stack is empty
  int top = -1;
  push(1, stack, &top, stackSize);
  push(2, stack, &top, stackSize);
  push(3, stack, &top, stackSize);
  printf("elements after pushing : ");
  display(stack, &top, stackSize);
  pop(stack, &top, stackSize);
  printf("Element on top: %d\n", stack[top]);
  printf("Elements after poping one element : ");
  display(stack, &top, stackSize);
  
  return 0;
}