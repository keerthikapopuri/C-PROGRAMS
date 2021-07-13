#include <stdio.h>
void main() 
{
    int a,b,c;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
    printf("given triangle is euilateral");
    else if(a==b||b==c||c==a)
    printf("given triangle is isosceles");
    else
    printf("given triangle is scalene");
}    
