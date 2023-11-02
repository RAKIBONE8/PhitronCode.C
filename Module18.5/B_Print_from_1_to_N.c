#include<stdio.h>
void PNum(int i)
{
    if(i == 0)
    {
        return;
    }
    PNum(i-1);
    printf("%d\n", i);
}
int main ()
{
    int n;
    scanf("%d",&n);
    PNum(n);
    return 0;
}