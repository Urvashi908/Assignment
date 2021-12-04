//"	Print all negative elements in an array.
#include<stdio.h>
int main()
{
	int i,a[100],n;
	printf("enter num",n);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	printf("all negative number:  ");
	for(i=0;i<n;i++)
	{
	if (a[i]<0)
	{
		printf("%d",&a[i]);
	}
    }
	return 0;
}
