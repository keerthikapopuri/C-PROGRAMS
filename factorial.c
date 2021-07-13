#include<stdio.h>  
void main()    
{    
 int i,fact=1,n;    
 printf("Enter a number\n");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",n,fact);    

}   
