#include<stdio.h>
#include<stdlib.h>      //to access the malloc
struct sll      //creating a node
{
        int data;       //data
        struct sll *next;      // self referential structure--address

};
typedef struct sll node;        //to alter the name
node*first=NULL,*last=NULL;     //initialized null
void create(int ele)    //linkng
{
        node*new=(node*)malloc(sizeof(node));   //allocating the memory
        if(first==NULL)
        {
                new->data=ele;  //to store the address and elements
                new->next=NULL;
                first=last=new;
        }
        else
        {
                new->data=ele;
                new->next=NULL;
                last->next=new;
                last=new;
        }

}
void display()          //to display the created nodes
{
        node*temp=first;
        while(temp!=NULL)       //condition checking
        {
                printf("%d\n",temp->data);
                temp=temp->next;
        }
}


int main()
{
        //display();
        create(100);
        create(200);
        create(300);

        
       
        display();
        
}


