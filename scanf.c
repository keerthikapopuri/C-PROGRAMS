#include<stdio.h>
void read(int*);
void print(int*);
void main()
{
    int arr[10];
    read(arr);
    printf("the elements are\n");
    for( int i=0;i<10;i++)
    {
        printf("%d",arr[i]);

    }
    //we can also use print function to print values
}
void read(int *arr)
{
    int i;
    printf("enter values\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    } 
}
void print(int*arr)
{
    int i;
    printf("the values are\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}