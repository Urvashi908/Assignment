//"	Area of a Circle
#include<stdio.h>
int area(int );
int area(int radius)
{
	 float area_circle;
	area_circle = 3.14 * radius * radius;
   printf("Area of circle : %f", area_circle);
}
int main(){
	 float radius;
	 printf("Enter the radius of circle : ");
     scanf("%f", &radius);
     area(int radius);
}
