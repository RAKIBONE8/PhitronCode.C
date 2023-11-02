#include<stdio.h>
void odd_even() 
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int even = 0;
    int odd = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0 && ar[i]!=1)
        {
           even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d ",even);
    printf("%d",odd);
}
int main()
{
    odd_even() ;
    return 0;
}