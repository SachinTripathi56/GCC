#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,z;
    printf("Enter the coordinate");
    scanf("%f %f" ,&x,&y);
    r = sqrt(x*x+y*y);
    z = pow((tan(y/x)),(-1));
    printf("pc are( %f,%f)",r,z);
    return 0;
}

