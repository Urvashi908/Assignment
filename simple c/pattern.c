#include <stdio.h>  
int main()  
{  
    int i,j,n,p;
	printf("enter any number of odd n for 3 or p for 5");
	scanf("%d%d",&n,&p);
  
   for( i=1;i<=n;i++)  
   {
       for( j=1;j<=n;j++)  
       {  
       if(n==3)
        {
         else if (i==1||i==7||j==1||j==7||i==2 && j==3||i==3 && j==3)
           printf("*");  
             else  
               printf(" ");
       }
        } 
   }
     
      printf("\n");    
    return 0;  
}
