#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,n,l,la,lb,lc,ld,sum;
    printf("enter 5 digit nu");
    
    scanf("%d",&n);
    a=n%10;
  l = n/10;
   


    b=l%10;
  la = l/10;
    sum= sum + a;


    c=la%10;
  lb = la/10;
    sum= sum + a;

    d=lb%10;
      lc = lb/10;
    sum= sum + a;

    e=lc%10;
      ld=lc/10;
    sum= sum + a;
    

sum=e*pow(10,0)+d*pow(10,1)+c*pow(10,2)+b*pow(10,3)+a*pow(10,4);
    
 printf("%d",sum);

    return 0;
}