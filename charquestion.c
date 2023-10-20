#include <stdio.h>
int main()

{
    char a;
    printf("enter your character");
    scanf("%c",&a);
    if(65<=a&&a<=90){
    printf("its is uppercase");
    }
    else if(97<=a&&a<=122){
    printf("its is lowercase");
    }       
    else if(48<=a&&a<=57){ 
    printf("its num");
    }
    else{
    printf("condition not statisfied");
    }
    return 0;
}
