#include<stdio.h>
int main()
{
	int amount,r2000,r100,r50,r500,r200,r20,r10,r5,r2,r1;
	printf("Enter a amount: ");
	scanf("%d",&amount);
	
		r2000=amount/2000;
		amount=amount%2000;
		r500=amount/500;
		amount=amount%500;
		r100=amount/100;
		amount=amount%100;
		r200=amount/200;
		amount=amount%200;
		r50=amount/50;
		amount=amount%50;
		r20=amount/20;
		amount=amount%20;
		r10=amount/10;
		amount=amount%10;
		r5=amount/5;
		amount=amount%5;
		r2=amount/2;
		amount=amount%2;
		r1=amount/1;
		amount=amount%1;

	printf("\n2000Rs = %d",r2000);
	printf("\n500Rs  = %d",r500);
	printf("\n100Rs  = %d",r100);
	printf("\n200Rs  = %d",r200);
	printf("\n50Rs   = %d",r50);
	printf("\n20Rs   = %d",r20);
	printf("\n10Rs   = %d",r10);
	printf("\n5Rs    = %d",r5);
	printf("\n2Rs    = %d",r2);
    printf("\n1Rs    = %d",r1);

return 0;
}
		
