#include<stdio.h>
int main()
{
	int num,i,j;

	printf("Enter a number");
	
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=num;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
