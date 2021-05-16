#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node *front,*rear;
void insert();
void delete();
void display();
int main()
{
	int choice;
	printf("\n......QUEUE OPERATIONS.......\n1.Insert\n2.Display\n3.Delete\n4.Stop\n");
	do
	{
		printf("\nEneter Your Choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
			insert();
			break;
			
			case 2:
			display();
			break;
			
			
			
			case 3:
			delete();
			break;
			
			default:
			printf("\nEnetered choice is invalid: \n");
			break;
			
		}
		}while(choice!=4);	


	return 0;
}


void insert()
{
	int value;
	                      
struct node *new;
	printf("Eneter the value: ");
	scanf("%d",&value);
	new=(struct node*)malloc(sizeof(struct node*));
	new->data=value;
	new->next=NULL;
	if(front==NULL)
	{
		front=new;
		rear=new;
	}
	else
	{
		rear->next=new;
		rear=new;
	}
}









void display()
{
	printf("VALUES INSERTED IN A LINKED LIST\n\n");
	struct node *temp;
	temp=front;
	
	printf(" %d ",temp->data);
	
	while(temp->next!=NULL)
	{

		temp=temp->next;
		printf(" %d ",temp->data);

	}
}	
	





void delete()
{
	if(front==NULL)
	{
		printf("nQueue is empty" );
	}
	else
	{
		struct node *ptr;
		ptr=front;
		printf("%d  is deleted from Queue",ptr->data);
		front=front->next;
		free(ptr);
	}
	
}
		
		
