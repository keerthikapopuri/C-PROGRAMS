#include<stdio.h>
void main()
{
    int i,r=0,a;
    printf("enter number to be reversed\n");
    scanf("%d",&i);
    while(i>0)
    {
        a=i%10;
        r=r*10+a;
        i=i/10;
    }
    printf("the reverse number is %d",r);
}
