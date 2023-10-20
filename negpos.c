#include<stdio.h>
int main(){
    int n;

    printf("enter your number");
    scanf("%d",&n);

    if(n>0){
        printf("your number if positive");

    }
    else if(n<0){
        printf("number is negative");

    }
    else{
        printf("number is zeo");
    }
    return 0;
}