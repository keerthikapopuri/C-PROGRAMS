#include<stdio.h>
int *larger(int*,int*);
void main()
{
    int a=10,b=20;
    int *p;
    p=larger(&a,&b);
    printf("%d",p);
}
int *larger(int*x,int*y)
{
    if(*x>*y)
    return(x);
    else
    return(y);
}

