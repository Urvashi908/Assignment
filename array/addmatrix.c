//"	Add two matrices.
#include<stdio.h>
void summatrix()
{
	int a[],row,col,i,j,sum=0;
	printf("enter total number of row and column: ");
	scanf("%d%d",&row ,&col);
	
	printf("enter element in 2 d array :");
	for(i=0;i<=row-1; i++)
    {
    	for(j=0lj<=col-1;j++)
    	{
    		scanf("%d",a[i],a[j]);
    		sum=sum+a[i][j];
		}
	}
	printf("\n sum of all element =%d",sum);	
	
}
