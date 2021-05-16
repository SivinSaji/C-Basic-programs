#include<stdio.h>
#include<math.h>
int main()
{
	int min,max,num,i,temp1,temp2,count=0,sum=0,rem;
	printf("Eneter lower limit:");
	scanf("%d",&min);
	printf("Eneter lower limit:");
	scanf("%d",&max);
	printf("\nAmstrong Number In the Given Range Are:\n");
	for(i=min;i<=max;i++)
	{
		num=i;
		temp1=i;
		temp2=i;
		while(num!=0)
		{
			
			count=count+1;
			num=num/10;
		}
		while(temp1!=0)
		{
			rem=temp1%10;
			sum=sum+pow(rem,count);
			temp1=temp1/10;
		}
		if(temp2==sum)
		{
			printf("%d\n",temp2);
		}
		sum=0;
		count=0;
	}
	return 0;
}
			
