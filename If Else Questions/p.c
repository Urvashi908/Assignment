//	Area and Circumference of a Circle
#include<stdio.h>
int add(int);
int add(int r)
{
    float c, area;
    c=2*3.14*r;
    printf("%2.f\n",c);
    area=3.14*r*r;
    printf("%2.f\n",area);

}
int main(){
    int r ,x;
    printf("enter radius \n");
    scanf("%d",&r);
    add(r);
}

