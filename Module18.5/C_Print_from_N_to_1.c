#include<stdio.h>
void PNum(int i)
{
    if(i==0)
    {
        return;
    }
    printf("%d",i);
    if(i>1)
    {
        printf(" ");
    }
    PNum(i-1);
}
int main ()
{
    int n;
    scanf("%d",&n);
    
    PNum(n);
    return 0;
}