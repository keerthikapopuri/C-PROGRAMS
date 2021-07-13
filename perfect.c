
#include<stdio.h>
void  main(){
  int n,i=1,sum=0;
 
  printf("Enter a number\n ");
  scanf("%d",&n);
 
  while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      printf("this is a perfect number %d ",i);
  else
      printf("this is not a  perfect number %d",i);
}

