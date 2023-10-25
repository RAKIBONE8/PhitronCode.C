#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int cntEven = 0;
    int cntOdd = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0 && ar[i]%3==0)
        {
            cntEven++;
        }
        else if(ar[i]%2==0)
        {
            cntEven++;
        }
        else if(ar[i]%3==0)
        {
            cntOdd++;
        }
    }

    printf("%d %d",cntEven,cntOdd);
    return 0;
}