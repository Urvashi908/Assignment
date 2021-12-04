//	Percentage of 5 Subject
#include<stdio.h>
int persentage(int,int,int,int,int);
int persentage(int s1,int s2,int s3,int s4,int s5 )
{
	float per;
	int sum =0;
	int total=500;
	sum=s1+s2+s3+s4+s5;
	per=(sum*100)/total;
	return per;
}
int main()
{
	int s1=52;
	int s2=55;
	int s3=69;
	int s4=99;
	int s5=89;
	float p;
	p=persentage(s1,s2,s3,s4,s5);
	printf("persentage of 5 subject %f",p);
}
