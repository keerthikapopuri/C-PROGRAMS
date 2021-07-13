#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char flip(char c );

int main(void) {
	long long int t;
	scanf("%lld",&t);
	
	while(t--)
	{
	    char *s,*p,*q;
	    q=(char*)malloc(100000*sizeof(char));
	    scanf("%s",s);
	     int l=strlen(s);
	     s=(char*)realloc(s,l+1);
	     p=(char*)malloc(l*sizeof(char));
	     q=(char*)malloc(l*sizeof(char));
	     int j=-1,k=-1,i;
	     for(i=0;i<l;i++)
	     {
	      if(s[i]==s[l-1-i])
	        p[++j]=i+1;
	      
	      else if(s[i]==flip(s[l-i-1]))
	         q[++k]=i+1; 
	      
	     }
	     printf("%d %d\n",j+1,k+1);
	     
	     for(i=0;i<=j;i++)
	     {
	         printf("%d ",p[i]);
	     }
	     printf("\n");
	     for(i=0;i<=k;i++)
	     {
	         printf("%d ",q[i]);
	     }
	     free(s);
	     free(p);
	     free(q);
	}
	return 0;
}
char flip(char c )
{
  if(c=='1')
  return '0';
  else
  return '1';
}




