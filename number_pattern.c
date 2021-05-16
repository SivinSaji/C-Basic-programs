#include<stdio.h>
int main()
{
int num,i=1,new=0;
printf("Enter a number: ");
scanf("%d",&num);
while(i<=num)
{
	i=i*10;
}
while(i>1)
{
	new=num%i;
	printf("%d\n",new);
	i=i/10;
}
return 0;
}

