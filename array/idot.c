#include<stdio.h>
void idot()
{
char ch[]="I AM AN IDIOT.";
char c='A';
int i=0;
printf("Write Your Name \n\n");
while(c)
{
c=getch();
printf("%c\a",ch[i]);
i++;
if(i==14)
{
printf(" "); i=0;
}
}
}
int main()
{
	idot();
}
