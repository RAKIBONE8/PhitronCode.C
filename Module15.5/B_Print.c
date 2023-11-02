#include<stdio.h>
void nums(int a)
{  
    for(int i=1;i<=a;i++)
    {
        printf("%d",i);
        if (i < a)
        {
            printf(" ");
        }
    }
    
}
int main ()
{
    int n ;
    scanf("%d",&n);
    nums(n);

    return 0;
}