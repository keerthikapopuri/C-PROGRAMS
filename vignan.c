#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,n,num=0,r,i=0,res;
        printf("enter a & b");
        scanf("%d%d",&a,&b);
        while(a%10!=0)
        {
            n=a%10;
            res=n*b;
            if(res%10!=0)
            r=res%10;
            else
            r=res;
            num=num+pow(10,i)*r;
            i++;
        }
        printf("%d\n",num);
    }
}