#include <stdio.h>
void main() 
{
    int a,b,c,d;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b&&a>c)?a:(b>c)?b:c;
    printf("%d is big",d);
}    
