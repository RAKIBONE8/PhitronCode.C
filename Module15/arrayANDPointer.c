#include<stdio.h>
int main ()
{
    int a[5] = {10,20,30,40,50};
    // printf("index address - %p\n",&a[0]);
    // printf("0th index address - %p\n",a);

    // printf("0th index value - %d\n",a[0]);
    // printf("0th index value - %d",*a);

    // printf("1th index value - %d\n", a[1]);
    // printf("1th index value - %d", *(a+1));

    a[1] = *(a+1); // both are same thing;
    *(a+1) = a[1];
    return 0;
}