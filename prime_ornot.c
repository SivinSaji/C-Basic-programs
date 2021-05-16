#include<stdio.h>
int main()
{
	int num,i,flag=0;
	printf("Eneter a number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=flag+1;
		}
	}
	if(flag==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
	return 0;
}
