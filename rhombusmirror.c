#include<stdio.h>
int main()
{
int i,j,l,k;       //declaring integer variables i,j for loops and l for number of rows/columns
printf("enter number of rows/columns\n");     //asking the user for input
scanf("%d",&l);      //taking input from the user
for(i=1;i<=l;i++)      //loop controlling number of rows
   {
      for(j=1;j<=l-i;j++) //inner loop for spaces
        {
           printf(" "); //printing spaces
        }
      for(k=1;k<=l;k++) //inner loop for printing the stars in each column of a row
        {
           printf("*"); //printing stars
        }
      printf("\n"); // printing a new line after each row
   }
}