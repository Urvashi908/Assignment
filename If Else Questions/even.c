#include<stdio.h>
int even(int);
int even(int n)
{
	if(n%2==0)
	{
		printf("%d even ",n);
	}
	else
	{
		printf("%d odd",n);
	}
	
}
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
    even(n);
}

