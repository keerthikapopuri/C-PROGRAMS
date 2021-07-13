#include <stdio.h>
void main() 
{
    char ch;
    printf("enter ch value\n");
    scanf(" %c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')
    printf("Is the character alphabetic");
else if(ch<='0'&&ch>='9')
printf("It is a numeric character");
else if(ch>='A'&&ch<='z')
printf("it is a uppercase letter");
else if(ch>='a'&&ch<='z')
printf("it is a lowercase letter");
else 
printf("enter wrong character");
}    
