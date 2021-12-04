#include<stdio.h>
int main()
{
	char c[1000];
	int i;
	printf("enter string:");
	gets(c);
	
	for(i=0;c[i]!='\0';i++)
	{

	if(c[i]>='a' && c[i]<='z')
	c[i]=c[i]+32;
	
	else if(c[i]>='A' && c[i]<='Z')
	
		c[i]=c[i]-32; 
    }
    printf("the toggle value = '%s'	",c);
	
}
