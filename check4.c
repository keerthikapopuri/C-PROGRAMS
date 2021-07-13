#include<stdio.h>
void main()
{ 
    int num,*pnum1,*pnum2;
    pnum1=&num;
    *pnum1=10;
    pnum2=pnum1;
    printf("%d %d %d",num,*pnum1,*pnum2);
    printf("%d %d %d",num,pnum1,pnum2);
}