#include<stdio.h>
int main(){
    int a,n,sum=0;
    printf("enter 5 digit nu.");
    
    scanf("%d",n);
    a=n%10;
    sum=sum + a;
 printf("%d",sum);
    return 0;
}