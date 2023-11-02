#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int k = 1;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k+=2;
        printf("\n");
        
    }
    return 0;
}