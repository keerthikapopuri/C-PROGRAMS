#include<stdio.h>
int isPrime(int);
void factors(int);
 int main()
{
   int n;
   printf("\n Enter any number:");
   scanf("%d",&n);
   factors(n); 
}
void factors(int n)
{
    int i,r;
    printf("\n Prime factors:");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           r=isPrime(i);
        if(r==1)
          printf("\n%d",i);
        }
    }

}
int isPrime(int n)
{
     int i,fcount;
     fcount=0;
     for(i=1;i<=n;i++)
     {
        if(n%i==0)
            fcount++;
     }
    if(fcount==2)
      return 1;
    else
      return 0;
} 
