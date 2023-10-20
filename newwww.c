#include<stdio.h>
int main(){
    int n;

    printf("enter your number");
    scanf("%d",&n);
    if((n%5==0)&&(n%11==0)){
        printf("yes it is divisible by 5 & 11");
    }
    else{
        printf("it is not");
    }
    return 0;
}
