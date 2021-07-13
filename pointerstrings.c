#include<stdio.h>
void main()
{
    char str[100];
    int i=0;
    char *ptr=str;
    printf("enter elements");
    scanf("%c",ptr);
    while(*(ptr+i)!='\n')
    {
        i++;
        scanf("%c",ptr+i);
    }
    *(ptr+i)='\0';
    ptr=&str[0];

        while(*ptr!='\0')
    {

        if(*ptr>='A'&&*ptr<='Z')
        {
        printf("%c",*ptr+32);
        }
        else
        {
        printf("%c",*ptr-32);
        }
        ptr++;
    }

}