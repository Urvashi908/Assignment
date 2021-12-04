#include<stdio.h>
int main()
{
	int i;
	char str[100];
	printf("enter your name ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++);
	printf("length of string %d ",i);
}
