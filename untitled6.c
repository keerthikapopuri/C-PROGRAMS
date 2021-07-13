#include<stdio.h>
void main()
{
    char *str="abcdefg";
    (*str++);
    printf("%s",str);
}