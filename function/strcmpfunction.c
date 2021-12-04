#include <stdio.h>
#include <string.h>
  
int main( )
{
   char str1[] = "urvshi" ;
   char str2[] = "nigam" ;
     
   int j = strcmpi ( str1, str2 ) ;
     
   printf ( "The function returns = %d",j ) ;
   return 0;
}
