 /*The total distance traveled by a vehicle in t seconds is given by 
  distance = ut + ½ at2 where u is the initial velocity ( meters per second), a is the acceleration ( meters per second2). Write a program to evaluate the distance traveled at regular intervals of time, given the values of u and a. The program should provide the flexibility to the user to select his own time interval and repeat the calculations for different values of u and a.*/
#include <stdio.h>
void main()
{
    int u,a,s,t=6;
    printf("enter u,a values\n");
    scanf("%d%d",&u,&a);
    s=(u*t)+((a*(t*t)))/2;
    printf("%d",s);
   }
