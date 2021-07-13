#include<stdio.h>
void main()
{
    int i,marks[1000],n,sum=0;
    char g;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    scanf("%c",&g);
    if(g=='b')
    {
        for(i=0;i<n;i=i+2)
        {
            sum=sum+marks[i];
        }
        printf("%d",sum);
    }
    if(g=='g')
    {
        for(i=1;i<n;i=i+2)
        {
            sum=sum+marks[i];
        }
        printf("%d",sum);
    }
}
    
