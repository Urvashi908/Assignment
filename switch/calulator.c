//	Calculator
#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("enter 1 for sum enter 2 for  or or multipilcation division divide :",n);
	scanf("%d",&n);
	printf("enter value of a and b : ",a,b);
	scanf("%d %d ",&a,&b);
	
	switch(n)
	{
		case 1:
			c=a+b;
			break;
			case 2:
				c=a-b;
				break;
				case 3:
					c=a*b;
					break;
					case 4:
						c=a%b;
						break;
						case 5:
							c=a/b;
							break;
	}
	printf("%d ",c);
}
