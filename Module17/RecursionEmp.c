/*
#include<stdio.h>
void fun(int i,int limit)
{
    if(i > limit) // Base case
    {
        return;
    }
    printf("%d ",i);
    fun(i+1,limit); // - This funcn calls itself and waits till the base case hit;
}
int main ()
{
    fun(1,5);
    return 0;
}
*/

#include <stdio.h>
void fun(int i)
{
    if (i == 0) // Base case
    {
        return;
    }
    printf("%d ", i);
    fun(i - 1); // - This funcn calls itself and waits till the base case hit;
}
int main()
{
    fun(5);
    return 0;
}
