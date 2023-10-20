#include<stdio.h>
#include<math.h>
int main(){
    int a,n,l,la,lb,lc,ld,sum=0;
    printf("enter 5 digit nu");
    
    scanf("%d",&n);
    a=n%10;
  l = n/10;
    sum= sum + a;


    a=l%10;
  la = l/10;
    sum= sum + a;


    a=la%10;
  lb = la/10;
    sum= sum + a;

    a=lb%10;
      lc = lb/10;
    sum= sum + a;

    a=lc%10;
      ld=lc/10;
    sum= sum + a;
    

 printf("%d",sum);

    return 0;
}