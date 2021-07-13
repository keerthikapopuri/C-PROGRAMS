#include<stdio.h>
void *my_func(int *a);

int main()
{
    int my_arr[] = {1,4,9,16,23}, i,*p;
    printf("Original array: \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", my_arr[i]);
    }

    p=my_func(my_arr);

    printf("\n\nModified array : \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    // signal to operating system program ran fine
    return 0;
}

void *my_func(int *a)
{
    int i;

    // increment original elements by 5

    for(i = 0; i < 5; i++)
    {
        a[i] = a[i] + 5;
    }
    return a;
}