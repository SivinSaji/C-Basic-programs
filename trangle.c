#include<stdio.h>
int main()
{
	int row,colum,i,j;
	printf("Enter number of row: ");
	scanf("%d",&row);
	printf("Enter number of columns: ");
	scanf("%d",&colum);
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			if(i>j)
			{
				printf(" -1 ");
			}
			else if(i==j)
			{
				printf(" 0 ");
			}
			else
			{
				printf(" 1 ");
			}
		}
		printf("\n");
	}
	return 0;
}

			
	
