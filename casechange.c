#include <stdio.h>
void main() 
{
    char ch;
    printf("enter lower case character\n");
    scanf(" %c",&ch);
    ch=ch-32;
    printf(" %c",ch);
}
