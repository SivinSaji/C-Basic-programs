
#include<stdio.h>
#include<string.h>
int main()
{
  int *left,*right,length,i,temp;
  char str[100];
  printf("Enter a String: ");
  gets(str);
  length=strlen(str);
  
  for(i=0;i<length/2;i++)
  {
    left=str[i];
    right=str[length-i-1];
    temp=*left;
    *left=*right;
    *right=*left;
  }
  printf("%c",*str);
  return 0;
}
