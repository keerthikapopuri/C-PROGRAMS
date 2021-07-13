#include<stdio.h>
void main()
{
    int num, j, flag;
 
    printf("Enter a number \n");
    scanf("%d", &num);
 
    if (num <= 1)
    {
        printf("%d is not a prime numbers \n", num);
    }
    flag = 0;
    for (j = 2; j <= num / 2; j++)
    {
        if ((num % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("it is a prime number \n");
     else
        printf("it  is not a prime number \n");
}
