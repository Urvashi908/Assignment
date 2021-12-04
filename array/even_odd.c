#include<stdio.h>
void evenodd()
{
	int n;
	printf("enter number to check:");
	scanf("%d",&n);
	if(n%2==0)
	printf("even");
	else
	printf("odd");
	
}
int main()
{
	evenodd();
}
