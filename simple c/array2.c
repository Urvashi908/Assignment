#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("\n enter total no of element");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
	 scanf("\n%d ",&a[i]);
	}
	printf("\n elements enterd are.....");
	for(i=0;i<=n-1;i++)
	{
	  printf("\n%d ",a[i]);
	}
}
