#include <stdio.h>
 void  main()
    {   
     
     int n; 
     printf("enter number\n");
     scanf("%d",&n);
    
     printf("All prime factors of %d are: ",n);
     if (n>0)
	  {	
       while (n%2==0) 
        { 
            printf("2 "); 
            n /= 2; 
        } 
        for (int i = 3; i <= n; i+= 2) 
        { 
            while (n%i == 0) 
            { 
                printf("%d ",i); 
                n /= i; 
            } 
        } 
        if (n > 2) 
            printf("%d ",n); 
       }
       
	}
