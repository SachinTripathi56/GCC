#include<stdio.h>
#include<math.h>
int main(){
   float x1,x2,x3,y1,y2,y3;
   float l;
   printf("enter co ordinates(x1,y1)");
   scanf("%f%f",&x1,&y1);

   printf("enter co ordinates(x2,y2)");
   scanf("%f%f",&x2,&y2);

   printf("enter co ordinates(x3,y3)");
   scanf("%f%f",&x3,&y3);
 

   l=((0.5)*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))));
   printf("%f\n",l);
   if(l==0){
   printf("points lies on same line");  
   }
   else{
   printf("point doesn't lies on same"); 
   }

    return 0; 
}