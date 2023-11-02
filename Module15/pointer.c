/*
#include<stdio.h>
int main ()
{
    int x = 100;
    int * ptr = &x;
    printf("x er address - %p\n",&x); // x address
    printf("ptr er value - %p\n",ptr);// x address is the value of ptr
    printf("ptr er address - %p\n",&ptr); // ptr address is not same because ptr is a variable which is carrying the address of x variable;
    return 0;
}
*/

#include<stdio.h>
int main ()
{
    int x = 100;
    int * ptr = &x;
    // x = 200;
    *ptr = 200;

    // x = *ptr both are same thing;

    printf("x value - %d\n",x);
    printf("x value - %d\n", *ptr);

    return 0;
}