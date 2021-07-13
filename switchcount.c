#include<stdio.h>
int main()
{
    int line=1,ch=0,word=1,i;
    char s[100];
    printf("enter the string\n");
    scanf("%[^$]",s);
    for(i=0;s[i]!='\0';i++)
    {
        switch(s[i])
        {
            case '\n': line++;
                       ch++;
                        break;
            case ' ': word++;
                        ch++;
                        break;
          default: ch++;
break;
        }
    }
    printf("%d %d %d",ch,line,word);
    return 0;
}
