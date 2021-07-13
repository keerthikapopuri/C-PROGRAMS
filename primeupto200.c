#include<stdio.h>
void main()
{
    int i,fact,j;
    printf("Prime Numbers are: \n");
    for(i=1; i<=200; i++)
    {
        fact=0;
        for(j=1; j<=200; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d\t " ,i);
    }
}
