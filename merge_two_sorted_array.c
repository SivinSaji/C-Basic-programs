#include<stdio.h>
int main()
{ 
	int size1,size2,array1[100],array2[100],size,i,j,temp;
	printf("Enter first array size: ");
	scanf("%d",&size1);
	printf("Enter second array size: ");
	scanf("%d",&size2);
	printf("Enter elements in first array:\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter elements in second array: \n");
	for(j=0;j<size2;j++)
	{
		scanf("%d",&array2[j]);
	}
	
	printf("Entered elements in array1 \n");
	for(i=0;i<size1;i++)
	{
		printf("%d  ",array1[i]);
	}
	printf("\n");
	printf("Entered elements in array2 \n");
	for(j=0;j<size2;j++)
	{
		printf("%d  ",array2[j]);
	}
	printf("\n");
	
	for(i=0;i<size2;i++)
	{
		array1[size1+i]=array2[i];
	}
	printf("\n");
	size=size1+size2;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array1[i]>array1[j])
			{
			temp=array1[i];
			array1[i]=array1[j];
			array1[j]=temp;
		}
		}
	}
	printf("\n");
	printf("Sorted array: \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",array1[i]);
	}
	return 0;
}

			
			
	
