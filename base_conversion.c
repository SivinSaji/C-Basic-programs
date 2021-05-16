#include<stdio.h>
int main()
{
int num,base,rem,array[100],i=0,count=0;
printf("Enter a number: ");
scanf("%d",&num);
printf("Enter the base to convered(2,8,6):  ");
scanf("%d",&base);
if(base<=16)
{
while(num>0)
{
rem=num%base;
array[i]=rem;
count=count+1;
i=i+1;
num=num/base;
}
printf("RESULT: ");
for(i=count-1;i>=0;i--)
{
	if(array[i]<10)
	{
		printf("%d ",array[i]);
	}
	else
	{
		printf("%c ",('A'+(array[i]-10)));
	}
	
}
}
else
{
	printf("Enterd base is invalid");
}
return 0;
}
