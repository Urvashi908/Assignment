#include<stdio.h>
int sum(int);
int sum(int num)
{
    int result = 0, fact = 1,i;
    for ( i = 1; i <= num; i++)
    {
        fact = fact * i;
 
        result = result + (i / fact);
    }
    return result;
}
 
int main()
{
    int num=5 ,x;
    printf(" %d", num);
    x=sum(num);
    printf("sum of series %d",x);
}
