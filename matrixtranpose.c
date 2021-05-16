#include<stdio.h>
int main()
{
int row,coloumn,i,j,matrix[100][100]; 
printf("Enter the numbers in a row: ");
scanf("%d",&row);
printf("Enter the number of coloumn: ");
scanf("%d",&coloumn);
printf("Enter the values of matrix\n");
for(i=0;i<row;i++){
	for(j=0;j<coloumn;j++){
		scanf("%d",&matrix[i][j]);
	}
	
} 
printf("The enterd matrix is:\n ");
for(i=0;i<row;i++)
        {
	for(j=0;j<coloumn;j++)
           {
         printf("%d ",matrix[i][j]);}
		printf("\n");
		}
		printf("Transpose of the metrix\n");
		for(i=0;i<coloumn;i++)              
                  { 
	               for(j=0;j<row;j++) 
                          {
		            printf("%d ",matrix[j][i]);
                               }
		            printf("\n");
		               }
return 0;
}



