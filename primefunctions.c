#include<stdio.h>
#include<conio.h>
int check();
void main()
{
    int c;
    c=check();
    if(c==2)
    printf("prime");
    else
    printf("composite");

    
}
int check()
{
    int n,i,c=0;
    printf("enter the value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
return c;
    
}