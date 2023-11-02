#include<stdio.h>
void fun(int * ptr) // this function is capable to recieve the address of x for the pointer;
{
    printf("p address - %p\n",ptr);
    *ptr = 50; // By dereferencing we can change the value of the address which the pointer contains;
}              // In one word we can access the value of x variable, because the pointer is containing the address of x;                     
int main ()                            
{                                      
    int x = 10;                        
    printf("x address - %p\n",&x);     
    fun(&x);  // calling the function by address of x;
    
    printf("x value - %d\n",x);
    return 0;
}