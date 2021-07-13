#include<stdio.h>
void main()
{
    int i,n;
    float sum=0.0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=(float)1/i;
        sum=sum+r;
    }
    printf(" the sum is %f",sum);
}
