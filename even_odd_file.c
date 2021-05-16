#include<stdio.h>
int main()
{
	int limit,i,array[100];
	FILE *fodd,*feven;
	printf("Enter the size of array: ");
	scanf("%d",&limit);
	printf("Enter the elements: ");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&array[i]);
	}
	feven=fopen("even.txt","w");
	fodd=fopen("odd.txt","w");
	for(i=0;i<limit;i++)
	{
		if(array[i]%2==0)
		{
			fprintf(feven,"%d \n",array[i]);
		}
		else
		{
			fprintf(fodd,"%d\n",array[i]);
		}
			
	}
	fclose(fodd);
	fclose(feven);
	return 0;
}
	
