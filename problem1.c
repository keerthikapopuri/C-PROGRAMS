 /*n inventory management,the economic order quantity  for single item is given by
EOQ= 2*demand rate*set up costs/holding cost per unit time
TBO=sqrt(2*set up costs/demand rate*holding cost per time –unit time)
Write a c program to compute EOQ and TBO, given demand rate, set up costs and the holding costs.
Program:*/
#include <stdio.h>
#include<math.h>
void main() 
{
    int k,eoq,tbo,dr,suc,hc;
    
    printf("enter dr,suc,hc\n");
    scanf("%d%d%d",&dr,&suc,&hc);
    eoq=(2*dr*suc)/hc;
    k=(2*suc)/(dr*hc);
    tbo=sqrt(k);
printf("%d\n%d\n",eoq,tbo);
}   
