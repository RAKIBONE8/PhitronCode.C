#include<stdio.h>
void pattern(int x)
{
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i;j++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
int main ()
{
    int n;
    scanf("%d",&n);

    pattern(n);
    return 0;
}