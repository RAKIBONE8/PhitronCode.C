#include<stdio.h>
// No Return + No parameter
void sum(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s = x+y;
    printf("%d",s);
}
int main ()
{
    sum();
    return 0;
}