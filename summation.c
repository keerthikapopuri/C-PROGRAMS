#include<stdio.h>
#include<math.h>
void main()
{
    int x,i=0,r,n,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter x value");
    scanf("%d",&x);
    while(i<=n)
    {
        r=pow(x,i);
        i++;
        sum=sum+r;
    }
    printf("%d",sum);
}
