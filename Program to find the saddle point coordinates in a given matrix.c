#include<stdio.h>
#define ROW 3
#define COLUMN 3
void saddlePoint();
int main(void)
{
	int matrix[ROW][COLUMN],i,j;
	printf("<-------Enter the elements in the matrix 1-------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix1[%d][%d] :-",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	saddlePoint(matrix);
	
	return 0;
}
void saddlePoint(int matrix[][COLUMN])
{
    int i,j,minrow[ROW],min,max,col,flag=0,k;
    for(i=0;i<ROW;i++)
    {
        min=matrix[i][0];
        col=0;
        for(j=0;j<COLUMN;j++){
            
            if(matrix[i][j]<min)
            {
                min=matrix[i][j];
                col=j;
            }
        }
        max=matrix[i][col];
        for(k=0;k<COLUMN;k++)
        {
            if(matrix[k][col]>max)
            {
                max=matrix[k][col];
            }
        }
        
        if(max==min)
        {
            printf("Saddle point in the matrix at position (%d,%d) is :-%d",i,col,max);
            flag=1;
        }
        
    }
    if(flag==0)
    {
        printf("No saddlePoint present in the matrix");
    }
}
