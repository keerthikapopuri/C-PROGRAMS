#include <stdio.h>
#include<math.h>
void main() 
{
    int a,b,c;
    float d,e;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    d=(-b+sqrt(b*b-4*a*c))/(2.0*a);
    e=(-b-sqrt(b*b-4*a*c))/(2.0*a);
    printf("the roots of quadratic equation are %f and %f",d,e);
    
}    
