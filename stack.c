
#include<stdio.h>
int top,stack[100],size,top=-1,array[100];
void push();
void pop();
void display();
void peek();
int main()
{
	int choice;
	printf("\nEnetr the size of array: ");
	scanf("%d",&size);
	printf("\n......STACK OPERATIONS.......\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Stop\n");
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
			peek();
			break;
			
			case 4:
			display();
			break;
			
			default:
			printf("\nEnetered choice is invalid: \n");
			break;
			
		}
		}while(choice!=5);	


	return 0;
}
	
	 
		 
 
void push()
{
	int value;
		
	printf("\nEnter the value: ");
	scanf("%d",&value);
	if(top==size-1)
	{
		printf("\nOverflow\n");
	}
	
	else
	{
		
	
		
		top++;
		array[top]=value;
		}
    
}



void pop()
{   
	
		
	if(top==-1)
	{
		printf("\nUnder Flow\n");
	}
	else
	{
		top--;
	}
}



void peek()
{
	int temp;
	temp=top;
	printf("\nThe First Element in Stack is: %d\n",array[temp]);
	
}


void display()
{
	int i;
	printf("\nThe Display of Stack: \n");
	for(i=top;i>=0;i--)
	{
		printf(" %d ",array[i]);
	}
}

		
		
		
	 
