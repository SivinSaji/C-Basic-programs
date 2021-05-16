#include<stdio.h>
int main()
{
    int row,col,sparcematrix[100][100],compactmatrix[100][100],i,j,nzero=0;
    printf("Enter the order of the Matrix:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the Elements being most with Zero:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&sparcematrix[i][j]);
        }
    }
    
    printf("\n The Entered Matrix is: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",sparcematrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparcematrix[i][j]!=0)
            {
                compactmatrix[0][nzero]=i;
                compactmatrix[1][nzero]=j;
                compactmatrix[2][nzero]=sparcematrix[i][j];
                nzero++;
            }
        }
    }
    printf("The Resultant Matrix is...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<nzero;j++)
        {
			if(i==0&&j==0)
			{
				printf("Row:      ");
			}
			if(i==1&&j==0)
			{
				printf("Coloum:   ");
			}
			if(i==2&&j==0)
			{
				printf("Value:    ");
			}
            printf("%d ",compactmatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
