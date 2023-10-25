#include<stdio.h>

// return_type name(parameter)
// {
//     code;

//     return task?
// }

// User defined function
int sum(int x,int y)
{
    //code
    int sum = x+y;
    return sum;
}
int main ()
{
    
    printf("%d",sum(10,20));
    return 0;
}