#include <stdio.h>
#include<string.h>
int main()
{
    int t,k,l,i,q;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {
        int flag=0;
        scanf("%d",&k);
        q=k;
        while(k--)
        {
            int c=0;
            scanf("%s",str);
            if(str[0]>='a'&&str[0]<='z')
              l=1;
            else
            l=2;
           c=func(str[3],l);
            if(c==strlen(str))
                flag++;
        }
        if(flag==q)
            printf("yes");
            else
            printf("no");
            
            printf("\n");
    }
}
int func(char str[100],int l)
{ 
    int i=0,c=0;
    switch(l)
            {
                case 1:
                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='a'&&str[i]<='m')
                    {
                        c++;
                    }
                }
                break;
                case 2:
                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='N'&&str[i]<='Z')
                    {
                        c++;
                    }
                }
                break;
            }
            
            return c;
}


