#include<stdio.h>
// No Return + parameter

void sum(int x, int y)
{
    int s = x+y;
    printf("%d",s);
}
int main ()
{
    int a,b;
    scanf("%d",&a,&b);
    sum(a,b); // In this case only have to call the function
              // The printing task will done by the func^n itself
    return 0;
}