#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the word: ");
	gets(str);
	printf("%c",*str);
	while(str[i]!='\0')
	{
		if(str[i]== ' ')
		{
			i++;
			printf("%c",(str[i]));
		}
		i=i+1;
	}
	return 0;
}

		
