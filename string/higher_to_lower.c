#include<string.h>
#include<stdio.h>
int main()
{
    char c[100];
    int i;
    printf("Please enter a string\n");
    gets(c);
    for(i=0; c[i]!='\0'; i++){
        if(c[i]>='A'&&c[i]<='Z'){
            c[i]=c[i]+32;
            
        }
        
    }
    printf("%s",c);

    return 0;
}
