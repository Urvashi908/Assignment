//"	Find diameter, circumference and area of a circle using functions.
#include<stdio.h>
void formula()
{
  float radius, area, circumference, diameter;
 
  printf("\n Please Enter the radius of a circle : ");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * 3.14 * radius;
  area = 3.14 * radius * radius; 
 
  printf("\n Diameter Of a Circle = %.2f\n", diameter);
  printf("\n Circumference Of a Circle = %.2f\n", circumference);
  printf("\n Area Of a Circle = %.2f\n", area);
 
  
}
int main()
{
  formula();
}
