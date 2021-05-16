#include<stdio.h>
int main()
{
	int totalRow,row,symbol,space;
	printf("Enter the total number of rows: \n");
	scanf("%d",&totalRow);
	for(row=1;row<=totalRow;row++)
	{
		for(space=1;space<=(totalRow-row);space++)
		  {
			    printf(" ");
			}
		
		for(symbol=1;symbol<=((2*row)-1);symbol++)
		{
		    printf("*");
		}
		
		printf("\n");
	}
	return 0;
}

