#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int  flag=0,i,l;
	printf("Enter a string: ");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-i-1])
		{
			flag=1;
		}
	}
		if(flag==0)
		{
			printf("String is palindrome");
		}
		else
		{
			printf("Not palindome");
		}
		return 0;
	}
	
	
			
