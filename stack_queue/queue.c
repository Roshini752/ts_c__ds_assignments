#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 3
int front = -1, rear = -1;  
int queue[maxsize];  
void enqueue(int ele)  
{  
          
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = ele;  
    
      
}  
void dequeue()  
{  
    int ele;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        ele = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
         
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   
 
        for(i=front;i<=rear;i++)  
        {  
            printf("%d ",queue[i]);  
        }     
    }  
}  
void main ()  
{  
  enqueue(1);
  enqueue(2);
  enqueue(3);
  printf("Elements after enqueue : ");
  display();
  dequeue();
  printf("Elements after dequeue : ");
  display();

            
    
}  
