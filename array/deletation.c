#include<stdio.h>
void insert()
{
	int a[100],i,n,pos,value;
		printf("enter number of element ",n);
	    scanf("%d",&n);
	
	printf("enter array element:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter pos:",pos);
	scanf("%d",&pos);
	
    printf("enter value u wanna insert \n :");
	scanf("%d",&value);
	
	for(i=pos;i<n;i++)
	{
	a[i-1]=a[i];
    }
    a[pos-1]=value;	
    printf("result of array is\n");
    for(i=0;i<=n;i++)
    printf("%d\n",a[i]);
}
    int main()
    {
    	insert();
	}
	

