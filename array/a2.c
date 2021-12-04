#include<stdio.h>
void insert(int [])
void insert(int a[])
{
int n=5,pos=2,i,ele=100;
for(i=n-1;i>pos-i;i--)
{
	a[i+1]=a[i];
}
a[pos-1]=ele;
n+1;
printf("after insertion \n");
for(int i=0;i<n;i++)
 {
	printf("%d \n",a[i]);
 }
}
}
int main()
{
	int x[] ={10,20,30,40,50};
	insert(x);
	return 0;
}

 
