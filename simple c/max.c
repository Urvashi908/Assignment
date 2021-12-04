#include<stdio.h>
int main()
{
	int a[10],i,n,min;
	printf("\n enter total no of element");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
	 scanf("\n%d ",&a[i]);
	}
	min=a[0];
	for(i=1;i<=n-1;i++)
	{
	if(a[i]< min)	
	{
		min=a[i];
	}
}
	printf("min %d",min);
}
	
