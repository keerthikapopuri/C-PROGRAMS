#include<stdio.h>
void func(int*,int);
void main()
{
    int a[10],*p,i,j=10;
    printf("enter the elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    func(a,j);
}
void func(int *arr,int j)
{
    int i;
    for(i=0;i<j;i++)
    {
        if(*(arr+i)>0)
        printf("%d is positive\n",*(arr+i));
        else
        printf("%d is negitive\n",*(arr+i));
    }
}