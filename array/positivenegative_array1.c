#include <stdio.h>
#include <conio.h>
  
int main(){
    int inputArray[100], elementCount, counter;
      
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
     
    /* Read array elements */
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
        
    /* Iterate form index 0 to elementCount-1 and 
       check for negative numbers */
    printf("Negative Elements in Array\n");
    for(counter = 0; counter < elementCount; counter++){
        if(inputArray[counter] < 0) {
            printf("%d ", inputArray[counter]);
        }
    }
          
    getch();
    return 0;
}
