#include<stdio.h>
#include<math.h>
int main()
{

    double term=1.0,sum=0.0,deno=1.0;
    while(term>0.0001)
    {
		term=1/deno;
		term=pow(term,deno);
		sum=sum+term;
		deno++;
		printf("%lf\n",sum);
	}
	printf("sum= %lf",sum);
	return 0;
}
	
		
		
    
     
