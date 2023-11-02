#include<stdio.h>
void fun()
{
    printf("Fun\n");
    fun(); // - waiting
}
int main ()
{
    fun(); // - waiting
    return 0;
}