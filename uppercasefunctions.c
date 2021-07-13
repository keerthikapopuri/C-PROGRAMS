#include<stdio.h>
char toUpperCase(char);
 char main()
{
	char alphabet,upper;
	printf("\n Enter any lowercase alphabet:");
	scanf("\n%c",&alphabet);
	upper=toUpperCase(alphabet);     /*call by value – actual argument: alphabet*/
	printf("\n Uppercase alphabet:%c",upper);
}
char toUpperCase(char ch)  /*formal argument:  ch*/ 
{
	if(ch>='a' && ch<='z')
		ch=ch-32;
	return ch;
}

