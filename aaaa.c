#include <stdio.h>
#include <string.h>
#include<conio.h>
void substring(char str[100],char substr[30],int i);
void main()
{
char str[100],substr[30];
int i;
printf("\nEnter the main string:");
gets(str);
printf("\nEnter the sub string:");
gets(substr);
printf("\nEnter the position where you want to insert sub string:");
scanf("%d",&i);
substring(str,substr,i);
}
void substring(char str[100],char substr[30],int i)
{
char temp[100];
int m,n,k,j;
m=strlen(str);
n=strlen(substr);
for(j=0;j<i;j++)
{
temp[j]=str[j];
}
for(j=i,k=0;j<n+i,k<n;j++,k++)
temp[j]=substr[k];
for(j=n+i,k=i;j<m,k<m;j++,k++)
temp[j]=str[k];
puts(temp);
}