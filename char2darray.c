#include<stdio.h>
main()
{
char names[10][15];
int n,i;
printf("\n How many strings:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("\n Enter %d string:",i+1);
	scanf("%s",names[i]);
} 
printf("\n Given strings are:");
for(i=0;i<n;i++)
printf("%s\t",names[i]);
}