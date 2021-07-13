#include<stdio.h>
#include<string.h>
void main()
{
char *str="hello world!";
while(*str!='\0')
{
    printf("%c",*str);
    str++;
}
}