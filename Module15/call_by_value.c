#include<stdio.h>
void fun(int x)
{
    x = 200; // this value will not effect the of x int main function;
}   // this x variable is function variable this is occupying its own memory itself;
int main ()
{
    int x = 10;
    printf("main x address - %p\n",&x);
    fun(x);
    return 0;
}