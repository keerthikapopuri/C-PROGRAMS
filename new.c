#include<stdio.h>
void main()
{
int i=1, j=-14;
if((printf("%d", i)) < printf("%d", j)) printf("%d", i);
else
printf("%d", j);
}