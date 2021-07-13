#include <stdio.h>
#include<math.h>
int binary(int);
int rec1(int);
int rec2(int);
int main()
{
    int t,b,i,a[100],j,p,q,r,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&b);
        a[i]=binary(b);
    }
    
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {  
            
             p=rec1(a[i]);
             q=rec1(a[j]);
             if(p>q)
             {
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
             if(p==q)
             {
                 r=rec2(a[i]);
                 s=rec2(a[j]);
                 if(r<s)
                 {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                 }
                 
             }
             
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
int binary(int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
int rec1(int n)
{
    int c=0,s;
    while(n!=0)
    {
    s=n%10;
    if(s==1)
    {
    c++;
    }
    n=n/10;
    }
    return c;
}
int rec2(int n)
{
    int c=0,s;
    while(n!=0)
    {
    s=n%10;
    if(s==0)
    {
    c++;
    }
    n=n/10;
    }
    return c;
    
}
