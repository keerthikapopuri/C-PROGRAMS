#include<stdio.h>
void main()
{
    int t1=55,t2=89,i,k;
    printf("the fibonacci series from 100 to 999 is\n");
    for(i=1;i<6;i++)
    {
    k=t1+t2;
    printf("%d\t",k);
    t1=t2;
    t2=k;
    }
}
