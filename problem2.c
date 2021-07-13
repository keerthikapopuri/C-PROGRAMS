/*  Write a program to read the value of x and y and print the result of the following expressions in one line.
	i.)   (x + y) / (x - y)
	ii.)  (x + y) / 2
	iii.) (x + y) (x - y)
*/
#include<stdio.h>
void main()
{
    int x,y;
    printf("enter x,y values\n");
    scanf("%d %d",&x,&y);
    printf("%d\n",(x+y)/(x-y));
    printf("%d\n",(x+y)/2);
    printf("%d\n",(x+y)*(x-y));
}
