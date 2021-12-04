#include<stdio.h>
int VIKASH(int ,int);
int VIKASH(int l,int b)
{
	int area;
	area=l*b/2;
	return area;
}
int main()
{
	int l,b,x;
	printf("enter any value of two no.");
	scanf("%d%d",&l,&b);
	x=VIKASH(l,b);
    printf("\n area %d of trangle",x);
}
