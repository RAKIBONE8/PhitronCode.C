#include<stdio.h>
// Return + No parameter

int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int s = x+y;
    return s;
}
int main ()
{
    printf("%d",sum());
    return 0;
}