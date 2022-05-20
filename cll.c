#include<stdio.h>
#include<stdlib.h>	//to access the dynamically allocated memory
struct cll	//to create a node
{
	char data;	//data
	struct cll *next;	//self referential structure -- address 
};
typedef struct cll node;	//to alter the name
node *first=NULL,*last=NULL;	//initialized null
void create(char ele)	//linking
{
	node *new=(node*)malloc(sizeof(node));	//allocating the memory
	if(first==NULL)
	{
		new->data=ele;	//to store the address and elements
		new->next=new;
		first=last=new;
	}
	else
	{
		new->data=ele;
		new->next=first;
		last->next=new;
		last=new;
	}
}
void display()
{
	node *temp=first;
	do
	{
		printf("%c\n",temp->data);//10 20 30
		temp=temp->next;
	}while(temp!=first);
}
int main()
{
			// function calling to create the elements
    create('a');
    create('e');
    create('i');
    create('o');
    create('u');
    display();		// to display the elements
}
