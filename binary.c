#include<stdio.h>
#include<math.h>
void main()
{
    int d,r,i=0,b=0;
    printf("enter d value\n");
    scanf("%d",&d);
    while(d>0)
    {
        r=d%2;
        b=b+(r*pow(10,i));
        d=d/2;
        i++;
    }
    printf("b=%d",b);
}

