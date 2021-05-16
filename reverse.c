#include<stdio.h>
int main()
{
int num,rem,d,sum=0;
printf("Enter the number:  ");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
d=d*10+rem;
sum=sum+rem;
num=num/10;
}
printf("Reverse of the number:%d\n",d);
printf("The sum of digits:%d  ",sum);
return 0;
}
