#include<stdio.h>
int main()
{
int num,num1=0,num2=1,temp=0,i;
printf("Enter the Number: ");
scanf("%d",&num);
printf("%d  %d",num1,num2);
for(i=2;i<=num;i++)
{
	temp=num1+num2;
	printf("  %d",temp);
	num1=num2;
	num2=temp;
	
}
return 0;
}
