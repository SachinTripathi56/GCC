#include<stdio.h>
int main()
{
    
   for(int i = 0; i<=5;i++){
    if(i >0&&i<5){
   for(int j=0; j<i;j++ ){
         printf("*");

   } 
   printf("\n");
  
   }
    else if(i==5){
        for(int m=5; m>=0; m--){
            for(int  n=m; n>0; n--){
                printf("*");
            }
              printf("\n");
      }
     }
    }
    
    return 0;
}
