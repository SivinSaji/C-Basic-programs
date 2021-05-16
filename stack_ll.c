#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;

	struct node *next;
	
};
int stack[100],size,array[100];
struct node *top;
void push();
void pop();
void display();
//void peek();
int main()
{
	int choice;
	printf("\n......STACK OPERATIONS.......\n1.Push\n2.Pop\n3.Display\n4.Stop\n");
	do
	{
		printf("\nEneter Your Choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
			push();
			break;
			
			case 2:
			pop();
			break;
			
			
			
			case 3:
			display();
			break;
			
			default:
			printf("\nEnetered choice is invalid: \n");
			break;
			
		}
		}while(choice!=4);	


	return 0;
}
	
	
void push()
{
	int value;
    struct node  *new;
    new=(struct node *)malloc(sizeof(struct node*));
	printf("\nEnter the value to be Inserted: ");
	scanf("%d",&value);
	if(top==NULL)
	{
		new->data=value;
		new->next=NULL;
		top=new;
	}
	else
	{
		new->data=value;
		new->next=top;
		top=new;
	}
}


void pop()
{
	int num;
		struct node *temp;
	if(top==NULL)
	{
		printf("\nOverflow\n");
	}
	else
	{
		temp=top;
		num=top->data;
		top=top->next;
		temp->next=NULL;
		free(temp);
		printf("\n%d is  Deleted from Stack\n",num);
	}
}


void display()
{
	printf("\nDISPLAY OF STACK\n");
	struct node *temp;
	if(top==NULL)
	{
		printf("\nStack is Empty\n");
	}
	else
	{
		temp=top;
		while(temp->next!=NULL)
		{
			
		printf(" %d ",temp->data);
		temp=temp->next;
	}
}
}

		
		
		
		
		
		
		
		
	
