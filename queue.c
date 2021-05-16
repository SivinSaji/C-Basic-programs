#include<stdio.h>
int front,rear=0,size=10,array[100];
void insert();
void delete();
void display();
int main()
{
	int choice;
	//printf("\nEnetr the size of array: ");
	//scanf("%d",&size);
	printf("\n......STACK OPERATIONS.......\n1.Insert\n2.Delete\n3.Display\n4.Stop\n");
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
	        delete();
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



void insert()
{
	int value;
	printf("Eneter the value To insert: ");
	scanf("%d",&value);
	if(rear==size)
	{
		printf("Queue is full");
	}
	else
	{
        array[rear]=value;
		rear++;
	}		
	
}



void display()
{
	int i;
	if(rear==front)
	{
		printf("The Queue is Empty");
	}
	else
	{
	for(i=front;array[i]!=0;i++)
	{
		
	printf(" %d ",array[i]);
	
}
}
}


void delete()
{
	int i;
	if(rear==front)
	{
		printf("The Queue is Empty");
	}
	else
	{
	printf("%d is deleted\n",array[front]);
	printf("%d",rear);

   for(i=front;i<rear;i++)
   {
	array[i]=array[i+1];
}
}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
