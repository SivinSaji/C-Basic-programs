#include<stdio.h>

int main()
{
	char str[100];
	int i,word=1; 


	printf("Enter a string: ");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]==' '|| str[i]=='\t' || str[i]=='\n')&&(str[i+1]!='\0'))
		{
			word=word+1;
		}
		i=i+1;
	}
	printf("Number of words : %d ",word);
	
}
