#include<stdio.h>
int main(){

    

	int m,f,h,i;
    int l = 10;
       

    
 printf("enter 3 numbers");
	scanf("%d\n%d\n%d",&m,&f,&h);
	if (m>f&&m>h){
        printf("max. one is = %d",m);
    }
    else if (h>m&&h>f){
    printf("max. one is = %d",h);

    }
    else{
	printf("greatest number is = %d", f);
    }
	
	
   
 }
}
