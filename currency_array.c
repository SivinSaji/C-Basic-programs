#include<stdio.h>
int main()
{
	int size=10,amount,i,notes;
	int deno[10]={2000,500,200,100,50,20,10,5,2,1};
	
	printf("Enter thr amount: ");
	scanf("%d",&amount);
	for(i=0;i<size;i++)
	{
		notes=amount/deno[i];
		if(notes)
		{
			amount=amount%deno[i];
			printf("%d*%d=%d\n",deno[i],notes,notes*deno[i]);
		}
	}
	return 0;
}
			
		
