#include <stdio.h>
void  main()
{
    int i,n,flag,sum=0,r,temp,fact;
    printf("enter 1 for prime\nenter 2 for armstrong\n enter 3 for strong\n enter 4 for perfect\n");
    scanf("%d",&i);
    printf("enter number\n");
    scanf("%d",&n);
    switch(i)
    {
       case 1: for (i = 2; i < n; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
      break;
  }
      case 2:temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number"); 
break;
case 3:temp=n;
 while(n>0)
 {
     i=1,fact=1,sum=0;
 
     r=n%10;
     while(i<=r)
     {
        fact=fact*i;
        i++;
     }
     sum=sum+fact;
     n=n/10;
}
 
 if(sum==temp)
  printf("\nThe number %d is a strong number",temp);
 else
  printf("\nThe number %d is not a strong number",temp);
break;
  case 4:i=1;
 while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      printf("%d is a perfect number",sum);
  else if(sum<n)
      printf("%d is a deficient number",sum);
      else
      printf("%d is a abundent number",sum);
}
     
      }
