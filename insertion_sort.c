#include<stdio.h>
int main()
{
	int size,i,j=0,array[100],temp;
	printf("\nEneter the size of array: ");
	scanf("%d",&size);
	printf("\nEneter the values to arrray: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
		printf(" %d ",array[i]);
	}
	for(i=1;i<size;i++)
	{
		while(j<i)
		{
			if(array[i]<array[j])
			{	
			  temp=array[i];
			  array[i]=array[j];
			  array[j]=temp;
			}
		j++;
	    }
		j=0;
	}
	printf("\nThe Enterd elements in sorted Order\n");
	for(i=0;i<size;i++)
	{
		printf(" %d ",array[i]);
	}
	return 0;
}

		
