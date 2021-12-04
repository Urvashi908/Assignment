#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int x;
	x=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
	printf("sum of siries= %d",x);
	getch();
	return 0;
}
