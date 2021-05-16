#include<stdio.h>
#include<math.h>
int main()
{
	int num,i;
	float sum=0;
	printf("Enter a Nth number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+1/pow(i,i);
	}
	printf("Result: %f",sum);
return 0;
}
