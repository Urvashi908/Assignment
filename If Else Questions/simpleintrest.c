//	Simple Interest
#include<stdio.h>
float si(float,float,float);
float si(float P,float R,float T)
{
	float SI;
	SI=(P*R*T)/100;//value dana ka ha 
	return SI;
}
int main()
{
 float P =34000;
 float R =30;
 float T = 5;
 float x;//function se value 
 x=si(P,R,T);	
 printf("\n\n Simple Interest is : %f", x);
}
