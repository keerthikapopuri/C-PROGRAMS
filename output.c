#include<stdio.h>
void main()
{
    int val=3;
    int *pval=&val;
    printf(" %d %d",val,*pval++);
}