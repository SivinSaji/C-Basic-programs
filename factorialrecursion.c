#include<stdio.h>
int factorial(int);
int main()
{
int num,result;
printf("Enter a number to find the factorial: ");
scanf("%d",&num);
result=factorial(num);
printf("factorial of %d is:    %d",num,result);
return 0;
}


int factorial(int a)
{
 int fact;
 if(a==0)
 {
  fact=1;
 }
 else
 {
   fact=a*factorial(a-1);
 }
 return fact;
 }
