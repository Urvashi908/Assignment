//•	Temperature Conversion Celsius To Fahrenheit And Vice Versa
#include<stdio.h>
float celsius_to_fahrenheit(float);
float celsius_to_fahrenheit(float x)
{
    float total;
    total = (x * 9/5) + 32;
    return total;
}
float fahrenheit_to_celsius(float);
float fahrenheit_to_celsius(float y)
{
    float result;
    result = (y - 32)*(5/9);
    return result;
}

int main(){
  char ch;
   float cel,temp;
   float fahren,temporary;
   printf("Enter your choice if you want to\n");
   printf("convert celsius to fahrenheit then press C\n");
   printf("convert fahrenheit to celsius then press F \n");
   scanf("%c",ch);
   switch(ch)
   {
        case 'C' : printf("Enter temperature in Celsius\n");
                  scanf("%f",&cel);
                  temp = celsius_to_fahrenheit(cel);
                  printf("Temperature in Fahrenheit : %.2f",temp);
                  break;
        case 'F' : printf("Enter temperature in Fahrenheit\n");
                  scanf("%f",&fahren);
                  temporary = fahrenheit_to_celsius(fahren);
                  printf("Temperature in Celsius : %.2f",temporary);
                  break;
        default : printf("Invalid choice");
    }

  return 0;
}
