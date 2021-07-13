#include<stdio.h>
void main()
{
    int i,j,l,c=0;
    printf("enter:");
    scanf("%d",&l);
    for(i=1;i<l;i++)
    {
        for(j=1;j<l-i;j++)
        {
            printf(" ");
        }
        if(j==l-i)
        {
            printf("*");
        }
         if(i==l) 
               {
                  printf("*"); 
               }
        if(j==l-i+c)
        {
            printf("*");
        }
        c=c+2;
        printf("\n");
    }
}