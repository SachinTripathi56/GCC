#include<stdio.h>
int main()
{
      int a;
      while(1>0){
    printf("enter your number");
    scanf("%d",&a );
    for(int b = 2; b<a; b++){
        if(a%b!=0){
            printf("it is a prime number\n");
             break;
        }
        else{
            printf("it is not a prime number\n");
            break;
        }
    }
      }
}
