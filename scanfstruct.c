#include<stdio.h>
typedef struct 
{
    int km;
    int m;
}dist;
void scan(dist *);
void print(dist *);
void main()
{
    dist s[2];
    for(int i=0;i<2;i++)
    {
    scan(s);
    print(s);
    //here we can also use the array within the main function as we are passing as argument
    //we can also return structure by return dist;
    }

}
void scan(dist *s)
{ 
    printf("enter the elements\n"); 
    scanf("%d%d",&s->km,&s->m);

}
void print(dist *s)
{
    printf("the elements are\n");
    printf("%d %d",s->km,s->m);
}
