#include<stdio.h>
void main()
{
    int n,m,rev=0,r;
    printf("enter n value\n");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        r=m%10;
        rev=(rev*10)+r;
        m=m/10;
    }
    if(n==rev)
    {
        printf("given number is palindrome");
    }
    else
    {
        printf("given number is not a palindrome");
    }
}
