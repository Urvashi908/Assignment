#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("\n enter total no of element");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}
	printf("\n sum of all element =%d ",sum);
}
